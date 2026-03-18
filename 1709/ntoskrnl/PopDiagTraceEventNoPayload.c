/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14012C528
 * Callers:
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x140243B00 (PopThermalStandbyNotify.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x14043944C (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140439468 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceZeroHiberFile @ 0x1404396FC (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140439718 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopCoalescingNotify @ 0x1406FA190 (PopCoalescingNotify.c)
 *     PopDispatchSuperfetchNotification @ 0x1406FCC50 (PopDispatchSuperfetchNotification.c)
 *     PopResumeApps @ 0x1406FD724 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406FD79C (PopResumeServices.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x1406FD980 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406FD9D4 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407012F8 (PopNotifyCallbacksPreSleep.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140703250 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140703F30 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
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
