/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140590D94
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1402B3ACC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1402B3F8C (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderBinary @ 0x140581C38 (EtwpTrackProviderBinary.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x14058BB5C (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x14058DA84 (EtwpValidateEnableNotification.c)
 *     EtwpLookupLoggerIdByName @ 0x14058DBC4 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpTrackProviderRegistration @ 0x14058F2A0 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1405E7028 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x14060CC60 (WmiQueryTraceInformation.c)
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
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    LOBYTE(v7) = 1;
  else
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL * a2);
  if ( (v7 & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 424) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
  {
    v8 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v8 = *(unsigned int **)(*(_QWORD *)(a1 + 432) + 8 * v4);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 424) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    EtwpReleaseLoggerContext(v8, a3);
    return 0LL;
  }
  return v8;
}
