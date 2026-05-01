/*
 * XREFs of ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180092EFC
 * Callers:
 *     ?EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x180091B10 (-EntryPointInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180091C00 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18008E5D4 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D5C (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092D94 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18018329C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CActionCenterExperienceManager::InternalEntryPointInvoked(CActionCenterExperienceManager *this)
{
  int v2; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  HRESULT v8; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  HSTRING string; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  else
  {
    v2 = *((_DWORD *)this + 82);
    if ( !v2 )
    {
      if ( *((_DWORD *)this + 38) == 2 )
      {
        v4 = CActionCenterExperienceManager::TransitionToState(this, 2LL);
        if ( v4 < 0 )
        {
          v5 = 843LL;
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
            (void *)0x34C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
      }
      return 0LL;
    }
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v4 = CActionCenterExperienceManager::Hide(this);
      if ( v4 < 0 )
      {
        v5 = 855LL;
        goto LABEL_6;
      }
    }
    string = 0LL;
    v8 = WindowsCreateStringReference(
           L"Windows.Internal.ShellExperience.ActionCenter fullscreen",
           0x38u,
           &hstringHeader,
           &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      JUMPOUT(0x1800930A1LL);
    }
    v4 = CSingleViewShellExperience::SetArgs((HSTRING *)this + 14, string);
    if ( v4 < 0 )
    {
      v5 = 860LL;
      goto LABEL_6;
    }
    if ( !*((_QWORD *)this + 67) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_593eee64f63e5738afc2923b81d8d64a_::_lambda_invoker_cdecl_,
                          this,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 67,
        ThreadpoolTimer);
      v10 = (struct _TP_TIMER *)*((_QWORD *)this + 67);
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0);
    }
    v11 = CActionCenterExperienceManager::Launch(this);
    v12 = v11;
    if ( v11 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x36B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}
