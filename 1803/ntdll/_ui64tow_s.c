/*
 * XREFs of _ui64tow_s @ 0x180095440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095474 @ 0x180095474 (sub_180095474.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_180095474(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
