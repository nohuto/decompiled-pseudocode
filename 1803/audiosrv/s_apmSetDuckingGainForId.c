/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1800DCCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  int (__fastcall *v9)(struct IAudioPolicyManager *, __int64, __int64 *); // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5[1], v6, (struct _TP_TIMER *)L"s_apmSetDuckingGainForId");
  v7 = (unsigned int)IsApmDuckingGainForIdSupported() == 0;
  v8 = *(_QWORD *)g_PolicyManager;
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v8 + 192))(g_PolicyManager, 0LL, a2);
  }
  else
  {
    v9 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v8 + 32);
    v14 = 0LL;
    if ( v9(g_PolicyManager, a1, &v14) >= 0 )
    {
      v10 = *(_QWORD *)g_PolicyManager;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(v10 + 192))(g_PolicyManager, v11, a2);
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v4;
}
