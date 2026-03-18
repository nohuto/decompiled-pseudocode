/*
 * XREFs of MiAddLockedPageCharge @ 0x140027170
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400CBFFC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiBuildForkPageTable @ 0x1400CEA74 (MiBuildForkPageTable.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x14010C53C (MiMakeProtoAddressValid.c)
 *     MiLockDownWorkingSet @ 0x140120080 (MiLockDownWorkingSet.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiMapSystemCachePage @ 0x140219F0C (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1402279A0 (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int locked; // r9d
  unsigned int v6; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1, a2, a3, 1LL) )
  {
    locked = MiChargeForLockedPage(v4, v6);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
