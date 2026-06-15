/*
 * XREFs of AudioServerTelephonyControlIsSessionStarted @ 0x1800C62A0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlIsSessionStarted(__int64 a1, __int64 a2)
{
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v3[1],
    v4,
    (struct _TP_TIMER *)L"AudioServerTelephonyControlIsSessionStarted");
  LODWORD(a2) = ((__int64 (__fastcall *)(struct IUnknown *, __int64))g_TelephonyControl->lpVtbl[1].AddRef)(
                  g_TelephonyControl,
                  a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)a2;
}
