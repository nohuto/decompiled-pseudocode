/*
 * XREFs of ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180164B38
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801646A0 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18007E13C (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x180161B14 (--$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163F88 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164088 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164704 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164868 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnTargetedMessage(struct _TP_TIMER **a1, int a2)
{
  int v3; // edx
  int v4; // edx
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = (enum Windows::Internal::Shell::Holographic::UserDisplayContext *)(unsigned int)(v4 - 1);
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 != 2 )
          {
            v6 = -2147418113;
            v7 = 477LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v7,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
            return (unsigned int)v6;
          }
          v6 = CToastCenterExperienceManager::OnDisplayContextChanged((CToastCenterExperienceManager *)a1, v5);
          if ( v6 < 0 )
          {
            v7 = 473LL;
            goto LABEL_20;
          }
        }
        else
        {
          NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>();
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
            a1 + 62,
            0LL);
          v8 = CToastCenterExperienceManager::Hide((CToastCenterExperienceManager *)a1);
          v6 = v8;
          if ( v8 >= 0 )
            v6 = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x234,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v8);
          if ( v6 < 0 )
          {
            v7 = 469LL;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v6 = CToastCenterExperienceManager::OnCriticalNotification(a1);
        if ( v6 < 0 )
        {
          v7 = 465LL;
          goto LABEL_20;
        }
      }
    }
    else
    {
      v6 = CToastCenterExperienceManager::OnNewNotification(a1);
      if ( v6 < 0 )
      {
        v7 = 461LL;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v6 = CToastCenterExperienceManager::OnShellReady((char *)a1);
    if ( v6 < 0 )
    {
      v7 = 457LL;
      goto LABEL_20;
    }
  }
  return 0LL;
}
