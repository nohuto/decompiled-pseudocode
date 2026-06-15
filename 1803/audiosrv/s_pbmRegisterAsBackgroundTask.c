/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x1800DD590
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, __int128 *a2)
{
  int v4; // ebx
  struct _TP_TIMER **v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  void (__fastcall *v8)(__int64, __int128 *); // rax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v5[1], v6, (struct _TP_TIMER *)L"s_pbmRegisterAsBackgroundTask");
  if ( g_PolicyManager )
  {
    v7 = *(_QWORD *)g_PolicyManager;
    v12 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v7 + 32))(
           g_PolicyManager,
           a1,
           &v12);
    if ( v4 >= 0 )
    {
      v8 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 288LL);
      v10 = *a2;
      v8(v12, &v10);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v4;
}
