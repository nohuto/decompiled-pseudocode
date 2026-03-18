/*
 * XREFs of MiGetPfnPriority @ 0x14011B8F0
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14000391C (MiReplaceNumaStandbyPage.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiUpdatePrefetchPriority @ 0x1400AE9F0 (MiUpdatePrefetchPriority.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1400B4E94 (MiQueryPfn.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x1400C95F8 (MiUpdatePageAttributeStamp.c)
 *     MiStoreCheckCandidatePage @ 0x1400D64CC (MiStoreCheckCandidatePage.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiTrimThisWsle @ 0x14012ABC0 (MiTrimThisWsle.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MmSetPfnListInfo @ 0x140147CE0 (MmSetPfnListInfo.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401500F4 (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14025A8AC (MiUpdateOldPteWorker.c)
 *     MiInsertNumaStandbyPage @ 0x140265A28 (MiInsertNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
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
