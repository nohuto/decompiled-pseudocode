/*
 * XREFs of MiReleaseNonPagedResources @ 0x14013A6A0
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiDeleteUltraMapContext @ 0x14013A5FC (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013A78C (MiCreateUltraThreadContextHelper.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x140252F68 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1407574EC (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x1407577B8 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a2);
}
