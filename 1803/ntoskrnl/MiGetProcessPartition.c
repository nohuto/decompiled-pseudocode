/*
 * XREFs of MiGetProcessPartition @ 0x1401199C8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiCreateVsmEnclave @ 0x140751EE4 (MiCreateVsmEnclave.c)
 *     MiLogCommitRequestFailed @ 0x140753DB0 (MiLogCommitRequestFailed.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140756470 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x14075654C (MmInSwapVirtualAddresses.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 *     VmpPauseResumeNotify @ 0x1407A0CC4 (VmpPauseResumeNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
}
