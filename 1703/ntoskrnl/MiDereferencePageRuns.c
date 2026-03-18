/*
 * XREFs of MiDereferencePageRuns @ 0x1400252E4
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiFinishResume @ 0x140138A60 (MiFinishResume.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x14021ED10 (MiUpdatePartitionMemory.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140440830 (MmGetPhysicalMemoryRangesEx.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     MmGetNodeChannelRanges @ 0x1405CE53C (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1406B4DF0 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1406B7C30 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  KIRQL v4; // r14
  bool v5; // zf
  _QWORD *v6; // rbx

  v1 = (_QWORD *)(a1 - 16);
  v2 = *(_QWORD *)(a1 - 16);
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 232));
  if ( (ULONG_PTR *)v2 == &MiSystemPartition )
  {
    v5 = (*(_QWORD *)(v2 + 72))-- == 1LL;
    if ( v5 )
    {
      v3 = *(_QWORD **)(v2 + 120);
      *(_QWORD *)(v2 + 120) = 0LL;
    }
  }
  v5 = v1[1]-- == 1LL;
  if ( !v5 )
    v1 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 232));
  __writecr8(v4);
  if ( v3 )
  {
    do
    {
      v6 = (_QWORD *)*v3;
      KeSignalGate(v3 + 1, 1LL);
      v3 = v6;
    }
    while ( v6 );
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
