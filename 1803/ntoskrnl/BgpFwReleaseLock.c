/*
 * XREFs of BgpFwReleaseLock @ 0x140164E40
 * Callers:
 *     BgLibraryEnable @ 0x140156038 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140164DD4 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140164E84 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140243BF0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     BgFreeContext @ 0x14083B034 (BgFreeContext.c)
 *     BgGetContext @ 0x14083B1C4 (BgGetContext.c)
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14083B4E4 (BgConsoleGetInterface.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x14083C37C (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x14083C3FC (ResFwpPageOutBackground.c)
 *     BgLibraryDisable @ 0x14083CF88 (BgLibraryDisable.c)
 *     BgDisplayProgressIndicator @ 0x14083D014 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x14083D050 (BgConsoleDestroyInterface.c)
 *     AnFwpProgressIndicatorTimer @ 0x14083D3A0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x14083D8D4 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x14083D9A0 (BgpConsoleInitialize.c)
 *     BgReleaseSpinLock @ 0x14083DC94 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x14083F84C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14083F8BC (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x14083F928 (BgMarkHiberPhase.c)
 *     BgpConsoleClearScreen @ 0x14083F960 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x14083FA30 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14083FDE0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x14083FF50 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x14083FFC0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140840250 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140840300 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140840410 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int8 v0; // bl

  if ( (dword_14039D7F0 & 0xC00) != 0xC00 )
  {
    v0 = byte_1403D1310;
    KxReleaseSpinLock(&qword_1403E4B10);
    if ( v0 <= 2u )
      __writecr8(v0);
  }
}
