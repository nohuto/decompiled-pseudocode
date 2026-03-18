/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x14001F744
 * Callers:
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiDrainControlAreaWrites @ 0x14001F7E0 (MiDrainControlAreaWrites.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 */

__int64 __fastcall MiPrepareSegmentForDeletion(__int64 a1, ULONG_PTR a2)
{
  volatile LONG *v2; // rsi
  __int64 v5; // rdx
  unsigned __int8 v6; // bp
  __int64 v7; // rbx

  v2 = (volatile LONG *)(a1 + 72);
  LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  MiDrainControlAreaWrites(a1, v5);
  MiRemoveUnusedSegment(a1);
  v7 = MiBuildWakeList(a1, 1LL);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount(a2);
    a2 = *(_QWORD *)(a2 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v6);
  return v7;
}
