/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1404F2B5C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140257DD8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140258294 (EtwpSetCompressionSettings.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451C80 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     EtwpTrackProviderBinary @ 0x14045A320 (EtwpTrackProviderBinary.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140467800 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140467C00 (WmiQueryTraceInformation.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLookupLoggerIdByName @ 0x14054F2BC (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1405C7C60 (EtwpUpdateDisallowList.c)
 *     EtwpTracingProvEnableCallback @ 0x1405D65E0 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpGetDisallowList @ 0x140709FDC (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x14070A4D0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140711F20 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x140713888 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140713990 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140749D60 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a1 + 118) + 8LL * *a1 + 408), 1u);
}
