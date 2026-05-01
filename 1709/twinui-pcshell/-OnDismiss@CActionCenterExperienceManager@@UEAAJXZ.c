/*
 * XREFs of ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180098320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B84 (--1-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009B87C (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009BFC4 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@$$QEAW4InputType@2@@Z @ 0x18009CAC8 (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@W4InputType@2@@DismissActionCenter@Notif.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnDismiss(CActionCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v8; // [rsp+28h] [rbp-D8h]
  _QWORD v9[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v8 = -2LL;
  if ( (*((_DWORD *)this + 82) & 0xFFFFFFFB) == 0 )
  {
    v6 = 0;
    v7 = 3;
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::Start<enum NotificationCenterUITelemetry::DismissMethod,enum NotificationCenterUITelemetry::InputType>(
      v9,
      &v7,
      &v6);
    v2 = CActionCenterExperienceManager::TransitionToState((__int64)this - 8, 2);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1337LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
      return v3;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    if ( *((_BYTE *)this + 513) )
    {
      v2 = CActionCenterExperienceManager::RaiseApplicationEvent(
             (CActionCenterExperienceManager *)((char *)this - 8),
             L"LightDismissInvoked",
             1);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 1342LL;
        goto LABEL_7;
      }
    }
    v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
  return 0LL;
}
