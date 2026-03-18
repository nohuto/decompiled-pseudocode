/*
 * XREFs of KeGetEffectiveIrql @ 0x1400F0B10
 * Callers:
 *     EtwpRequestFlushTimer @ 0x1400D3EF8 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400D4574 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     KdPowerTransitionEx @ 0x14023E890 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x1402408E4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140240920 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140245940 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1402AD3E4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1402AE330 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1402B1578 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1402B3888 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1402B3DEC (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
