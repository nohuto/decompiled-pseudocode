/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140257DD8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140258294 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451C80 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     EtwpTrackProviderBinary @ 0x14045A320 (EtwpTrackProviderBinary.c)
 *     WmiQueryTraceInformation @ 0x140467C00 (WmiQueryTraceInformation.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpLookupLoggerIdByName @ 0x14054F2BC (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpValidateEnableNotification @ 0x140553E90 (EtwpValidateEnableNotification.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     EtwpUpdateDisallowList @ 0x1405C7C60 (EtwpUpdateDisallowList.c)
 *     EtwpTracingProvEnableCallback @ 0x1405D65E0 (EtwpTracingProvEnableCallback.c)
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
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned int *v8; // rbx

  v3 = a2;
  if ( a2 >= 0x40 )
    LOBYTE(v6) = 1;
  else
    v6 = *(_QWORD *)(a1 + 8LL * a2 + 920);
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = a2;
  if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8LL * a2 + 408), 1u) )
    return 0LL;
  if ( (unsigned int)v3 >= 0x40 )
  {
    v8 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v8 = *(unsigned int **)(a1 + 8 * v3 + 920);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v7 + 408), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v8 + 158, Executive, 0, 0, 0LL);
  if ( !v8[80] )
  {
    EtwpReleaseLoggerContext(v8, a3);
    return 0LL;
  }
  return v8;
}
