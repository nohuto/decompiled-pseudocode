/*
 * XREFs of EngFntCacheFault @ 0x1C0269950
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C013B8D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     bLoadTTF_Cache @ 0x1C0228090 (bLoadTTF_Cache.c)
 *     vFontFileCache @ 0x1C022B1A4 (vFontFileCache.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00084C4 (bSetFntCacheReg.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C032C4C0 & 3) != 0 )
  {
    if ( qword_1C032C4C8 )
    {
      if ( iFaultMode - 1 <= 1 )
      {
        v3 = *(_DWORD *)(qword_1C032C4C8 + 16);
        if ( (v3 & 1) == 0 )
        {
          v4 = v3 | 1;
          *(_DWORD *)(qword_1C032C4C8 + 16) = v4;
          bSetFntCacheReg(1u, v4);
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
