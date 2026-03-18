/*
 * XREFs of MiGetPfnPriority @ 0x14004BD90
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400010A4 (MmSetPfnListPriorities.c)
 *     MiTrimThisWsle @ 0x1400110FC (MiTrimThisWsle.c)
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x1400CB30C (MiReplaceNumaStandbyPage.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x14010C3B8 (MiQueryPfn.c)
 *     MiUpdatePrefetchPriority @ 0x140113880 (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x14012A1B0 (MiUpdatePageAttributeStamp.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14021EA1C (MiUpdateOldPteWorker.c)
 *     MiStoreCheckCandidatePage @ 0x14022C1C4 (MiStoreCheckCandidatePage.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
