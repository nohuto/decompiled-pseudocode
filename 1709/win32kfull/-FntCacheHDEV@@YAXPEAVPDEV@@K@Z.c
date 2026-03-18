/*
 * XREFs of ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C00FEC90
 * Callers:
 *     bEnableFontDriver @ 0x1C00FEB90 (bEnableFontDriver.c)
 *     FontDriverQueryRoutine @ 0x1C0383CD0 (FontDriverQueryRoutine.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall FntCacheHDEV(struct PDEV *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( (dword_1C0327740 & 3) != 0 && qword_1C0327748 && (_DWORD)v3 )
    gaFntPDev[v3] = a1;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
