/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18014B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18014A9F0 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18014D25C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 28);
  if ( !v2 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2) )
  {
    v4 = XamlLauncher::Dismiss((__int64)this - 24);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x130,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else if ( *((_BYTE *)this + 205) )
  {
    *((_BYTE *)this + 205) = 0;
    XamlLauncher::HandleInitialHShellEvent((XamlLauncher *)((char *)this - 40));
  }
  else
  {
    XamlLauncher::ShowStartView((__int64)this - 24, 1u, 0);
  }
  return 0LL;
}
