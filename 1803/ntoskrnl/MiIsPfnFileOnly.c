/*
 * XREFs of MiIsPfnFileOnly @ 0x140121930
 * Callers:
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x14000318C (MiCanPageMove.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140121970 (MiActivePageClaimCandidate.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMirrorGatherBrownPages @ 0x140156670 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1402568B0 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14025E0C4 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x140260BA0 (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(_QWORD *)(a1 + 40) >> 52) & 1LL;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( !v1 )
      return 0LL;
  }
  else if ( !v1 )
  {
    return 0LL;
  }
  return 1LL;
}
