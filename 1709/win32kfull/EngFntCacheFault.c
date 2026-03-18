/*
 * XREFs of EngFntCacheFault @ 0x1C02686B0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C01426D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     bLoadTTF_Cache @ 0x1C0229608 (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C022C6F4 (vFontFileCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00BF290 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C0327740 & 3) != 0 && qword_1C0327748 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C0327748 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C0327748 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
