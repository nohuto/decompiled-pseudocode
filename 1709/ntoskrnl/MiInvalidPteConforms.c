/*
 * XREFs of MiInvalidPteConforms @ 0x14017C70C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiUpdatePfnPriorityByPte @ 0x140036670 (MiUpdatePfnPriorityByPte.c)
 *     MiUnlinkStandbyBatch @ 0x140036990 (MiUnlinkStandbyBatch.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiTryLockLeafPage @ 0x1400CC170 (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiCaptureProtectionFromProto @ 0x1402292FC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0;
  if ( a1 && qword_140388548 )
    return (qword_140388548 & a1) != 0;
  return 1;
}
