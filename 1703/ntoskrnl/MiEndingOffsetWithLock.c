/*
 * XREFs of MiEndingOffsetWithLock @ 0x1400CDD20
 * Callers:
 *     MiViewMayContainPage @ 0x140014728 (MiViewMayContainPage.c)
 *     MiReadyFlushMdlToWrite @ 0x140025C70 (MiReadyFlushMdlToWrite.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v4; // ett
  __int64 v5; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else
  {
    _m_prefetchw(v2);
    v4 = *v2 & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(v2, v4 + 1, v4) )
      ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
  }
  v5 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  __writecr8(CurrentIrql);
  return v5;
}
