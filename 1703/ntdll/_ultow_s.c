/*
 * XREFs of _ultow_s @ 0x1800A0150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0284 @ 0x1800A0284 (sub_1800A0284.c)
 */

errno_t __cdecl ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800A0284(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
