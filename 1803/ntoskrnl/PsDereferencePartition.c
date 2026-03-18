/*
 * XREFs of PsDereferencePartition @ 0x14006FEF8
 * Callers:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     MiRebuildLargeZeroPage @ 0x14006FC10 (MiRebuildLargeZeroPage.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400B3440 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiRebuildLargePages @ 0x140155E10 (MiRebuildLargePages.c)
 *     MiUnlinkBadPages @ 0x140252F68 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x140255080 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402551CC (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x140266380 (MiRebalanceZeroFreeLists.c)
 *     MiContractWsSwapPageFileWorker @ 0x14026BA30 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x14028582C (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1404C34D0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 *     NtManagePartition @ 0x1405121CC (NtManagePartition.c)
 *     MmGetPageFileInformation @ 0x1405587D4 (MmGetPageFileInformation.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtAllocateVirtualMemory @ 0x1405B4760 (NtAllocateVirtualMemory.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1405E7290 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14064DCF0 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x14077C020 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14077E934 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14077EAE0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14077EC60 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
