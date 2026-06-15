/*
 * XREFs of s_pbmRegisterPlaybackManagerNotifications @ 0x180006220
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  _BYTE pv[48]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  if ( (unsigned int)IsPbmRegisterPlaybackManagerNotificationsSupported() )
  {
    v6 = PbmRegisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v8 = *(_QWORD *)g_PolicyManager;
    v13 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v8 + 32))(
           g_PolicyManager,
           a1,
           &v13);
    v10 = v13;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 328LL))(v13);
      v10 = v13;
      v6 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
