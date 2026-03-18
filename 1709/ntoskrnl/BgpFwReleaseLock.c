/*
 * XREFs of BgpFwReleaseLock @ 0x14013B974
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14013B8F0 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14013E750 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140206410 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140206534 (KiDisplayBlueScreen.c)
 *     BgLibraryEnable @ 0x140290490 (BgLibraryEnable.c)
 *     BgDisplayProgressIndicator @ 0x1407CE034 (BgDisplayProgressIndicator.c)
 *     BgpConsoleInitialize @ 0x1407CE070 (BgpConsoleInitialize.c)
 *     BgDisplayBackgroundUpdate @ 0x1407CE2B8 (BgDisplayBackgroundUpdate.c)
 *     BgConsoleGetInterface @ 0x1407CE5F0 (BgConsoleGetInterface.c)
 *     BgReleaseSpinLock @ 0x1407CE630 (BgReleaseSpinLock.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407CFBD0 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     BgConsoleDestroyInterface @ 0x1407D0938 (BgConsoleDestroyInterface.c)
 *     BgLibraryDisable @ 0x1407D0994 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 *     BgDisplayString @ 0x1407D2DDC (BgDisplayString.c)
 *     BgFreeContext @ 0x1407D2E4C (BgFreeContext.c)
 *     BgGetContext @ 0x1407D2E90 (BgGetContext.c)
 *     BgLibraryDestroy @ 0x1407D2EDC (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1407D2F48 (BgMarkHiberPhase.c)
 *     BgpConsoleClearScreen @ 0x1407D2F80 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1407D3050 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1407D33F0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1407D3560 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1407D35D0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1407D3860 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1407D3910 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407D3CF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int8 v0; // bl

  if ( (dword_14035A1B0 & 0xC00) != 0xC00 )
  {
    v0 = byte_14038D044;
    KxReleaseSpinLock(&qword_1403A0CD0);
    if ( v0 <= 2u )
      __writecr8(v0);
  }
}
