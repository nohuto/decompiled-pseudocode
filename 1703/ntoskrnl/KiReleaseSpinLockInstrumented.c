/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1401FECBC
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLock @ 0x14000C250 (KeReleaseSpinLock.c)
 *     IopQueueIrpToFileObject @ 0x14000DCA0 (IopQueueIrpToFileObject.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeIntSteerSnapPerf @ 0x140044D00 (KeIntSteerSnapPerf.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     PpmParkSnapNodeStatistics @ 0x140047000 (PpmParkSnapNodeStatistics.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
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
 *     <none>
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
