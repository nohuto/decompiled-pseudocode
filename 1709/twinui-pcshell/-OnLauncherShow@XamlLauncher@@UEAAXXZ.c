/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180181960
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801821B0 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1);
  *((_DWORD *)this + 41) = 0;
}
