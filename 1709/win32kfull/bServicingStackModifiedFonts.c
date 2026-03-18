/*
 * XREFs of bServicingStackModifiedFonts @ 0x1C00BF23C
 * Callers:
 *     InitFNTCache @ 0x1C00C0ED0 (InitFNTCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00BF290 (bSetFntCacheReg.c)
 *     bQueryFntCacheReg @ 0x1C00C1354 (bQueryFntCacheReg.c)
 */

__int64 bServicingStackModifiedFonts()
{
  bQueryFntCacheReg(ghkeyGreInitialize);
  bSetFntCacheReg(2LL, 2LL);
  return 1LL;
}
