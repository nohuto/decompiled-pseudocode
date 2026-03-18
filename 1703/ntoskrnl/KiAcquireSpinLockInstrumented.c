/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1401FEC08
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x14000DCA0 (IopQueueIrpToFileObject.c)
 *     PpmParkSnapNodeStatistics @ 0x140047000 (PpmParkSnapNodeStatistics.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400514B0 (NtAssociateWaitCompletionPacket.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1400F1ED0 (KiExecuteAllDpcs.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400F5DE0 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14025635C (PerfLogSpinLockAcquire.c)
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
