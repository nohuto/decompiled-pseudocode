/*
 * XREFs of AudioSessionGetState @ 0x1800042A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180004D20 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetState(CServerAudioSessionControl **a1, enum _AudioSessionState *a2)
{
  CServerAudioSessionControl *v2; // rbx
  __int64 (__fastcall *v4)(CServerAudioSessionControl *__hidden, enum _AudioSessionState *); // rax
  int State; // eax
  unsigned int v6; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *a1;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden, enum _AudioSessionState *))(*(_QWORD *)v2 + 144LL);
  if ( v4 == CServerAudioSessionControl::GetState )
    State = CServerAudioSessionControl::GetState(v2, a2);
  else
    State = v4(v2, a2);
  v6 = State;
  if ( State < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetState", 0x69Bu, State);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
