/*
 * XREFs of ?Dismiss@CJumpViewExperienceManager@@UEAAJXZ @ 0x18007B1C0
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180077D40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::Dismiss(CJumpViewExperienceManager *this)
{
  return CJumpViewExperienceManager::DismissImpl(this, 1);
}
