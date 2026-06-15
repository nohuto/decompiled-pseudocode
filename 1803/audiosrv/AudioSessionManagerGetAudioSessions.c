/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x1800B4310
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_QWORD *)*a1;
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"AudioSessionManagerGetAudioSessions");
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, *v4);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v4[1] + 112LL))(v4[1]) )
    v10 = -2147024891;
  else
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
            *v4,
            v4[1],
            a2,
            a3,
            a4);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
      (unsigned int)v10);
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetAudioSessions", 2245, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
