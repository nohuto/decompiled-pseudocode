/*
 * XREFs of MiInvalidPteConforms @ 0x1401A6560
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x1400306A0 (MiUnlinkStandbyBatch.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiTryLockLeafPage @ 0x1400518D8 (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiUpdatePfnPriorityByPte @ 0x140128510 (MiUpdatePfnPriorityByPte.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiInvalidPteConforms(__int64 a1)
{
  if ( (a1 & 1) != 0 )
    return 0;
  if ( a1 && qword_1403CB6E0 )
    return (qword_1403CB6E0 & a1) != 0;
  return 1;
}
