/*
 * XREFs of _TlgKeywordOn @ 0x140036604
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400030F8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140035E68 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x14003B748 (-ReportHang@CWatchdogTimer@@AEAAXXZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004720C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x1400551A0 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A410 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A5A0 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A7D0 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
