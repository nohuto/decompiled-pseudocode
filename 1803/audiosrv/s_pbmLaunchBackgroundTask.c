/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x1800DD3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  struct _TP_TIMER **v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF

  v8 = 0;
  v9 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v9[1], v10, (struct _TP_TIMER *)L"s_pbmLaunchBackgroundTask");
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    v8 = PbmLaunchBackgroundTask(a1, a2, a3, a4);
  }
  else if ( g_PolicyManager )
  {
    v11 = *(_QWORD *)g_PolicyManager;
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v11 + 32))(
           g_PolicyManager,
           a1,
           &v13);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 176LL))(
             g_PolicyManager,
             v13,
             a2,
             a3,
             a4);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v8;
}
