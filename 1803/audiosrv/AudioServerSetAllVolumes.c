/*
 * XREFs of AudioServerSetAllVolumes @ 0x180003A40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180003D40 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *this, unsigned int a2, const float *a3, int *a4)
{
  GUID v8; // xmm0
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(CVADServer *__hidden, unsigned int, const float *, int *); // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-A8h]
  _BYTE pv[48]; // [rsp+30h] [rbp-98h] BYREF
  GUID v16; // [rsp+60h] [rbp-68h]
  GUID v17; // [rsp+70h] [rbp-58h]
  GUID v18; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( this )
    v8 = *(GUID *)((char *)this + 280);
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  v16 = v8;
  v17 = v8;
  v18 = v8;
  EtwEventActivityIdControl(4LL, &v18);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v9,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v10 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned int, const float *, int *))(*(_QWORD *)this + 208LL);
  if ( v10 == CVADServer::SetAllVolumes )
    v11 = CVADServer::SetAllVolumes(this, a2, a3, a4);
  else
    v11 = v10(this, a2, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE12,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11,
      v14);
  else
    v12 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v18);
  return v12;
}
