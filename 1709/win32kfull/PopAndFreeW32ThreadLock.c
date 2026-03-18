/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00CE7E0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0047A8C (xxxQueryInformationThread.c)
 *     xxxDesktopsRecalc @ 0x1C0049464 (xxxDesktopsRecalc.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxRemoveFullScreen @ 0x1C00602AC (xxxRemoveFullScreen.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 *     xxxChangeClipboardChain @ 0x1C00C52C0 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C00C5520 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00C59C0 (NtUserGetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 *     xxxCancelTracking @ 0x1C00CB4A0 (xxxCancelTracking.c)
 *     xxxSendMessageBSM @ 0x1C00CD550 (xxxSendMessageBSM.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     RemoteDisableScreen @ 0x1C00D68E0 (RemoteDisableScreen.c)
 *     NtUserSwitchDesktop @ 0x1C00F60D0 (NtUserSwitchDesktop.c)
 *     CleanupW32ThreadLocks @ 0x1C0107DC0 (CleanupW32ThreadLocks.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C011208C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxAddFullScreen @ 0x1C0113C60 (xxxAddFullScreen.c)
 *     xxxWaitForInputIdle @ 0x1C0115464 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0115708 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01414F0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01B4CFC (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01BEBD0 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01C1664 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01C1FF4 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F3BC0 (xxxDeferredDesktopRotation.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)a1;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
