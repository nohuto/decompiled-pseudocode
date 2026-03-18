/*
 * XREFs of MiGetPagingFileOffset @ 0x14010C6B8
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiComputeFaultCluster @ 0x140109A10 (MiComputeFaultCluster.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14010C2B8 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFlowThroughInsertNode @ 0x1401303B8 (MiFlowThroughInsertNode.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiDbgMarkPfnModified @ 0x1402279A0 (MiDbgMarkPfnModified.c)
 *     MiStoreUpdatePagefileHash @ 0x14022CC04 (MiStoreUpdatePagefileHash.c)
 *     MiComputePageHash @ 0x140231ED8 (MiComputePageHash.c)
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 *a1)
{
  __int64 PteShadow; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  if ( (PteShadow & 4) != 0 )
    return MiGetPteTimeStamp(PteShadow);
  else
    return 0LL;
}
