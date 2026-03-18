/*
 * XREFs of MiRemoveUnusedSubsection @ 0x140097D88
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x140098D38 (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1401191A4 (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReduceUnusedSubsectionCount @ 0x140097E14 (MiReduceUnusedSubsectionCount.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD **)(a1 + 88);
  if ( *(_QWORD *)(v4 + 8) != a1 + 80 || (_QWORD *)*v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(a1 + 34) &= ~8u;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *v3 = v3;
  MiReduceUnusedSubsectionCount(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
}
