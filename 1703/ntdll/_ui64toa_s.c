/*
 * XREFs of _ui64toa_s @ 0x18009FE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009FE84 @ 0x18009FE84 (sub_18009FE84.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_18009FE84(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
