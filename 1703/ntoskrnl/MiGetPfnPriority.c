/*
 * XREFs of MiGetPfnPriority @ 0x1400C3D60
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiUpdatePageAttributeStamp @ 0x140032700 (MiUpdatePageAttributeStamp.c)
 *     MiStoreCheckCandidatePage @ 0x140056BA4 (MiStoreCheckCandidatePage.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x140075CB4 (MiReplaceNumaStandbyPage.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x140078880 (MiQueryPfn.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiInsertNumaStandbyPage @ 0x1400AA4D4 (MiInsertNumaStandbyPage.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiUpdatePrefetchPriority @ 0x1400FCFF0 (MiUpdatePrefetchPriority.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401393EC (MiUnlinkNumaStandbyPage.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 *     MiUpdateOldPte @ 0x140215910 (MiUpdateOldPte.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
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
