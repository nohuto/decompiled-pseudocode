/*
 * XREFs of _itow_s @ 0x1800A00D0
 * Callers:
 *     sub_180055F94 @ 0x180055F94 (sub_180055F94.c)
 *     sub_1800E1D24 @ 0x1800E1D24 (sub_1800E1D24.c)
 * Callees:
 *     sub_1800A0284 @ 0x1800A0284 (sub_1800A0284.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return sub_1800A0284(Value, (_DWORD)Buffer, BufferCount, 10, 1);
  else
    return sub_1800A0284(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
