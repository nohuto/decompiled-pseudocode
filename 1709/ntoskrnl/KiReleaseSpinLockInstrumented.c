/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x14020503C
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     PpmParkSnapNodeStatistics @ 0x140090460 (PpmParkSnapNodeStatistics.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x140098470 (PpmUpdatePerformanceFeedback.c)
 *     KiCallInterruptServiceRoutine @ 0x1400A92A0 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLock @ 0x1400E2730 (KeReleaseSpinLock.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400E29D0 (NtAssociateWaitCompletionPacket.c)
 *     IopQueueIrpToFileObject @ 0x140103ED0 (IopQueueIrpToFileObject.c)
 *     PsGetThreadProperty @ 0x140107C90 (PsGetThreadProperty.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x14027EC8C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
