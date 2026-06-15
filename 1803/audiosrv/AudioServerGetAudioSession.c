/*
 * XREFs of AudioServerGetAudioSession @ 0x180003860
 * Callers:
 *     <none>
 * Callees:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180003F80 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18000422C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetAudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(CVADServer *__hidden, struct CServerAudioSessionControl **); // rax
  int AudioSession; // eax
  unsigned int v7; // ebx
  struct CServerAudioSessionControl *v9; // [rsp+30h] [rbp-68h] BYREF
  _BYTE pv[48]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v11[16]; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-20h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v11, this);
  v9 = 0LL;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v4,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v5 = *(__int64 (__fastcall **)(CVADServer *__hidden, struct CServerAudioSessionControl **))(*(_QWORD *)this + 40LL);
  if ( v5 == CVADServer::get_AudioSession )
    AudioSession = CVADServer::get_AudioSession(this, &v9);
  else
    AudioSession = v5(this, &v9);
  v7 = AudioSession;
  if ( !AudioSession )
    *a2 = v9;
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xBBCu, AudioSession);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, v12);
  return v7;
}
