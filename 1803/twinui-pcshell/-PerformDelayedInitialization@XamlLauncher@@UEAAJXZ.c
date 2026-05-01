/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802281D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180077EC0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180078470 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F6C78 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1c67d7deeb921e5458a9889de9f36378___ @ 0x180225418 (Windows--Internal--ComTaskPool--QueueTask__lambda_1c67d7deeb921e5458a9889de9f36378___.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x180225E88 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1802268E0 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180226DC4 (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180226ECC (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802273E4 (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x180227478 (-IsUserOOBE@@YA_NXZ.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x180228BA8 (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18022B6DC (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     IsUserAssignedAccessSingleApp @ 0x18030AE84 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  PerSessionState *v2; // rcx
  bool v3; // al
  int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  HRESULT Service; // eax
  __int64 v8; // rdx
  void *v9; // rdx
  __int64 v10; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v12; // [rsp+48h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v15[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v14[1] = -2LL;
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PerformDelayedInitialization");
  v15[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity((StartWindowTelemetry::PerformDelayedInitialization *)v15);
  v3 = IsUserOOBE() || IsCredentialReset() || (unsigned int)IsUserAssignedAccessSingleApp(-4LL) != 0;
  *((_BYTE *)this + 176) = v3;
  v4 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    LODWORD(v14[0]) = 0;
    WinStationQueryCurrentSessionInformation(39LL, &`IsRemoteAppSession'::`2'::s_stSessionType, 4LL, v14);
    v4 = 0;
    `IsRemoteAppSession'::`2'::s_stSessionType = 0;
  }
  *((_BYTE *)this + 178) = v4 == 5;
  if ( !PerSessionState::HasLoginCompleted(v2) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this - 5),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this - 8),
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                (void **)&v12);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v12);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v12);
        v6 = Service;
        if ( Service >= 0 )
        {
          Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v12);
          v6 = Service;
          if ( Service >= 0 )
          {
            Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, unsigned __int64))(**((_QWORD **)this + 24)
                                                                                                  + 24LL))(
                        *((_QWORD *)this + 24),
                        *((_QWORD *)this + 6),
                        *((_QWORD *)this + 7),
                        ppvOut,
                        ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
            v6 = Service;
            if ( Service >= 0 )
            {
              Windows::Internal::ComTaskPool::QueueTask__lambda_1c67d7deeb921e5458a9889de9f36378___(v10, v9);
              wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
              v6 = 0;
              goto LABEL_23;
            }
            v8 = 409LL;
          }
          else
          {
            v8 = 407LL;
          }
        }
        else
        {
          v8 = 404LL;
        }
      }
      else
      {
        v8 = 401LL;
      }
    }
    else
    {
      v8 = 399LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18A,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v15);
  return v6;
}
