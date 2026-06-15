/*
 * XREFs of AudioServerTelephonyControlSetVolume @ 0x1800C6520
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlSetVolume(__int64 a1)
{
  struct _TP_TIMER **v1; // rax
  __int64 v2; // r8
  unsigned int v3; // ebx
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v1[1], v2, (struct _TP_TIMER *)L"AudioServerTelephonyControlSetVolume");
  v3 = ((__int64 (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl[5].QueryInterface)(g_TelephonyControl);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v3;
}
