/*
 * XREFs of bFntCacheDisabled @ 0x1C000F75C
 * Callers:
 *     InitFNTCache @ 0x1C000F2D0 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1C000F7D0 (bQueryFntCacheReg.c)
 */

__int64 bFntCacheDisabled()
{
  unsigned int v0; // ebx

  v0 = 0;
  bQueryFntCacheReg(ghkeyGreInitialize);
  if ( !G_fConsole )
    return (unsigned int)bQueryFntCacheReg(ghkeyGreInitialize) == 0;
  return v0;
}
