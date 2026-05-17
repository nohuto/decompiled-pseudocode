/*
 * XREFs of _ltoa_s @ 0x18009FE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009FF90 @ 0x18009FF90 (sub_18009FF90.c)
 */

errno_t __cdecl ltoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_18009FF90(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
