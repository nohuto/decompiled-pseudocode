/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x180049850
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800498F0 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(CVolumeStrip **a1)
{
  struct _TP_TIMER **v2; // rax
  __int64 v3; // r8
  CVolumeStrip *v4; // rdi
  RPC_STATUS v5; // ebx
  __int64 (__fastcall *v6)(CVolumeStrip *__hidden, unsigned int); // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-48h]
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int Pid; // [rsp+70h] [rbp+8h] BYREF

  v2 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v2[1], v3, (struct _TP_TIMER *)L"AudioVolumeDeleteMasterVolumeNotification");
  v4 = *a1;
  v5 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v5 )
  {
    v8 = v5 | 0x80010000;
    v10 = 512LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v8,
      v11);
    goto LABEL_6;
  }
  v6 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int))(*(_QWORD *)v4 + 256LL);
  if ( v6 == CVolumeStrip::DeleteVolumeClientNotification )
    v7 = CVolumeStrip::DeleteVolumeClientNotification(v4, Pid);
  else
    v7 = v6(v4, Pid);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 513LL;
    goto LABEL_10;
  }
  v8 = 0;
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
