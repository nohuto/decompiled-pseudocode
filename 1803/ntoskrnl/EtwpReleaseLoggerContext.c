/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140590D4C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1402B3ACC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1402B3F8C (EtwpSetCompressionSettings.c)
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpTrackProviderBinary @ 0x140581C38 (EtwpTrackProviderBinary.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpLookupLoggerIdByName @ 0x14058DBC4 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpTrackProviderRegistration @ 0x14058F2A0 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1405E7028 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x14060CC60 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14060D970 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x140655CC0 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1407A5C30 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1407A5EC8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1407A6958 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1407AE8BC (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1407B2290 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1407B2F50 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1407B9774 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407B9880 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1407F89B0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 424LL) + 8LL * *a1),
    1u);
}
