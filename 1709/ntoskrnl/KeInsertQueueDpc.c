/*
 * XREFs of KeInsertQueueDpc @ 0x140094390
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14008AE7C (KiChargeSchedulingGroupCycleTime.c)
 *     PopQueueTargetDpc @ 0x14008ECA4 (PopQueueTargetDpc.c)
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     KiInitializeUserApc @ 0x1400DBCA0 (KiInitializeUserApc.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x14011D4F8 (KiScheduleNextForegroundBoost.c)
 *     ExQueueDebuggerWorker @ 0x1401538D0 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     MmSetAccessLogging @ 0x1402309E4 (MmSetAccessLogging.c)
 *     EtwSendTraceBuffer @ 0x14027A7E0 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14027FC0C (EtwpQueueStackWalkDpc.c)
 *     IopLiveDumpCorralProcessors @ 0x14042B290 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 *     KiCalibrateTimeAdjustment @ 0x14042E2D0 (KiCalibrateTimeAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
