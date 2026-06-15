/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x1800056D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x180005770 (-GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(CVolumeStrip **a1, unsigned int a2, float *a3, float *a4, float *a5)
{
  __int64 (__fastcall *v9)(CVolumeStrip *__hidden, unsigned int, float *, float *, float *); // rax
  unsigned int VolumeRange; // eax
  unsigned int v11; // ebx
  _BYTE pv[48]; // [rsp+30h] [rbp-38h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v9 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, float *, float *, float *))(*(_QWORD *)*a1 + 200LL);
  if ( v9 == CVolumeStrip::GetVolumeRange )
    VolumeRange = CVolumeStrip::GetVolumeRange(*a1, a2, a3, a4, a5);
  else
    VolumeRange = v9(*a1, a2, a3, a4, a5);
  v11 = VolumeRange;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v11;
}
