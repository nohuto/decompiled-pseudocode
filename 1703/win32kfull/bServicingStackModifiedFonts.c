/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C0008470
 * Callers:
 *     InitFNTCache @ 0x1C000F2D0 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00084C4 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C000F7D0 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
