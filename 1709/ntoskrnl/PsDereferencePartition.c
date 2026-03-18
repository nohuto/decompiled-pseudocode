/*
 * XREFs of PsDereferencePartition @ 0x1400B8F3C
 * Callers:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     MmQueryMemoryListInformation @ 0x140103060 (MmQueryMemoryListInformation.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebalanceZeroFreeLists @ 0x14014E230 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x14014E330 (MiRebuildLargePages.c)
 *     MiMoveEccPagesToFreeList @ 0x1402149CC (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x140217864 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x140230AC0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x14024FD6C (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPageFileInformation @ 0x140575550 (MmGetPageFileInformation.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14059081C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14071ADC8 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14071B010 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14071B190 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
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
