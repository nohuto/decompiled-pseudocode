/*
 * XREFs of ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800921F0
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180091EDC (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18008E4EC (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18008E560 (-PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnShellReady(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  HRESULT Instance; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_BYTE *)this + 460) = 1;
  v2 = *((_QWORD *)this + 52);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 52) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::PrelaunchSkippedDueToPolicy();
  }
  else
  {
    Instance = CActionCenterExperienceManager::Launch(this);
    if ( Instance < 0 )
    {
      v4 = 523LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  v6 = *((_QWORD *)this + 60);
  if ( v6 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Instance = CoCreateInstance(
               &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
               0LL,
               0x17u,
               &GUID_4a21fac3_37ad_45f0_ad17_bc4a303042d8,
               (LPVOID *)this + 60);
  if ( Instance < 0 )
  {
    v4 = 534LL;
    goto LABEL_6;
  }
  v7 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 400,
         WNF_SHEL_TOAST_PUBLISHED,
         0LL,
         CActionCenterExperienceManager::NotificationStateChangedCallback,
         this,
         0LL,
         0,
         1);
  Instance = v7 | 0x10000000;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    v4 = 537LL;
    goto LABEL_6;
  }
  v8 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 408,
         WNF_SHEL_NOTIFICATIONS_CRITICAL,
         0LL,
         CActionCenterExperienceManager::CriticalNotificationStateChangedCallback,
         this,
         0LL,
         0,
         1);
  v9 = v8 | 0x10000000;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v9);
  }
  return v9;
}
