/*
 * XREFs of _ui64tow_s @ 0x1800A0130
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0164 @ 0x1800A0164 (sub_1800A0164.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800A0164(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
