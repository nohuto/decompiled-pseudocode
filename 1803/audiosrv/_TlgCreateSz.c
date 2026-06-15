/*
 * XREFs of _TlgCreateSz @ 0x1800059B0
 * Callers:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180026400 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18002A440 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005DD70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009BE14 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800F62FC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800F85E8 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1801090DC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     PdcpFireClientCallWatchdog @ 0x18010D0C0 (PdcpFireClientCallWatchdog.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18010E094 (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = MultiByteStr;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
