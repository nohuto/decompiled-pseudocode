/*
 * XREFs of _ultoa_s @ 0x18009FE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009FF90 @ 0x18009FF90 (sub_18009FF90.c)
 */

errno_t __cdecl ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_18009FF90(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
