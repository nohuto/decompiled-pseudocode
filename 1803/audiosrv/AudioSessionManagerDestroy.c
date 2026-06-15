/*
 * XREFs of AudioSessionManagerDestroy @ 0x1800B4230
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x1800B15E0 (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerDestroy(CAudioSessionManagerProxy **a1)
{
  CAudioSessionManagerProxy *v1; // rbx
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  CAudioSessionManager *v5; // rcx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *a1;
  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"AudioSessionManagerDestroy");
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
        *(_QWORD *)v1);
      v5 = WPP_GLOBAL_Control;
    }
    if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v5 + 2), 58LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, *(_QWORD *)v1);
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 16LL))(*(_QWORD *)v1);
  CAudioSessionManagerProxy::`scalar deleting destructor'(v1);
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
