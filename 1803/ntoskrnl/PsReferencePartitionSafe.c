/*
 * XREFs of PsReferencePartitionSafe @ 0x14006FF20
 * Callers:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140080B38 (MiScanPagefiles.c)
 *     MiPartitionObjectToPartition @ 0x1400B3C4C (MiPartitionObjectToPartition.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     MiCheckZeroFreeRebalance @ 0x140121EB0 (MiCheckZeroFreeRebalance.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiWakeLargePageRebuild @ 0x140155D70 (MiWakeLargePageRebuild.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x14025B1B4 (MiReferencePagePartition.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
