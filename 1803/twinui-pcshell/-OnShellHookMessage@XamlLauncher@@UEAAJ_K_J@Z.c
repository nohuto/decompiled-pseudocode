/*
 * XREFs of ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180077E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800782B0 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800782F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802267E4 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellHookMessage(XamlLauncher *this)
{
  XamlLauncherState *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsStartVisible; // al
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (XamlLauncherState *)*((_QWORD *)this + 26);
  if ( !v2 )
    return 2147943568LL;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 96LL);
  if ( (char *)v3 == (char *)XamlLauncherState::IsStartVisible )
    IsStartVisible = XamlLauncherState::IsStartVisible(v2);
  else
    IsStartVisible = v3();
  if ( !IsStartVisible )
  {
    if ( *((_BYTE *)this + 193) )
    {
      *((_BYTE *)this + 193) = 0;
      XamlLauncher::HandleInitialHShellEvent((XamlLauncher *)((char *)this - 40));
    }
    else
    {
      XamlLauncher::ShowStartView((char *)this - 16, 1LL);
    }
    return 0LL;
  }
  v6 = XamlLauncher::Dismiss((char *)this - 16, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12C,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
