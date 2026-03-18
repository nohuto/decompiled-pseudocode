/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1800C7630
 * Callers:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C6E5C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014F7E8 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180193DA8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x180196CF4 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18020EFCC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( (unsigned int)eventLevel < *(_DWORD *)hProvider )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
