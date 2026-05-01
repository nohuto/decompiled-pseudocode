/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A734 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  HRESULT v11; // eax
  HSTRING v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  HRESULT v16; // eax
  __int64 v17; // rdx
  HRESULT v18; // eax
  _BYTE v20[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  char v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v23 = -2LL;
  LODWORD(hstringHeader.Reserved.Reserved1) = *((_DWORD *)this + 14);
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v20, (__int128 *)&hstringHeader);
  v5 = v4 - 1;
  if ( !v5 )
  {
    *((_DWORD *)this + 14) = 18;
    goto LABEL_29;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 14) = 19;
    goto LABEL_29;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 14) = 20;
    goto LABEL_29;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)this + 14) = 21;
    goto LABEL_29;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      hstringHeader.Reserved.Reserved1 = 0LL;
      WindowsDeleteString(0LL);
      hstringHeader.Reserved.Reserved1 = 0LL;
      v16 = WindowsCreateString(L"StartMode=AppTransition", 0x17u, (HSTRING *)&hstringHeader);
      v14 = v16;
      if ( v16 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, PVOID, __int64))(**((_QWORD **)this + 10) + 56LL))(
                *((_QWORD *)this + 10),
                hstringHeader.Reserved.Reserved1,
                1LL);
        v14 = v16;
        if ( v16 >= 0 )
        {
          WindowsDeleteString((HSTRING)hstringHeader.Reserved.Reserved1);
          goto LABEL_29;
        }
        v17 = 2025LL;
      }
      else
      {
        v17 = 2024LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v16);
      WindowsDeleteString((HSTRING)hstringHeader.Reserved.Reserved1);
      goto LABEL_30;
    }
    if ( v10 == 5 )
    {
      string = 0LL;
      v11 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
      if ( v11 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
        __debugbreak();
      }
      v12 = string;
      if ( !string || string != *((HSTRING *)this + 122) )
      {
        WindowsDeleteString(*((HSTRING *)this + 122));
        *((_QWORD *)this + 122) = 0LL;
        v13 = WindowsDuplicateString(v12, (HSTRING *)this + 122);
        v14 = v13;
        if ( v13 < 0 )
        {
          v15 = 2041LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_30;
        }
      }
    }
  }
  else
  {
    string = 0LL;
    v18 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    v13 = XamlLauncherState::ShowCortanaFromOpenStart(this, string);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 2031LL;
      goto LABEL_24;
    }
  }
LABEL_29:
  v14 = 0;
LABEL_30:
  if ( v22 )
  {
    v22 = 0;
    StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v20,
      v21 + 56);
  }
  return v14;
}
