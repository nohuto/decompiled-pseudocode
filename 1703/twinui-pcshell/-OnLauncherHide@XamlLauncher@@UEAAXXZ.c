/*
 * XREFs of ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x18014CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x18014D344 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x18014D500 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherHide(XamlLauncher *this)
{
  XamlLauncher::LinkUIATrees((XamlLauncher *)((char *)this - 72), 0);
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 0);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4));
}
