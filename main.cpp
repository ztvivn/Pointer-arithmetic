#include <iostream>


int main() 
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto *ptr = arr;

    for(int i = 0; i < 3; ++i) ++ptr;

    std::cout << *ptr << '\n';

    return 0;
}