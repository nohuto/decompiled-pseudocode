/*
 * XREFs of MiReferencePageRuns @ 0x14011CB5C
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     MiFinishResume @ 0x140218680 (MiFinishResume.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetNodeChannelRanges @ 0x1405E5E8C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406E0DF8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406E4870 (MiScanPagefileSpace.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bp
  _QWORD *v5; // rbx

  v4 = ExAcquireSpinLockExclusive(&dword_14038A180);
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
    ++qword_14038A0E8;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
  __writecr8(v4);
  if ( !v5 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v5;
}
