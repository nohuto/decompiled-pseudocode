/*
 * XREFs of ?UncloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXXZ @ 0x18011DFAC
 * Callers:
 *     ?UncloakThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXXZ @ 0x18011F330 (-UncloakThreadWindow@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@Xam_ea_18011F330.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x18011E078 (-s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _UncloakThreadWindow__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXXZ(
        __int64 a1)
{
  HWND CurrentCoreWindowHwnd; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CurrentCoreWindowHwnd = XamlExplorerHost::s_GetCurrentCoreWindowHwnd();
  SetWindowPos(CurrentCoreWindowHwnd, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  result = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**(_QWORD **)(a1 + 40) + 24LL))(
             *(_QWORD *)(a1 + 40),
             CurrentCoreWindowHwnd,
             0LL);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18011E025LL);
  }
  return result;
}
