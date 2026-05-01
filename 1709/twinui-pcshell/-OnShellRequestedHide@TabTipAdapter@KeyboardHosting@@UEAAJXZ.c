/*
 * XREFs of ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1801A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1801A79EC (-StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedHide(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h]
  int *v7; // [rsp+38h] [rbp-D0h]
  __int64 v8; // [rsp+40h] [rbp-C8h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  int *v10; // [rsp+50h] [rbp-B8h]
  int *v11; // [rsp+58h] [rbp-B0h]
  int v12; // [rsp+60h] [rbp-A8h] BYREF
  char v13; // [rsp+64h] [rbp-A4h]
  int v14; // [rsp+88h] [rbp-80h] BYREF
  const char *v15; // [rsp+90h] [rbp-78h]
  __int64 v16; // [rsp+98h] [rbp-70h]
  char v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  _BYTE v19[144]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+140h] [rbp+38h]
  __int64 v21; // [rsp+148h] [rbp+40h]
  __int64 v22; // [rsp+150h] [rbp+48h]
  __int64 v23; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  if ( *((_BYTE *)this + 200) )
  {
    v6 = 0LL;
    v7 = v5;
    v8 = 0LL;
    v10 = &v14;
    LODWORD(v9) = 0;
    v11 = &v12;
    v12 = 0;
    v15 = "OnShellRequestedHideActivity";
    v13 = 0;
    v17 = 0;
    v14 = 0;
    v16 = 0LL;
    v18 = 1LL;
    v20 = 0LL;
    v21 = 0LL;
    memset(v19, 0, sizeof(v19));
    v22 = 0LL;
    *(_QWORD *)v5 = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::`vftable';
    v23 = 0LL;
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *)v5);
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 344LL))(*((_QWORD *)this + 2));
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x330,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v2);
      *(_QWORD *)v5 = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::`vftable';
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
      return v3;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v5,
      0);
    *(_QWORD *)v5 = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  }
  return 0LL;
}
