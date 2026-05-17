/*
 * XREFs of _ultow_s @ 0x180095460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800955AC @ 0x1800955AC (sub_1800955AC.c)
 */

errno_t __cdecl ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800955AC(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
