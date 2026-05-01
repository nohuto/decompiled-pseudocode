/*
 * XREFs of ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1801A46A8
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180199D90 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A0734 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A11DC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A13E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A4018 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1801A78C0 (-StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppResumed(RTL_SRWLOCK *this)
{
  int v2; // eax
  _QWORD v3[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+50h] [rbp-B0h]
  int *v5; // [rsp+58h] [rbp-A8h]
  int *v6; // [rsp+60h] [rbp-A0h]
  int v7; // [rsp+68h] [rbp-98h] BYREF
  char v8; // [rsp+6Ch] [rbp-94h]
  int v9; // [rsp+90h] [rbp-70h] BYREF
  const char *v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  char v12; // [rsp+A8h] [rbp-58h]
  __int64 v13; // [rsp+B0h] [rbp-50h]
  _BYTE v14[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+148h] [rbp+48h]
  __int64 v16; // [rsp+150h] [rbp+50h]
  __int64 v17; // [rsp+158h] [rbp+58h]
  __int64 v18; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3[1] = 0LL;
  v3[2] = v3;
  v3[3] = 0LL;
  v4 = 0;
  v5 = &v9;
  v6 = &v7;
  v7 = 0;
  v8 = 0;
  v12 = 0;
  v9 = 0;
  v10 = "InputAppResumed";
  v11 = 0LL;
  v13 = 1LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v14, 0, sizeof(v14));
  v17 = 0LL;
  v18 = 0LL;
  v3[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumed::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppResumed::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppResumed *)v3);
  v2 = KeyboardHosting::TabTipAdapter::ExecutePendingRequest(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v3,
    0);
  v3[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumed::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v3);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v3);
}
