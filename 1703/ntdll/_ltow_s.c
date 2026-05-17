/*
 * XREFs of _ltow_s @ 0x1800A0100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0284 @ 0x1800A0284 (sub_1800A0284.c)
 */

errno_t __cdecl ltow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return sub_1800A0284(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
