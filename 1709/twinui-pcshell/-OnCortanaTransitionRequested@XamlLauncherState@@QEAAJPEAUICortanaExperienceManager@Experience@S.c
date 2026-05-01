/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E8B4 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  HRESULT v5; // eax
  HSTRING v6; // rsi
  HSTRING *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HRESULT v11; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  char v16; // [rsp+30h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17 = -2LL;
  v4 = (_DWORD *)((char *)this + 64);
  LODWORD(hstringHeader.Reserved.Reserved1) = *((_DWORD *)this + 16);
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
  v15 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
  v16 = 1;
  switch ( LODWORD(hstringHeader.Reserved.Reserved1) )
  {
    case 1:
      *v4 = 18;
      goto LABEL_29;
    case 2:
      *v4 = 19;
      goto LABEL_29;
    case 3:
      *v4 = 20;
      goto LABEL_29;
    case 4:
      *v4 = 21;
      goto LABEL_29;
    case 5:
      string = 0LL;
      v13 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
      if ( v13 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      v8 = XamlLauncherState::ShowCortanaFromOpenStart(this, string);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2050LL;
        goto LABEL_24;
      }
LABEL_29:
      v9 = 0;
      goto LABEL_30;
  }
  if ( LODWORD(hstringHeader.Reserved.Reserved1) != 7 )
  {
    if ( LODWORD(hstringHeader.Reserved.Reserved1) == 12 )
    {
      string = 0LL;
      v5 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
      if ( v5 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
        __debugbreak();
      }
      v6 = string;
      v7 = (HSTRING *)((char *)this + 992);
      if ( !string || string != *v7 )
      {
        WindowsDeleteString(*v7);
        *v7 = 0LL;
        v8 = WindowsDuplicateString(v6, (HSTRING *)this + 124);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2060LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v10,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v8);
          goto LABEL_30;
        }
      }
    }
    goto LABEL_29;
  }
  WindowsDeleteString(0LL);
  hstringHeader.Reserved.Reserved1 = 0LL;
  v11 = WindowsCreateString(L"StartMode=AppTransition", 0x17u, (HSTRING *)&hstringHeader);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, PVOID, __int64))(**((_QWORD **)this + 11) + 56LL))(
            *((_QWORD *)this + 11),
            hstringHeader.Reserved.Reserved1,
            1LL);
    v9 = v11;
    if ( v11 >= 0 )
    {
      WindowsDeleteString((HSTRING)hstringHeader.Reserved.Reserved1);
      goto LABEL_29;
    }
    v12 = 2044LL;
  }
  else
  {
    v12 = 2043LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v11);
  WindowsDeleteString((HSTRING)hstringHeader.Reserved.Reserved1);
LABEL_30:
  v16 = 0;
  StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v15,
    v4);
  return v9;
}
