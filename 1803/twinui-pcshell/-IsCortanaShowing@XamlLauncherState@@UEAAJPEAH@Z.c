/*
 * XREFs of ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180078E30
 * Callers:
 *     ?IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z @ 0x180077DB0 (-IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078980 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncherState::IsCortanaShowing(XamlLauncherState *this, int *a2)
{
  *a2 = (unsigned __int8)XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this - 8));
  return 0LL;
}
