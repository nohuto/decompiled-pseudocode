/*
 * XREFs of AudioSessionSetViewId @ 0x180003570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180004F20 (-SetViewId@CAudioSession@@UEAAJI@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall AudioSessionSetViewId(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  CAudioSession *v4; // rcx
  int (*v5)(CAudioSession *__hidden, unsigned int); // rax
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *a1;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  v4 = *(CAudioSession **)(v2 + 72);
  v5 = *(int (**)(CAudioSession *__hidden, unsigned int))(*(_QWORD *)v4 + 448LL);
  if ( v5 == CAudioSession::SetViewId )
    v6 = CAudioSession::SetViewId(v4, a2);
  else
    v6 = ((__int64 (__fastcall *)(CAudioSession *, _QWORD))v5)(v4, a2);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetViewId", 0xA29u, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
