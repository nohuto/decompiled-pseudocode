/*
 * XREFs of ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930
 * Callers:
 *     ?IsVisible@XamlLauncher@@UEAAJPEAH@Z @ 0x180077960 (-IsVisible@XamlLauncher@@UEAAJPEAH@Z.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180077E40 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180078AA0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007ACF0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18022F8E0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180230290 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsStartVisible(XamlLauncherState *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 10);
  v2 = 0;
  if ( v1 == 5 || v1 == 9 || v1 > 10 && (v1 <= 14 || (unsigned int)(v1 - 16) <= 1) )
    return 1;
  return v2;
}
