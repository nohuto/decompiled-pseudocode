/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140204F88
 * Callers:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     PpmParkSnapNodeStatistics @ 0x140090460 (PpmParkSnapNodeStatistics.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x140098470 (PpmUpdatePerformanceFeedback.c)
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400E29D0 (NtAssociateWaitCompletionPacket.c)
 *     IopQueueIrpToFileObject @ 0x140103ED0 (IopQueueIrpToFileObject.c)
 *     PsGetThreadProperty @ 0x140107C90 (PsGetThreadProperty.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14027EC18 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r9d
  int v3; // edi
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v10;
    v4 = 0;
    InterruptCount = v10;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v8 = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v2 = v8;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v8;
  }
  if ( v4 )
  {
    v9 = __rdtsc();
    PerfLogSpinLockAcquire(v3, v9, v9 - v7, v2, InterruptCount, 0);
  }
}
