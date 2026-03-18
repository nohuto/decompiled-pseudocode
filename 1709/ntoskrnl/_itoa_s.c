/*
 * XREFs of _itoa_s @ 0x140163430
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x1401635DC (xtoa_s.c)
 */

errno_t __cdecl itoa_s(int Value, char *DstBuf, size_t Size, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtoa_s(Value, (_DWORD)DstBuf, Size, 10, 1);
  else
    return xtoa_s(Value, (_DWORD)DstBuf, Size, Radix, 0);
}
