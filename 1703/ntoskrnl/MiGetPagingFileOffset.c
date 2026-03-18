/*
 * XREFs of MiGetPagingFileOffset @ 0x14007720C
 * Callers:
 *     MiFlowThroughInsertNode @ 0x14003B434 (MiFlowThroughInsertNode.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiStoreUpdatePagefileHash @ 0x140077074 (MiStoreUpdatePagefileHash.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     MiComputeFaultCluster @ 0x140107E44 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiValidatePagefilePageHash @ 0x14013B100 (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x14013B500 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiDbgMarkPfnModified @ 0x14021B0FC (MiDbgMarkPfnModified.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) != 0 )
    return MiGetPteTimeStamp(v1);
  else
    return 0LL;
}
