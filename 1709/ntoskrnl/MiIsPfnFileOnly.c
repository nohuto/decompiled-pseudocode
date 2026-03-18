/*
 * XREFs of MiIsPfnFileOnly @ 0x140078F10
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x140219F0C (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140223474 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1402279A0 (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
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
