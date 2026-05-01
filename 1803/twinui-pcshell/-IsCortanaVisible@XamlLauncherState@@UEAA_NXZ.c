/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078980
 * Callers:
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180078950 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180078E30 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007ACF0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18022F8E0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 937) || *((_BYTE *)this + 938) )
    return 0;
  v2 = *((_DWORD *)this + 10);
  if ( v2 >= 4 && (v2 <= 5 || v2 > 6 && (v2 <= 10 || v2 > 11 && (v2 <= 14 || v2 == 21))) )
    return 1;
  return v1;
}
