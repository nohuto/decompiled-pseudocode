/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180152B9C
 * Callers:
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18014AB90 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18014D25C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18014D3F0 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x180152A2C (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x180152AE4 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_180244DCC;
  if ( !byte_180244DCC )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_180244DCC = result;
  }
  return result;
}
