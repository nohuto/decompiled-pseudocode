/*
 * XREFs of _ltow_s @ 0x180095410
 * Callers:
 *     sub_18000A514 @ 0x18000A514 (sub_18000A514.c)
 *     sub_1800DB9E4 @ 0x1800DB9E4 (sub_1800DB9E4.c)
 * Callees:
 *     sub_1800955AC @ 0x1800955AC (sub_1800955AC.c)
 */

errno_t __cdecl ltow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_1800955AC(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
