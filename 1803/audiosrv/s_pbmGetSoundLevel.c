/*
 * XREFs of s_pbmGetSoundLevel @ 0x1800060B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int SoundLevel; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE pv[56]; // [rsp+38h] [rbp-40h] BYREF

  SoundLevel = 0;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else if ( g_PolicyManager )
  {
    v11 = *(_QWORD *)g_PolicyManager;
    v15 = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v11 + 32))(
            g_PolicyManager,
            a1,
            &v15);
    v13 = v15;
    SoundLevel = v12;
    if ( v12 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 344LL))(
              v15,
              a2,
              a3,
              a4,
              a5);
      v13 = v15;
      SoundLevel = v14;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return SoundLevel;
}
