/*
 * XREFs of KeGetEffectiveIrql @ 0x140088FA0
 * Callers:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x1400D5780 (MmCanThreadFault.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     KdPowerTransitionEx @ 0x1402017B0 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x140203278 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140203310 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140207B30 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14027A620 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14027A7E0 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x14027FCEC (EtwpStackTraceDispatcher.c)
 *     EtwpDisableCompression @ 0x1402815F4 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x140281B58 (EtwpReenableCompression.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
