/*
 * XREFs of _TlgKeywordOn @ 0x14001B050
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B14 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1400344C8 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?OnHang@?$CWatchdogTimer@$01@@AEAAXXZ @ 0x1400398E8 (-OnHang@-$CWatchdogTimer@$01@@AEAAXXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$01@@AEAAJPEA_N@Z @ 0x140039BA8 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$01@@AEAAJPEA_N@Z.c)
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$01@@AEAA_NXZ @ 0x14003A23C (-ShouldReportHangToWatson@-$CWatchdogTimer@$01@@AEAA_NXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140040360 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140054C94 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140054D90 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A6D0 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A860 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005AAA0 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
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
