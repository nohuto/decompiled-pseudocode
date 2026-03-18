/*
 * XREFs of BgpFwAcquireLock @ 0x140140710
 * Callers:
 *     BgLibraryEnable @ 0x14013DDEC (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140140650 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1401432D8 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1401FFF90 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 *     BgFreeContext @ 0x140755034 (BgFreeContext.c)
 *     BgMarkHiberPhase @ 0x140755380 (BgMarkHiberPhase.c)
 *     BgGetContext @ 0x14075540C (BgGetContext.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 *     ResFwpPageOutBackground @ 0x140755980 (ResFwpPageOutBackground.c)
 *     BgConsoleGetInterface @ 0x140755EA8 (BgConsoleGetInterface.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140755F30 (ResFwpPageInBackground.c)
 *     AnFwFadeCompletion @ 0x140756C7C (AnFwFadeCompletion.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 *     AnFwpFadeAnimationTimer @ 0x140757430 (AnFwpFadeAnimationTimer.c)
 *     BgDisplayProgressIndicator @ 0x14075777C (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407577C0 (AnFwpProgressIndicatorTimer.c)
 *     BgpConsoleInitialize @ 0x140758740 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x140758A34 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140758E08 (BgDisplayBackgroundUpdate.c)
 *     BgAcquireSpinLock @ 0x140758E80 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x140759CA0 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x140759D10 (BgLibraryDestroy.c)
 *     BgpConsoleClearScreen @ 0x140759D90 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140759E60 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14075A200 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x14075A370 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x14075A3E0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x14075A660 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x14075A710 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14075A770 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  if ( (dword_140341A30 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140384F90 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    KxAcquireSpinLock(&qword_140384F90);
    byte_14036EDF0 = CurrentIrql;
  }
}
