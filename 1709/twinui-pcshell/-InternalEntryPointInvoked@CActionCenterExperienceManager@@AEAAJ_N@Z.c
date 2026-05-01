/*
 * XREFs of ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800975B8
 * Callers:
 *     ?EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095E10 (-EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180095FB0 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180090BF8 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097450 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::InternalEntryPointInvoked(CActionCenterExperienceManager *this)
{
  int v2; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  int v8; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  else
  {
    v2 = *((_DWORD *)this + 84);
    if ( !v2 )
    {
      if ( *((_DWORD *)this + 40) == 2 )
      {
        v4 = CActionCenterExperienceManager::TransitionToState(this, 2LL);
        if ( v4 < 0 )
        {
          v5 = 930LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v5,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
          return (unsigned int)v4;
        }
        v7 = CActionCenterExperienceManager::ReturnFocus((ExperienceManagerUtils **)this, v3);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3A3,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
      }
      return 0LL;
    }
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v8 = CActionCenterExperienceManager::TransitionToState(this, 2LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AE,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
    }
    if ( !*((_QWORD *)this + 78) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_748a048480ae588c86e82d4d271aeef7_::_lambda_invoker_cdecl_,
                          this,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 78,
        ThreadpoolTimer);
      v10 = (struct _TP_TIMER *)*((_QWORD *)this + 78);
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0);
    }
    if ( *((_QWORD *)this + 18) )
    {
      v4 = CActionCenterExperienceManager::RaiseApplicationEvent(this, L"NotificationsInvoked", 1);
      if ( v4 < 0 )
      {
        v5 = 962LL;
        goto LABEL_6;
      }
    }
    else
    {
      *((_DWORD *)this + 86) = 0;
    }
    v11 = CActionCenterExperienceManager::Launch(this);
    v12 = v11;
    if ( v11 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}
