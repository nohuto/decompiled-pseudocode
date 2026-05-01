/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18017F970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x18017EE54 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h]
  int *v10; // [rsp+30h] [rbp-D0h]
  __int64 v11; // [rsp+38h] [rbp-C8h]
  int v12; // [rsp+40h] [rbp-C0h]
  int *v13; // [rsp+48h] [rbp-B8h]
  int *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  char v16; // [rsp+5Ch] [rbp-A4h]
  int v17; // [rsp+80h] [rbp-80h] BYREF
  const char *v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  char v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _BYTE v22[144]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+138h] [rbp+38h]
  __int64 v24; // [rsp+140h] [rbp+40h]
  __int64 v25; // [rsp+148h] [rbp+48h]
  __int64 v26; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 28) )
    return 2147943568LL;
  v9 = 0LL;
  v10 = v8;
  v11 = 0LL;
  v13 = &v17;
  v12 = 0;
  v14 = &v15;
  v15 = 0;
  v18 = "GetImmersiveMonitor";
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v19 = 0LL;
  v21 = 1LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0LL;
  *(_QWORD *)v8 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  v26 = 0LL;
  StartWindowTelemetry::GetImmersiveMonitor::StartActivity((StartWindowTelemetry::GetImmersiveMonitor *)v8);
  v6 = *((_QWORD *)this + 13);
  *a2 = 0LL;
  if ( *(_QWORD *)(v6 + 64) )
  {
    v7 = *(_QWORD *)(v6 + 64);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *a2 = *(struct IImmersiveMonitor **)(v6 + 64);
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL);
    v2 = -2147023728;
  }
  *(_QWORD *)v8 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return v2;
}
