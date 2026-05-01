/*
 * XREFs of ?UnregisterHolographicExecutor@CActionCenterExperienceManager@@UEAAJXZ @ 0x18009A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800949E4 (-StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094BF8 (--1-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A4EC (-ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shel.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009B01C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009B748 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::UnregisterHolographicExecutor(CActionCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+50h] [rbp-B0h]
  int *v9; // [rsp+58h] [rbp-A8h]
  int *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+6Ch] [rbp-94h]
  int v13; // [rsp+90h] [rbp-70h] BYREF
  const char *v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  char v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  _BYTE v18[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+148h] [rbp+48h]
  __int64 v20; // [rsp+150h] [rbp+50h]
  __int64 v21; // [rsp+158h] [rbp+58h]
  __int64 v22; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v7[1] = 0LL;
  v7[2] = v7;
  v7[3] = 0LL;
  v8 = 0;
  v9 = &v13;
  v10 = &v11;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  v13 = 0;
  v14 = "EM_UnregisterHolographicExecutor";
  v15 = 0LL;
  v17 = 1LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v18, 0, sizeof(v18));
  v21 = 0LL;
  v22 = 0LL;
  v7[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *)v7);
  if ( !*((_QWORD *)this + 71) )
  {
LABEL_8:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v3 = 0;
    goto LABEL_9;
  }
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)this + 53));
  *((_QWORD *)this + 53) = 0LL;
  v2 = CActionCenterExperienceManager::ChangeDisplayContext((__int64)this - 80, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *((_QWORD *)this + 71);
    if ( v4 )
    {
      *((_QWORD *)this + 71) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *((_QWORD *)this + 73);
    if ( v5 )
    {
      *((_QWORD *)this + 73) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x7FA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  v7[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return v3;
}
