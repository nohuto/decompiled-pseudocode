/*
 * XREFs of AudioVolumeGetMasterVolumeLevelScalar @ 0x180008580
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x1800091C0 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetMasterVolumeLevelScalar(CVolumeStrip **a1, float *a2)
{
  CVolumeStrip *v4; // rcx
  __int64 (__fastcall *v5)(CVolumeStrip *__hidden, float *); // rax
  unsigned int MasterVolumeLevelScalar; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, float *))(*(_QWORD *)*a1 + 80LL);
  if ( v5 == CVolumeStrip::GetMasterVolumeLevelScalar )
    MasterVolumeLevelScalar = CVolumeStrip::GetMasterVolumeLevelScalar(v4, a2);
  else
    MasterVolumeLevelScalar = v5(v4, a2);
  v7 = MasterVolumeLevelScalar;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
