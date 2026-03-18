/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x1C0249A34
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0056340 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00EACD4 (GreAddFontResourceWInternal.c)
 *     GreAddFontMemResourceEx @ 0x1C026A930 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C0113828 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C01138E4 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 bInitPrivatePFT(void)
{
  BOOL v0; // ebx
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  if ( gpPFTPrivate )
  {
    v0 = 1;
  }
  else
  {
    gpPFTPrivate = (struct PFT **const)pAllocateAndInitializePFT(20);
    v0 = gpPFTPrivate != 0LL;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
