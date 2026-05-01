/*
 * XREFs of ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368
 * Callers:
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180096260 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800964DC (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096684 (-OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096D0C (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099FA0 (-OnDisplayContextChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x18009CB94 (--$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x18009CC20 (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0E74 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnTargetedMessage(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v9 = CActionCenterExperienceManager::OnShellReady((CActionCenterExperienceManager *)a1);
    if ( v9 < 0 )
    {
      v10 = 548LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v9 = CActionCenterExperienceManager::OnNewNotification((PVOID)a1);
    if ( v9 < 0 )
    {
      v10 = 552LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v9 = CActionCenterExperienceManager::OnCriticalNotification((CActionCenterExperienceManager *)a1);
    if ( v9 < 0 )
    {
      v10 = 556LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 616),
      0LL);
    if ( *(_QWORD *)(a1 + 144) && (v12 = CSingleViewShellExperience::NavigateView(a1 + 120, 1LL), v9 = v12, v12 < 0) )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2DA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    else
      v9 = 0;
    if ( v9 < 0 )
    {
      v10 = 560LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>();
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 624),
      0LL);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = CActionCenterExperienceManager::RaiseApplicationEvent((CActionCenterExperienceManager *)a1, L"ThemeChanged", 1);
    if ( v9 < 0 )
    {
      v10 = 568LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)a1);
    if ( v9 < 0 )
    {
      v10 = 572LL;
      goto LABEL_30;
    }
    return 0LL;
  }
  if ( v8 == 1 )
  {
    v9 = CActionCenterExperienceManager::OnDisplayContextChanged((CActionCenterExperienceManager *)a1);
    if ( v9 < 0 )
    {
      v10 = 576LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x244,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)0x8000FFFFLL);
  return (unsigned int)v9;
}
