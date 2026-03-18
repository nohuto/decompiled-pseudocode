/*
 * XREFs of _itow_s @ 0x14016EF20
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x140154D60 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x14016F0E4 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  if ( Radix == 10 && Val < 0 )
    return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, 10, 1);
  else
    return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
