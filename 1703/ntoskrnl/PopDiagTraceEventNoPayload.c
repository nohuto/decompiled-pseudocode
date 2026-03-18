/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x140038914
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14022F5D4 (PopThermalStandbyNotify.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14040BB80 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14040BB94 (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x14041A584 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x14041A598 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopNotifyCallbacksPreSleep @ 0x1405763B8 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchSuperfetchNotification @ 0x140576408 (PopDispatchSuperfetchNotification.c)
 *     PopResumeServices @ 0x1405765C8 (PopResumeServices.c)
 *     PopResumeApps @ 0x140576640 (PopResumeApps.c)
 *     PopSuspendServices @ 0x1405766B8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x140576714 (PopSuspendApps.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14057A424 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x1406C95B0 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1406CD924 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
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
