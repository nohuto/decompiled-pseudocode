/*
 * XREFs of MiIsPfnFileOnly @ 0x1400CB1E0
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiMapSystemCachePage @ 0x140212408 (MiMapSystemCachePage.c)
 *     MiDbgMarkPfnModified @ 0x14021B0FC (MiDbgMarkPfnModified.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v1 & 0x10000000000000LL) == 0 )
      return 0LL;
  }
  else if ( (v1 & 0x10000000000000LL) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
