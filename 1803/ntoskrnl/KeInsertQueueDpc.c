/*
 * XREFs of KeInsertQueueDpc @ 0x140039000
 * Callers:
 *     PopQueueTargetDpc @ 0x140038F50 (PopQueueTargetDpc.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x14003A994 (KiScheduleNextForegroundBoost.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400A8A64 (KiChargeSchedulingGroupCycleTime.c)
 *     KiInitializeUserApc @ 0x1400C07EC (KiInitializeUserApc.c)
 *     EtwpRequestFlushTimer @ 0x1400D3EF8 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400D4574 (EtwpPrepareDirtyBuffer.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     MmSetAccessLogging @ 0x14016C25C (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x140181D18 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1402AE24C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1402B51D8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1402B561C (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x140470D0C (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140481D94 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140483D08 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x140511DD0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
