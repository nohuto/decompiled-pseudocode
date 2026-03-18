/*
 * XREFs of MiRemoveUnusedSegment @ 0x140096C90
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiCheckForControlAreaDeletion @ 0x140016404 (MiCheckForControlAreaDeletion.c)
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     MiAttemptSectionDelete @ 0x14002DB88 (MiAttemptSectionDelete.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiReferencePfBackedSection @ 0x140118534 (MiReferencePfBackedSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1401191A4 (MiPrepareSegmentForDeletion.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14020AD08 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

_QWORD *__fastcall MiRemoveUnusedSegment(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (_QWORD *)qword_14036C8F8;
  v3 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
    if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
      --*(_DWORD *)(v3 + 1348);
    v4 = *(_QWORD *)(a1 + 8);
    result = (_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v4 + 8) != a1 + 8 || (_QWORD *)*v5 != result )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *(_DWORD *)(a1 + 56) &= ~0x8000000u;
    *(_QWORD *)(a1 + 16) = a1 + 8;
    *result = result;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      return (_QWORD *)ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 1344, retaddr);
    else
      *(_DWORD *)(v3 + 1344) = 0;
  }
  return result;
}
