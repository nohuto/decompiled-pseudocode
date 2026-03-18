/*
 * XREFs of MiReferencePageRuns @ 0x140025380
 * Callers:
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiFinishResume @ 0x140138A60 (MiFinishResume.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140440830 (MmGetPhysicalMemoryRangesEx.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x1405CE53C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406B4DF0 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  volatile LONG *v2; // rbp
  _QWORD *v5; // rbx
  KIRQL v7; // [rsp+38h] [rbp+10h]

  v2 = (volatile LONG *)(a1 + 232);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( a2 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 64);
  }
  else
  {
    v5 = MmPhysicalMemoryBlock;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      v5 = *(_QWORD **)(a1 + 128);
  }
  if ( v5 )
  {
    ++*(v5 - 1);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      ++*(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v7);
  if ( !v5 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v5;
}
