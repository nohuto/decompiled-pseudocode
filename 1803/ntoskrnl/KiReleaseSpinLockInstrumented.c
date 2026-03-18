/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1402427F0
 * Callers:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KiCallInterruptServiceRoutine @ 0x14007EA00 (KiCallInterruptServiceRoutine.c)
 *     NtAssociateWaitCompletionPacket @ 0x140087AF0 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSpinLock @ 0x1400A39B0 (KeReleaseSpinLock.c)
 *     IopQueueIrpToFileObject @ 0x1400A99E0 (IopQueueIrpToFileObject.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     PpmUpdatePerformanceFeedback @ 0x14010D1C0 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1402B1E58 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
