/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164868
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180164B38 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180154D98 (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_ @ 0x180161CC8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180161CC8.c)
 *     ?IsToastQueueEmpty@CToastCenterExperienceManager@@AEAAHXZ @ 0x180163274 (-IsToastQueueEmpty@CToastCenterExperienceManager@@AEAAHXZ.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163330 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180169B60 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x180169BCC (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(char *pv)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rsi
  HRESULT Instance; // eax
  __int64 v13; // rdx
  CToastCenterExperienceManager *v14; // rcx
  int v15; // eax
  UAPViewWrapper *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19[1] = -2LL;
  pv[417] = 1;
  v2 = *((_QWORD *)pv + 47);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)pv + 47) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  v18 = 0LL;
  v3 = *((_QWORD *)pv + 59);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v17 = 0LL;
    v6 = v18;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ActionCenter",
      0x2Eu,
      0x2Du);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v17);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, UAPViewWrapper **))(*(_QWORD *)v6 + 48LL))(v6, v21, &v17);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 499LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v17);
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pv + 65);
    v7 = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, char *))v17)(
           v17,
           &GUID_1ec5d3ef_a8bf_4311_9eeb_33ba50f461fe,
           pv + 520);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 501LL;
      goto LABEL_9;
    }
    v19[0] = pv;
    v9 = 0LL;
    v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = 0LL;
    if ( v10 )
    {
      v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_(
             (__int64)v10,
             v19);
      v11 = v9;
    }
    v19[0] = v9;
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)pv + 65) + 56LL))(
                 *((_QWORD *)pv + 65),
                 v11,
                 pv + 528);
    v5 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pv + 56);
      Instance = CoCreateInstance(
                   &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
                   0LL,
                   0x17u,
                   &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
                   (LPVOID *)pv + 56);
      v5 = Instance;
      if ( Instance >= 0 )
      {
        Instance = CToastCenterExperienceManager::SubscribeToNewNotificationWnf((CToastCenterExperienceManager *)pv);
        v5 = Instance;
        if ( Instance >= 0 )
        {
          Instance = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf((CToastCenterExperienceManager *)pv);
          v5 = Instance;
          if ( Instance >= 0 )
          {
            if ( !(unsigned int)CToastCenterExperienceManager::IsToastQueueEmpty(v14) )
            {
              v15 = CToastCenterExperienceManager::Launch((PTP_TIMER *)pv);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  529LL,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                  (const char *)(unsigned int)v15);
            }
            v5 = 0;
            goto LABEL_25;
          }
          v13 = 525LL;
        }
        else
        {
          v13 = 522LL;
        }
      }
      else
      {
        v13 = 519LL;
      }
    }
    else
    {
      v13 = 513LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_25:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v5;
}
