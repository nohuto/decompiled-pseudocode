/*
 * XREFs of ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C00D3080
 * Callers:
 *     bEnableFontDriver @ 0x1C00D2F80 (bEnableFontDriver.c)
 *     FontDriverQueryRoutine @ 0x1C0389BE0 (FontDriverQueryRoutine.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall FntCacheHDEV(struct PDEV *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C032C4C0 & 3) != 0 && qword_1C032C4C8 && (_DWORD)v3 )
    *(_QWORD *)(qword_1C032C4C8 + 8 * v3 + 48) = a1;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
