/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x1800B3FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(_QWORD *a1)
{
  _QWORD *v1; // rbx
  struct _TP_TIMER **v2; // rax
  __int64 v3; // r8
  int v4; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_QWORD *)*a1;
  v2 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v2[1],
    v3,
    (struct _TP_TIMER *)L"AudioSessionManagerAddAudioSessionClientNotification");
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1[1] + 112LL))(v1[1]) )
  {
    v4 = -2147024891;
LABEL_4:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddAudioSessionClientNotification", 2353, v4);
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 120LL))(*v1, v1[1]);
  if ( v4 < 0 )
    goto LABEL_4;
LABEL_5:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v4;
}
