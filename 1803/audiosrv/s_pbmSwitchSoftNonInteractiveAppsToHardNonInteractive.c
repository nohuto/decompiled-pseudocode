/*
 * XREFs of s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800062A0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive(__int64 a1)
{
  unsigned int v2; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v2 = 0;
  if ( (unsigned int)IsPbmSwitchSoftNonToHardNonInteractiveSupported() )
    v2 = PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(a1);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v2;
}
