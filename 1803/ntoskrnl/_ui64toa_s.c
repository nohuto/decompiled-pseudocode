/*
 * XREFs of _ui64toa_s @ 0x14018D320
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x14018D35C (x64toa_s.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Val, char *DstBuf, size_t Size, int Radix)
{
  return x64toa_s(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
