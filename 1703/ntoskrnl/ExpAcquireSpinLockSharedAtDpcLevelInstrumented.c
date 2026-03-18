/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     ExpAddTagForBigPages @ 0x14008CCA0 (ExpAddTagForBigPages.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14025635C (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // r9d
  char v5; // si
  unsigned __int64 v6; // rax
  int InterruptCount; // r14d
  int v8; // ebp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = v6;
  }
  else
  {
    v8 = v13;
    v5 = 0;
    InterruptCount = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  _m_prefetchw(a1);
  v10 = *a1 & 0x7FFFFFFF;
  v9 = _InterlockedCompareExchange(a1, v10 + 1, v10);
  if ( v10 != v9 )
  {
    v9 = ExpWaitForSpinLockSharedAndAcquire(a1, a2);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    LOBYTE(v9) = PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v3, InterruptCount, 2);
  }
  return v9;
}
