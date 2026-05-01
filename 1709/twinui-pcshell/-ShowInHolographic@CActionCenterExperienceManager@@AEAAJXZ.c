/*
 * XREFs of ?ShowInHolographic@CActionCenterExperienceManager@@AEAAJXZ @ 0x18009A0C4
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A4EC (-ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shel.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180093B14 (-StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
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
__int64 __fastcall CActionCenterExperienceManager::ShowInHolographic(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int128 v7; // [rsp+30h] [rbp-D8h] BYREF
  float v8; // [rsp+40h] [rbp-C8h]
  float v9; // [rsp+44h] [rbp-C4h]
  __int64 v10; // [rsp+48h] [rbp-C0h]
  struct tagRECT v11; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v13; // [rsp+88h] [rbp-80h]
  int *v14; // [rsp+90h] [rbp-78h]
  int *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h] BYREF
  char v17; // [rsp+A4h] [rbp-64h]
  int v18; // [rsp+C8h] [rbp-40h] BYREF
  const char *v19; // [rsp+D0h] [rbp-38h]
  __int64 v20; // [rsp+D8h] [rbp-30h]
  char v21; // [rsp+E0h] [rbp-28h]
  __int64 v22; // [rsp+E8h] [rbp-20h]
  _BYTE v23[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+180h] [rbp+78h]
  __int64 v25; // [rsp+188h] [rbp+80h]
  __int64 v26; // [rsp+190h] [rbp+88h]
  __int64 v27; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v10 = -2LL;
  v12[1] = 0LL;
  v12[2] = v12;
  v12[3] = 0LL;
  v13 = 0;
  v14 = &v18;
  v15 = &v16;
  v16 = 0;
  v17 = 0;
  v21 = 0;
  v18 = 0;
  v19 = "EM_ShowInHolographic";
  v20 = 0LL;
  v22 = 1LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  v27 = 0LL;
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)v12);
  v2 = *((_QWORD *)this + 83);
  if ( !v2 || !*((_QWORD *)this + 81) )
    goto LABEL_12;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, *((_QWORD *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_QWORD *)&v11.left = 0LL;
    v11.right = MulDiv((int)*((float *)this + 41), 150, 100);
    v11.bottom = MulDiv((int)*((float *)this + 42), 150, 100);
    v3 = CActionCenterExperienceManager::SetViewPresentationMode((__int64)this, 1);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1945LL;
      goto LABEL_11;
    }
    v3 = CSingleViewShellExperience::SetPosition((CActionCenterExperienceManager *)((char *)this + 120), &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1946LL;
      goto LABEL_11;
    }
    *((_QWORD *)&v7 + 1) = 0LL;
    v8 = (float)(*((_DWORD *)this + 170) - *((_DWORD *)this + 168));
    v9 = (float)(*((_DWORD *)this + 171) - *((_DWORD *)this + 169));
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 81) + 48LL))(
           *((_QWORD *)this + 81),
           *((_QWORD *)this + 17),
           *((_QWORD *)this + 18),
           (char *)&v7 + 8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1950LL;
      goto LABEL_11;
    }
LABEL_12:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    v4 = 0;
    goto LABEL_13;
  }
  v5 = 1938LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_13:
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  return v4;
}
