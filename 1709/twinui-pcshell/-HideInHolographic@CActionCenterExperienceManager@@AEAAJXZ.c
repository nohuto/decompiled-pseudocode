/*
 * XREFs of ?HideInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A328
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A4EC (-ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shel.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180094004 (-StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094BF8 (--1-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?SetViewPresentationMode@CActionCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x18009A008 (-SetViewPresentationMode@CActionCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009B01C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009B748 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::HideInHolographic(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
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
  v14 = "EM_HideInHolographic";
  v15 = 0LL;
  v17 = 1LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v18, 0, sizeof(v18));
  v21 = 0LL;
  v22 = 0LL;
  v7[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic *)v7);
  v2 = *((_QWORD *)this + 81);
  if ( !v2 || !*((_QWORD *)this + 83) )
    goto LABEL_12;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 56LL))(
         v2,
         *((_QWORD *)this + 17),
         *((_QWORD *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = CActionCenterExperienceManager::SetViewPresentationMode((__int64)this, 0);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1966LL;
      goto LABEL_11;
    }
    v3 = CSingleViewShellExperience::SetPosition(
           (CActionCenterExperienceManager *)((char *)this + 120),
           (const struct tagRECT *)this + 42);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1967LL;
      goto LABEL_11;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 83) + 56LL))(
           *((_QWORD *)this + 83),
           *((_QWORD *)this + 18));
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1970LL;
      goto LABEL_11;
    }
LABEL_12:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v4 = 0;
    goto LABEL_13;
  }
  v5 = 1963LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_13:
  v7[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return v4;
}
