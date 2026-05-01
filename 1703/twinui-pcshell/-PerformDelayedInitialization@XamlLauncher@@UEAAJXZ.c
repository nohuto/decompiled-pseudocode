/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180148064 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18014B190 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014BB1C (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014BDB0 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014CC9C (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014E3C4 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014EA54 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$Start@$$V@PerformDelayedInitialization@StartWindowTelemetry@@SA?AV01@XZ @ 0x18014F73C (--$Start@$$V@PerformDelayedInitialization@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_55b264313a8019947342e051aa80fccd___ @ 0x180150B74 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_55b264313a8019947342e051aa80fccd___.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180152B9C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     IsStartScreenFilterEnabled @ 0x1801913A8 (IsStartScreenFilterEnabled.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rax
  HRESULT Service; // eax
  __int64 v7; // rdx
  IUnknown *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v11; // rcx
  void *v12; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v14; // [rsp+48h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v16[1] = -2LL;
  StartWindowTelemetry::PerformDelayedInitialization::Start<>((StartWindowTelemetry::PerformDelayedInitialization *)v17);
  *((_BYTE *)this + 188) = (unsigned int)IsStartScreenFilterEnabled() != 0;
  if ( !PerSessionState::HasLoginCompleted(v2) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  v3 = IUnknown_QueryService(
         *((IUnknown **)this - 6),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1F8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_21;
  }
  v14 = 0LL;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v14);
  Service = XamlLauncher::QueryService(
              (XamlLauncher *)((char *)this - 8),
              &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
              &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
              (void **)v5);
  v4 = Service;
  if ( Service >= 0 )
  {
    Service = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v14);
    v4 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v14);
      v4 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v14);
        v4 = Service;
        if ( Service >= 0 )
        {
          Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 26)
                                                                                                + 24LL))(
                      *((_QWORD *)this + 26),
                      *((_QWORD *)this + 4),
                      *((_QWORD *)this + 5),
                      ppvOut,
                      ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
          v4 = Service;
          if ( Service >= 0 )
          {
            v8 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_55b264313a8019947342e051aa80fccd___(v16);
            CurrentThreadId = GetCurrentThreadId();
            Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v8, 0LL);
            v10 = v16[0];
            if ( v16[0] )
            {
              v16[0] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
            v4 = 0;
            goto LABEL_19;
          }
          v7 = 519LL;
        }
        else
        {
          v7 = 517LL;
        }
      }
      else
      {
        v7 = 514LL;
      }
    }
    else
    {
      v7 = 511LL;
    }
  }
  else
  {
    v7 = 509LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)Service);
LABEL_19:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_21:
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v17[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
  return v4;
}
