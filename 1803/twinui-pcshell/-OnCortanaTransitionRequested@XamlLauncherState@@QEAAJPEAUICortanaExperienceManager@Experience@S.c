/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079090
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_c6c6b71d79175f062023ba8be746059f___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180085740 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180085740.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18009497C (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F5EB0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  HSTRING string[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  char v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v16; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v14 = -2LL;
  v4 = (_DWORD *)((char *)this + 64);
  LODWORD(string[0]) = *((_DWORD *)this + 16);
  string[1] = (HSTRING)this;
  v12 = *(_OWORD *)string;
  v13 = 1;
  switch ( LODWORD(string[0]) )
  {
    case 1:
      *v4 = 18;
      goto LABEL_7;
    case 2:
      *v4 = 19;
      goto LABEL_7;
    case 3:
      *v4 = 20;
      goto LABEL_7;
    case 4:
      *v4 = 21;
      goto LABEL_7;
  }
  if ( LODWORD(string[0]) != 5 )
  {
    if ( LODWORD(string[0]) == 7 )
    {
      string[0] = 0LL;
      v9 = Microsoft::WRL::Wrappers::HString::Set(
             (Microsoft::WRL::Wrappers::HString *)string,
             L"StartMode=AppTransition",
             0x17u);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
               *((_QWORD *)this + 11),
               string[0],
               1LL);
        v6 = v9;
        if ( v9 >= 0 )
        {
          WindowsDeleteString(string[0]);
          goto LABEL_7;
        }
        v10 = 2044LL;
      }
      else
      {
        v10 = 2043LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9,
        (int)string[0]);
      WindowsDeleteString(string[0]);
      goto LABEL_8;
    }
    if ( LODWORD(string[0]) != 12 )
      goto LABEL_7;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    string[0] = v16;
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 124, string);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_7;
    v8 = 2060LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5,
      (int)string[0]);
    goto LABEL_8;
  }
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"StartMode=AppTransition", 0x18u, 0x17u);
  v5 = XamlLauncherState::ShowCortanaFromOpenStart(this, v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 2050LL;
    goto LABEL_20;
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  v13 = 0;
  StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4);
  return v6;
}
