/*
 * XREFs of ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x1801486C8
 * Callers:
 *     ?UncloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x1801485FC (-UncloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost.c)
 *     ?CloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x180148678 (-CloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@.c)
 *     ?RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXVRect@Foundation@Windows@@@Z @ 0x1801488D4 (-RepositionThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerH.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ @ 0x180148E24 (-get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHost::s_GetCurrentCoreWindowHwnd(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 (__fastcall **v3)(__int64, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v11; // [rsp+60h] [rbp+28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+30h]
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+40h]

  v1 = Windows::UI::Xaml::Window::Current::get(a1);
  v14 = v1;
  v12 = 0LL;
  v2 = Windows::UI::Xaml::IWindow::CoreWindow::get(v1);
  v12 = v2;
  v11 = 0LL;
  v3 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v11);
  v5 = (*v3)(v2, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v13);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v13;
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v7;
}
