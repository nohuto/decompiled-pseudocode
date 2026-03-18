/*
 * XREFs of MiAddLockedPageCharge @ 0x140058004
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14004FA88 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeProtoAddressValid @ 0x1400B4F10 (MiMakeProtoAddressValid.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiLockDownWorkingSet @ 0x140140AFC (MiLockDownWorkingSet.c)
 *     MiBuildForkPageTable @ 0x1401422DC (MiBuildForkPageTable.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1402568B0 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x140260BA0 (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int locked; // r10d
  char v6; // r11

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(a1, v6, v3, v4);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
