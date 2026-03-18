/*
 * XREFs of KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400F1580 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     ExDisableResourceBoostLite @ 0x1400F7AA0 (ExDisableResourceBoostLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14011BAE8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140285CC0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x140285DBC (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14027EC18 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiFastAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, unsigned __int8 *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // ebp
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v9; // r14d
  _QWORD *v10; // rdx
  char v11; // si
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+68h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v15;
    v6 = 0;
    InterruptCount = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = (_QWORD *)_InterlockedExchange64(a2, a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = KxWaitForLockOwnerShipWithIrql(a1, v10, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
    v11 = 1;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v13, v13 - v9, v4, InterruptCount, 1);
  }
  return v11;
}
