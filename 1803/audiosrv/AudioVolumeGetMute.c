/*
 * XREFs of AudioVolumeGetMute @ 0x180049AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180049B60 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetMute(__int64 a1, int *a2)
{
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  CVolumeStrip *v6; // rcx
  __int64 (__fastcall *v7)(CVolumeStrip *__hidden, int *); // rax
  unsigned int Mute; // eax
  unsigned int v9; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v4[1], v5, (struct _TP_TIMER *)L"AudioVolumeGetMute");
  v6 = *(CVolumeStrip **)a1;
  v7 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, int *))(**(_QWORD **)a1 + 152LL);
  if ( v7 == CVolumeStrip::GetMute )
    Mute = CVolumeStrip::GetMute(v6, a2);
  else
    Mute = v7(v6, a2);
  v9 = Mute;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
