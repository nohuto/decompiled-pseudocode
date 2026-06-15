/*
 * XREFs of s_pbmReportAppClosing @ 0x180005C50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmReportAppClosing(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _BYTE pv[48]; // [rsp+30h] [rbp-38h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v6 = 0;
  if ( (unsigned int)IsPbmReportAppClosingSupported() )
    v6 = PbmReportAppClosing(a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
