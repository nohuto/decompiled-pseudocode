/*
 * XREFs of KeInsertQueueDpc @ 0x1400F14F0
 * Callers:
 *     KiInitializeUserApc @ 0x140007918 (KiInitializeUserApc.c)
 *     KiScheduleNextForegroundBoost @ 0x140027714 (KiScheduleNextForegroundBoost.c)
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400442B8 (KiChargeSchedulingGroupCycleTime.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 *     PopQueueTargetDpc @ 0x1400889A0 (PopQueueTargetDpc.c)
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x1401362B4 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x14016367C (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x140252E60 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     KiCalibrateTimeAdjustment @ 0x140404FC0 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140416250 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140418140 (PnprQuiesceProcessors.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
