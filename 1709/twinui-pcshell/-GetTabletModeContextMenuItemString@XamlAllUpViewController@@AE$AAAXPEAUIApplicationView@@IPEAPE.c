/*
 * XREFs of ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x180171608
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180174720 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x180178B8C (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1801CD710 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x1801E31C7 (WindowsDeleteString_0.c)
 *     WindowsDuplicateString_0 @ 0x1801E3435 (WindowsDuplicateString_0.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlAllUpViewController::GetTabletModeContextMenuItemString(
        __int64 a1,
        ApplicationViewHelpers *a2,
        unsigned int a3,
        HSTRING *a4)
{
  unsigned __int16 **v7; // r8
  int v8; // r15d
  int ViewTitle; // eax
  WCHAR *v10; // rsi
  LPWSTR v11; // rax
  int v12; // ebx
  bool i; // zf
  int v14; // eax
  WCHAR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  HSTRING v18; // rdi
  HSTRING v19; // rcx
  HRESULT v20; // eax
  LPCWSTR lpsz; // [rsp+28h] [rbp-49h] BYREF
  __int64 v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+38h] [rbp-39h]
  HSTRING newString; // [rsp+40h] [rbp-31h] BYREF
  PCNZWCH sourceString; // [rsp+48h] [rbp-29h] BYREF
  UINT32 length[2]; // [rsp+50h] [rbp-21h]
  __int64 v27; // [rsp+58h] [rbp-19h]
  HSTRING string[3]; // [rsp+60h] [rbp-11h] BYREF
  WCHAR Buffer[12]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  string[1] = (HSTRING)-2LL;
  LoadStringW(&_ImageBase, 0x5E7u, Buffer, 10);
  v8 = wcstol(Buffer, 0LL, 10);
  if ( !v8 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  lpsz = 0LL;
  v22 = -1LL;
  v23 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&lpsz, v7);
  if ( ViewTitle < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)ViewTitle);
    __debugbreak();
  }
  v10 = (WCHAR *)lpsz;
  lpsz = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v11 = v10;
  v12 = 0;
  for ( i = *v10 == 0; !i; i = *v11 == 0 )
  {
    v11 = CharNextW(v11);
    if ( ++v12 == v8 && *v11 )
    {
      *(_DWORD *)v11 = 8230;
      break;
    }
  }
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v27 = 0LL;
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
          &sourceString,
          &_ImageBase,
          a3,
          v10,
          v10,
          -1LL,
          -1LL);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (WCHAR *)sourceString;
  LODWORD(v16) = length[0];
  if ( *(_QWORD *)length == -1LL )
  {
    if ( sourceString )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( sourceString[v16] );
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)length = v16;
  }
  WindowsCreateString(sourceString, v16, string);
  newString = 0LL;
  v18 = (HSTRING)Platform::String::String(v17, string[0]);
  string[2] = v18;
  v19 = *a4;
  if ( *a4 != v18 )
  {
    if ( v19 )
      WindowsDeleteString_0(v19);
    *a4 = 0LL;
    if ( v18 )
    {
      v20 = WindowsDuplicateString_0(v18, &newString);
      if ( v20 < 0 )
        __abi_WinRTraiseException(v20);
      *a4 = newString;
    }
  }
  WindowsDeleteString_0(v18);
  if ( v15 )
    CoTaskMemFree(v15);
  CoTaskMemFree(v10);
}
