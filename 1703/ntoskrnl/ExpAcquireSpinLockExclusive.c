/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14009B290
 * Callers:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     MiRemoveSecureEntry @ 0x140099290 (MiRemoveSecureEntry.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x140099790 (MiDereferenceControlAreaBySection.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     MiComputeContiguousSubsectionPte @ 0x14009ACA0 (MiComputeContiguousSubsectionPte.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14009AD50 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  signed __int32 v4; // edx
  bool v6; // zf
  signed __int32 v7; // eax

  v2 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  v4 = *a1;
  while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v4 & 0x40000000) == 0 )
    {
      v7 = _InterlockedCompareExchange(a1, v4 | 0x40000000, v4);
      v6 = v4 == v7;
      v4 = v7;
      if ( !v6 )
        continue;
    }
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    v4 = *a1;
  }
  return v2;
}
