/*
 * XREFs of AudioVolumeAddMasterVolumeNotification @ 0x1800085F0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180009360 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeAddMasterVolumeNotification(CVolumeStrip **a1)
{
  CVolumeStrip *v2; // rdi
  RPC_STATUS v3; // ebx
  __int64 (__fastcall *v4)(CVolumeStrip *__hidden, unsigned int); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-48h]
  _BYTE pv[56]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int Pid; // [rsp+70h] [rbp+8h] BYREF

  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v2 = *a1;
  v3 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v3 )
  {
    v6 = v3 | 0x80010000;
    v8 = 494LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v6,
      v9);
    goto LABEL_6;
  }
  v4 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int))(*(_QWORD *)v2 + 248LL);
  if ( v4 == CVolumeStrip::AddVolumeClientNotification )
    v5 = CVolumeStrip::AddVolumeClientNotification(v2, Pid);
  else
    v5 = v4(v2, Pid);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 495LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return v6;
}
