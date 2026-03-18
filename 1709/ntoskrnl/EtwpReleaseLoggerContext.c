/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14049227C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14002441C (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140281838 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140281CF4 (EtwpSetCompressionSettings.c)
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451628 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpTrackProviderRegistration @ 0x1404F0EE0 (EtwpTrackProviderRegistration.c)
 *     EtwpLookupLoggerIdByName @ 0x14058B484 (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     EtwpTrackProviderBinary @ 0x14059C9B8 (EtwpTrackProviderBinary.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405ABA5C (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1405EE200 (WmiQueryTraceInformation.c)
 *     EtwpTracingProvEnableCallback @ 0x1405F3010 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x140743F50 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1407444EC (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x140744C44 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14074F788 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x140751548 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1407520D8 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1407529D8 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140752AF0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140753500 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14078C4C0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 416LL) + 8LL * *a1),
    1u);
}
