/*
 * XREFs of ?CloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x18011E028
 * Callers:
 *     ?CloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXXZ @ 0x18011F290 (-CloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlE_ea_18011F290.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x18011E078 (-s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _CloakThreadWindow__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXXZ(
        __int64 a1)
{
  HWND CurrentCoreWindowHwnd; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CurrentCoreWindowHwnd = XamlExplorerHost::s_GetCurrentCoreWindowHwnd();
  result = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**(_QWORD **)(a1 + 40) + 24LL))(
             *(_QWORD *)(a1 + 40),
             CurrentCoreWindowHwnd,
             1LL);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18011E076LL);
  }
  return result;
}
