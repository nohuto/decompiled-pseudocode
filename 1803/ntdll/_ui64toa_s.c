/*
 * XREFs of _ui64toa_s @ 0x180095150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095184 @ 0x180095184 (sub_180095184.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return sub_180095184(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
