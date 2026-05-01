/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180186E7C
 * Callers:
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18017F8D0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18017FEA0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180182260 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x180186D0C (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x180186DC4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1802BAADD;
  if ( !byte_1802BAADD )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1802BAADD = result;
  }
  return result;
}
