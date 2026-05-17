/*
 * XREFs of _ltoa_s @ 0x180095120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800952A0 @ 0x1800952A0 (sub_1800952A0.c)
 */

errno_t __cdecl ltoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_1800952A0(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
