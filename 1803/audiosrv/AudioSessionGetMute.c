/*
 * XREFs of AudioSessionGetMute @ 0x1800034F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180004B50 (-GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetMute(CServerAudioSessionControl **a1, int *a2)
{
  CServerAudioSessionControl *v2; // rbx
  __int64 (__fastcall *v4)(CServerAudioSessionControl *__hidden, int *); // rax
  int Mute; // eax
  unsigned int v6; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *a1;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden, int *))(*(_QWORD *)v2 + 304LL);
  if ( v4 == CServerAudioSessionControl::GetMute )
    Mute = CServerAudioSessionControl::GetMute(v2, a2);
  else
    Mute = v4(v2, a2);
  v6 = Mute;
  if ( Mute < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetMute", 0x84Bu, Mute);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
