/*
 * XREFs of MiInvalidPteConforms @ 0x14017CEB0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x1400B60C0 (MiUnlinkStandbyBatch.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400CDF50 (MiUpdatePfnPriorityByPte.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiTryLockLeafPage @ 0x14010AED8 (MiTryLockLeafPage.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiCaptureProtectionFromProto @ 0x14021C6BC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0;
  if ( a1 && qword_14036C200 )
    return (qword_14036C200 & a1) != 0;
  return 1;
}
