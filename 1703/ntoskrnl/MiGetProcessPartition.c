/*
 * XREFs of MiGetProcessPartition @ 0x1400D0EA8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiLogCommitRequestFailed @ 0x1406B6AB0 (MiLogCommitRequestFailed.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406B8CF8 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406BF580 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x1406BF65C (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x140705634 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452));
}
