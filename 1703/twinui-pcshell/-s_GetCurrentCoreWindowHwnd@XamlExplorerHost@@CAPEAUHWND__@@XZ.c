/*
 * XREFs of ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x18011E078
 * Callers:
 *     ?UncloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x18011DFAC (-UncloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost.c)
 *     ?CloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x18011E028 (-CloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@.c)
 *     ?RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXVRect@Foundation@Windows@@@Z @ 0x18011E324 (-RepositionThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18011E630 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ @ 0x18011E7D4 (-get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHost::s_GetCurrentCoreWindowHwnd(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v9; // [rsp+60h] [rbp+28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+30h]
  __int64 v11; // [rsp+70h] [rbp+38h] BYREF
  __int64 v12; // [rsp+78h] [rbp+40h]

  v1 = Windows::UI::Xaml::Window::Current::get(a1);
  v12 = v1;
  v10 = 0LL;
  v2 = Windows::UI::Xaml::IWindow::CoreWindow::get(v1);
  v10 = v2;
  v9 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v2)(v2, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v11;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v5;
}
