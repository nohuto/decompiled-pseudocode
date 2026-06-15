/*
 * XREFs of AudioVolumeQueryHardwareSupport @ 0x180005650
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x1800057B0 (-QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeQueryHardwareSupport(CVolumeStrip **a1, unsigned int *a2)
{
  CVolumeStrip *v4; // rcx
  __int64 (__fastcall *v5)(CVolumeStrip *__hidden, unsigned int *); // rax
  unsigned int HardwareSupport; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int *))(*(_QWORD *)*a1 + 192LL);
  if ( v5 == CVolumeStrip::QueryHardwareSupport )
    HardwareSupport = CVolumeStrip::QueryHardwareSupport(v4, a2);
  else
    HardwareSupport = v5(v4, a2);
  v7 = HardwareSupport;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v7;
}
