/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180189AE0
 * Callers:
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180189B10 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x18018A2E0 (-IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BBD0 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  unsigned __int8 result; // al
  unsigned int v2; // edx
  int v3; // ecx

  result = 0;
  if ( *((_BYTE *)this + 937) || *((_BYTE *)this + 938) )
    return 0;
  v2 = *((_DWORD *)this + 10);
  if ( v2 <= 0x15 )
  {
    v3 = 2127792;
    return _bittest(&v3, v2);
  }
  return result;
}
