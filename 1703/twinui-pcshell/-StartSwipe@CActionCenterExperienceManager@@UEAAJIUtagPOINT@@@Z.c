/*
 * XREFs of ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180091C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180090C5C (--1-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180092EFC (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180095690 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180095DD4 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x1800966FC (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@Notif.c)
 *     ??$Start@W4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4InvokeMethod@2@$$QEAW4InputType@2@@Z @ 0x1800967C8 (--$Start@W4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@2@@LaunchActionCenter@Notific.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::StartSwipe(
        CActionCenterExperienceManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void **v6; // rcx
  void **v8; // rcx
  bool v9; // dl
  int v10; // eax
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h]
  _QWORD v14[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v13 = -2LL;
  if ( *((_DWORD *)this + 72) )
  {
    v12 = 2;
    v11 = 3;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::Start<enum NotificationCenterUITelemetry::InvokeMethod,enum NotificationCenterUITelemetry::InputType>(
      v14,
      &v11,
      &v12);
    v10 = CActionCenterExperienceManager::InternalEntryPointInvoked(
            (CActionCenterExperienceManager *)((char *)this - 40),
            v9);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1A2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      v6 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
      goto LABEL_4;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
    v8 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
  }
  else
  {
    v11 = 2;
    v12 = 5;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::Start<enum NotificationCenterUITelemetry::DismissMethod,enum NotificationCenterUITelemetry::InputType>(
      v14,
      &v12,
      &v11);
    v4 = CActionCenterExperienceManager::TransitionToState((char *)this - 40, 2LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x19C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      v6 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
LABEL_4:
      v14[0] = v6;
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
      return v5;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
    v8 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  }
  v14[0] = v8;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return 0LL;
}
