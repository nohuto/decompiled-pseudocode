/*
 * XREFs of KeGetEffectiveIrql @ 0x1400E2B60
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 *     MmCanThreadFault @ 0x1400E49D0 (MmCanThreadFault.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KdPowerTransitionEx @ 0x1401FBA90 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x1401FD334 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401FD374 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140201740 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140252C94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x140252E60 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 *     EtwpDisableCompression @ 0x140257B90 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1402580F8 (EtwpReenableCompression.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
