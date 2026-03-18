/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14002441C (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140281838 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140281CF4 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451628 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404ED968 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpValidateEnableNotification @ 0x1404EEA30 (EtwpValidateEnableNotification.c)
 *     EtwpTrackProviderRegistration @ 0x1404F0EE0 (EtwpTrackProviderRegistration.c)
 *     EtwpLookupLoggerIdByName @ 0x14058B484 (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     EtwpTrackProviderBinary @ 0x14059C9B8 (EtwpTrackProviderBinary.c)
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
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 8) )
    LOBYTE(v6) = 1;
  else
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL * a2);
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = a2;
  if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8LL * a2), 1u) )
    return 0LL;
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 8) )
  {
    v9 = 1LL;
  }
  else
  {
    _mm_lfence();
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8 * v4);
  }
  if ( (v9 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v7), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v9 + 648), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v9 + 336) )
  {
    LOBYTE(v8) = a3;
    EtwpReleaseLoggerContext(v9, v8);
    return 0LL;
  }
  return v9;
}
