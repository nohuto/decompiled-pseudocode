/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_a6b59bc3aa7c8484d39bafb26dd10abc___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::Invoke @ 0x180085A50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180085A50.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800679C0 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180076A80 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180077D10 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x180077DA0 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180079360 (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180079A08 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18007A2A4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007A3DC (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180094C40 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180225E60 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022E14C (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180231664 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  int *v5; // r14
  int v6; // r15d
  XamlLauncher *v7; // rcx
  void (*v8)(void); // rax
  HSTRING *v9; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  CortanaSharedExperienceManager *v12; // rcx
  __int64 (*v13)(void); // rax
  int v14; // eax
  XamlLauncher *v15; // rcx
  void (*v16)(void); // rax
  int v17; // eax
  LPARAM v18; // rsi
  HWND v19; // rax
  unsigned int v20; // ebx
  int v22; // eax
  int v23; // eax
  LPARAM v24; // rdi
  HWND WindowW; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v34; // [rsp+60h] [rbp-A8h]
  _BYTE v35[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v32 = -2LL;
  v5 = (int *)((char *)this + 64);
  v29[2] = *((_DWORD *)this + 16);
  v30 = this;
  LOBYTE(v31) = 1;
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  if ( *v5 == 1 )
    goto LABEL_40;
  if ( *v5 != 2 )
  {
    if ( *v5 == 6 )
    {
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((char *)this + 600, v35);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x680,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v22,
          v29[2]);
      *v5 = 7;
      v23 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x682,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v23,
          v29[2]);
      v24 = *((_QWORD *)this + 122);
      WindowW = hWnd;
      if ( !hWnd )
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        hWnd = WindowW;
      }
      PostMessageW(WindowW, 0x5CBu, 1uLL, v24);
      XamlLauncherState::CancelCortanaTelemetryTimeout(this);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CommonStartTelemetry::LauncherInvokeActivity *)v35);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v35);
      goto LABEL_21;
    }
    if ( *v5 != 18 )
    {
      if ( *v5 != 19 )
        goto LABEL_21;
      goto LABEL_3;
    }
LABEL_40:
    v27 = 3;
    if ( *v5 != 1 )
      v27 = 20;
    *v5 = v27;
    v28 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x664,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v28,
        v29[2]);
    goto LABEL_21;
  }
LABEL_3:
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((char *)this + 288, v35);
  v6 = *v5;
  v7 = (XamlLauncher *)*((_QWORD *)this + 16);
  v8 = *(void (**)(void))(*(_QWORD *)v7 + 40LL);
  if ( (char *)v8 == (char *)XamlLauncher::OnDeviceUnlockedWithLauncherAndCortanaShowing )
    XamlLauncher::OnDeviceUnlockedWithLauncherAndCortanaShowing(v7);
  else
    v8();
  v9 = (HSTRING *)*((_QWORD *)this + 10);
  v10 = (__int64 (*)(void))*((_QWORD *)*v9 + 18);
  if ( (char *)v10 == (char *)CStartExperienceManager::Uncloak )
    v11 = CStartExperienceManager::Uncloak(v9);
  else
    v11 = v10();
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66D,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v11,
      v29[2]);
  v12 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11);
  v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 144LL);
  if ( (char *)v13 == (char *)CortanaSharedExperienceManager::Uncloak )
    v14 = CortanaSharedExperienceManager::Uncloak(v12);
  else
    v14 = v13();
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66E,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v14,
      v29[2]);
  *v5 = 5;
  v15 = (XamlLauncher *)*((_QWORD *)this + 16);
  v16 = *(void (**)(void))(*(_QWORD *)v15 + 24LL);
  if ( (char *)v16 == (char *)XamlLauncher::OnLauncherShow )
    XamlLauncher::OnLauncherShow(v15);
  else
    v16();
  v17 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x671,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v17,
      v29[2]);
  v18 = *((_QWORD *)this + 122);
  v19 = hWnd;
  if ( !hWnd )
  {
    v19 = FindWindowW(L"Shell_TrayWnd", 0LL);
    hWnd = v19;
  }
  PostMessageW(v19, 0x5CBu, 1uLL, v18);
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v35);
  if ( v6 == 19 )
  {
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    v26 = XamlLauncherState::ShowCortanaFromOpenStart(this, v34);
    v20 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x676,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v26,
        v29[2]);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v35);
      goto LABEL_22;
    }
  }
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v35);
LABEL_21:
  v20 = 0;
LABEL_22:
  LOBYTE(v31) = 0;
  StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v29[2],
    v5);
  return v20;
}
