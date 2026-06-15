/*
 * XREFs of AudioSessionGetVolume @ 0x180003470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180004B80 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionGetVolume(CServerAudioSessionControl **a1, float *a2)
{
  CServerAudioSessionControl *v2; // rbx
  int (*v4)(CServerAudioSessionControl *__hidden, float *); // rax
  int Volume; // eax
  unsigned int v6; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *a1;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v4 = *(int (**)(CServerAudioSessionControl *__hidden, float *))(*(_QWORD *)v2 + 288LL);
  if ( v4 == CServerAudioSessionControl::GetVolume )
    Volume = CServerAudioSessionControl::GetVolume(v2, a2);
  else
    Volume = ((__int64 (__fastcall *)(CServerAudioSessionControl *, float *))v4)(v2, a2);
  v6 = Volume;
  if ( Volume < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetVolume", 0x813u, Volume);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
