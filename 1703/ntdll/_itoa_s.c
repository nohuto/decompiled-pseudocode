/*
 * XREFs of _itoa_s @ 0x18009FDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009FF90 @ 0x18009FF90 (sub_18009FF90.c)
 */

errno_t __cdecl itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return sub_18009FF90(Value, (_DWORD)Buffer, BufferCount, 10, 1);
  else
    return sub_18009FF90(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
