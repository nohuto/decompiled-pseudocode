/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140242718
 * Callers:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x14007EA00 (KiCallInterruptServiceRoutine.c)
 *     NtAssociateWaitCompletionPacket @ 0x140087AF0 (NtAssociateWaitCompletionPacket.c)
 *     IopQueueIrpToFileObject @ 0x1400A99E0 (IopQueueIrpToFileObject.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     PpmUpdatePerformanceFeedback @ 0x14010D1C0 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // ebp
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v7; // r14d
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v11;
    v4 = 0;
    InterruptCount = v11;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  result = KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    result = KxWaitForSpinLockAndAcquire(a1, v9);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v2 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v4 )
  {
    v10 = __rdtsc();
    return PerfLogSpinLockAcquire((_DWORD)a1, v10, (unsigned int)v10 - v7, v2, InterruptCount, 0);
  }
  return result;
}
