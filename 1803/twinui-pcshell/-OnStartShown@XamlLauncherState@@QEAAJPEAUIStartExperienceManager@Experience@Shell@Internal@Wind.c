/*
 * XREFs of ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800797F0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_44bbd199841b4d5ffbef2dab891128e4___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180076080 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180076080.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800679C0 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180075A1C (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180076A80 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180077D10 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x180077DA0 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180078E50 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180079A08 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180079AA0 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18007A2A4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180231698 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnStartShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  int v5; // ecx
  int v6; // eax
  XamlLauncherState *v7; // rcx
  unsigned int v8; // ebx
  bool v10; // r14
  bool v11; // di
  XamlLauncher *v12; // rcx
  void (*v13)(void); // rax
  HSTRING *v14; // rcx
  __int64 (*v15)(void); // rax
  int v16; // eax
  CortanaSharedExperienceManager *v17; // rcx
  __int64 (*v18)(void); // rax
  int v19; // eax
  XamlLauncher *v20; // rcx
  void (*v21)(void); // rax
  int v22; // eax
  LPARAM v23; // rdi
  HWND WindowW; // rax
  int v25; // eax
  XamlLauncherState *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v29[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v34; // [rsp+60h] [rbp-A8h]
  _BYTE v35[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v32 = -2LL;
  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v29[2] = v5;
  v30 = this;
  LOBYTE(v31) = 1;
  v6 = 2;
  if ( v5 == 1 )
    goto LABEL_2;
  if ( v5 <= 2 )
    goto LABEL_37;
  if ( v5 <= 4 )
  {
LABEL_13:
    v10 = (unsigned int)(v5 - 20) <= 1;
    v11 = v5 == 3 || v5 == 20;
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((char *)this + 288, v35);
    v12 = (XamlLauncher *)*((_QWORD *)this + 16);
    v13 = *(void (**)(void))(*(_QWORD *)v12 + 40LL);
    if ( (char *)v13 == (char *)XamlLauncher::OnDeviceUnlockedWithLauncherAndCortanaShowing )
      XamlLauncher::OnDeviceUnlockedWithLauncherAndCortanaShowing(v12);
    else
      v13();
    v14 = (HSTRING *)*((_QWORD *)this + 10);
    v15 = (__int64 (*)(void))*((_QWORD *)*v14 + 18);
    if ( (char *)v15 == (char *)CStartExperienceManager::Uncloak )
      v16 = CStartExperienceManager::Uncloak(v14);
    else
      v16 = v15();
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x521,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v16,
        v29[2]);
    v17 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 144LL);
    if ( (char *)v18 == (char *)CortanaSharedExperienceManager::Uncloak )
      v19 = CortanaSharedExperienceManager::Uncloak(v17);
    else
      v19 = v18();
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x522,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v19,
        v29[2]);
    *v4 = 5;
    v20 = (XamlLauncher *)*((_QWORD *)this + 16);
    v21 = *(void (**)(void))(*(_QWORD *)v20 + 24LL);
    if ( (char *)v21 == (char *)XamlLauncher::OnLauncherShow )
      XamlLauncher::OnLauncherShow(v20);
    else
      v21();
    if ( v11 )
    {
      v23 = *((_QWORD *)this + 122);
      WindowW = hWnd;
      if ( !hWnd )
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        hWnd = WindowW;
      }
      PostMessageW(WindowW, 0x5CBu, 1uLL, v23);
    }
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v35);
    if ( v10 )
    {
      v34 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"StartMode=AppTransition",
        0x18u,
        0x17u);
      v25 = XamlLauncherState::ShowCortanaFromOpenStart(this, v34);
      v8 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52C,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v25,
          v29[2]);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v35);
        goto LABEL_10;
      }
    }
    goto LABEL_30;
  }
  if ( v5 != 15 )
  {
    if ( v5 == 18 )
    {
LABEL_2:
      if ( v5 != 1 )
        v6 = 19;
      *v4 = v6;
      if ( !*((_BYTE *)this + 960) || XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this) )
      {
        if ( XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
          || *((_BYTE *)this + 963)
          || *((_BYTE *)this + 964) )
        {
          XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
        }
        else
        {
          XamlLauncherState::BeginCortanaReadinessCutoff(v7);
        }
      }
      else
      {
        *((_BYTE *)this + 960) = 0;
        XamlLauncherState::BeginCortanaReadinessCutoff(v26);
        v27 = *((_DWORD *)this + 71) >> 2;
        LOBYTE(v27) = (*((_DWORD *)this + 71) & 4) != 0;
        v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 72LL))(
                *((_QWORD *)this + 11),
                v27);
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4FF,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v28,
            v29[2]);
      }
      goto LABEL_9;
    }
    if ( v5 > 19 && v5 <= 21 )
      goto LABEL_13;
LABEL_37:
    *((_BYTE *)this + 965) = 1;
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    *v4 = 0;
    goto LABEL_9;
  }
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((char *)this + 288, v35);
  *v4 = 16;
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x510,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v22,
      v29[2]);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v35);
LABEL_30:
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v35);
LABEL_9:
  v8 = 0;
LABEL_10:
  LOBYTE(v31) = 0;
  StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v29[2],
    v4);
  return v8;
}
