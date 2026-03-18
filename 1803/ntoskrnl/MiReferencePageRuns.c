/*
 * XREFs of MiReferencePageRuns @ 0x1400C4678
 * Callers:
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14064BF78 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14074BD00 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14074EC90 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bp
  _QWORD *v5; // rbx

  v4 = ExAcquireSpinLockExclusive(&dword_1403CE000);
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( a2 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v5 = MmPhysicalMemoryBlock;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      v5 = *(_QWORD **)(a1 + 96);
  }
  if ( v5 )
  {
    ++*(v5 - 1);
    ++qword_1403CDF68;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CE000);
  __writecr8(v4);
  if ( !v5 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v5;
}
