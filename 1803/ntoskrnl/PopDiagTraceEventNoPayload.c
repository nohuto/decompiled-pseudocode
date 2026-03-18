/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1400CDCD0
 * Callers:
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x140278DDC (PopThermalStandbyNotify.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x1404765C0 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x1404765DC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1404872AC (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1404872C8 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1405EB53C (PopDiagTraceDevicesWakeEnd.c)
 *     PopSuspendApps @ 0x1405EC3E4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1405EC44C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1405EC4BC (PopResumeApps.c)
 *     PopResumeServices @ 0x1405EC548 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1405EC5D4 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405EC638 (PopNotifyCallbacksPreSleep.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x140762D10 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140768168 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
