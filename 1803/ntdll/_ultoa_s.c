/*
 * XREFs of _ultoa_s @ 0x180095170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800952A0 @ 0x1800952A0 (sub_1800952A0.c)
 */

errno_t __cdecl ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_1800952A0(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
