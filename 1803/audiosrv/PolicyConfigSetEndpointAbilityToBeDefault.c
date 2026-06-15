/*
 * XREFs of PolicyConfigSetEndpointAbilityToBeDefault @ 0x1800BFE80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigSetEndpointAbilityToBeDefault(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  unsigned int v7; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5[1], v6, (struct _TP_TIMER *)L"PolicyConfigSetEndpointAbilityToBeDefault");
  v7 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD))(*(_QWORD *)g_PolicyConfig + 128LL))(
         g_PolicyConfig,
         a2,
         a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
