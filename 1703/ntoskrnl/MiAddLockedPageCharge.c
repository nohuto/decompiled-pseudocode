/*
 * XREFs of MiAddLockedPageCharge @ 0x140109894
 * Callers:
 *     MiLockDownWorkingSet @ 0x140001538 (MiLockDownWorkingSet.c)
 *     MiBuildForkPageTable @ 0x140002C30 (MiBuildForkPageTable.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x1400788F8 (MiMakeProtoAddressValid.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14010A810 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MiMapSystemCachePage @ 0x140212408 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x14021B0FC (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned int locked; // r9d
  char v5; // r10

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
