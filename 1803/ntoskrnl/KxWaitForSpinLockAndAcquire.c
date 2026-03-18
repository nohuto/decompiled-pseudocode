/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140069440
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
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v4; // ebx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)a1 );
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
  }
  return v4;
}
