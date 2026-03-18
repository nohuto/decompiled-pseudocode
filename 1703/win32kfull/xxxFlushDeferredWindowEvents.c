/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00631F4
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     NtUserSetImeOwnerWindow @ 0x1C001E610 (NtUserSetImeOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00B6550 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     EditionEndDeferWinEventNotify @ 0x1C00FC900 (EditionEndDeferWinEventNotify.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     zzzShowCursor @ 0x1C0115E10 (zzzShowCursor.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 */

__int64 xxxFlushDeferredWindowEvents()
{
  __int64 result; // rax
  int v1; // ebx
  struct tagNOTIFY **i; // rcx
  int v3; // edx

  result = (__int64)PsGetCurrentThreadId();
  v1 = result;
LABEL_2:
  for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
  {
    v3 = *((_DWORD *)i + 12);
    if ( (v3 & 2) != 0 && *((_DWORD *)i + 10) == v1 )
    {
      *((_DWORD *)i + 12) = v3 & 0xFFFFFFFD;
      result = xxxProcessNotifyWinEvent((__int64)i);
      goto LABEL_2;
    }
  }
  return result;
}
