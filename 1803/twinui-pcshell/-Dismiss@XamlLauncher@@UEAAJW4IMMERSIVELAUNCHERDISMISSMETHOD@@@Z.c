/*
 * XREFs of ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800782B0
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180077E40 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180078AA0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Dismiss(__int64 a1)
{
  __int64 v1; // rcx
  void (*v2)(void); // rax

  v1 = *(_QWORD *)(a1 + 224);
  if ( !v1 )
    return 2147943568LL;
  v2 = *(void (**)(void))(*(_QWORD *)v1 + 64LL);
  if ( (char *)v2 == (char *)XamlLauncherState::DismissStartAndCortana )
    XamlLauncherState::DismissStartAndCortana();
  else
    v2();
  return 0LL;
}
