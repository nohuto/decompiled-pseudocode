/*
 * XREFs of MiGetPagingFileOffset @ 0x14013C69C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiComputeFaultCluster @ 0x140056C60 (MiComputeFaultCluster.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiFlowThroughInsertNode @ 0x1400D2638 (MiFlowThroughInsertNode.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiStoreUpdatePagefileHash @ 0x14013C1D8 (MiStoreUpdatePagefileHash.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x140153754 (MiComputePageHash.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x140260BA0 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140263814 (MiWorkingSetInfoCheckPageTable.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) != 0 )
    return MiGetPteTimeStamp(v1);
  else
    return 0LL;
}
