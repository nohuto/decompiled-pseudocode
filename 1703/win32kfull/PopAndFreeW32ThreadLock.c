/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00CD890
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRemoveFullScreen @ 0x1C005D114 (xxxRemoveFullScreen.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 *     xxxChangeClipboardChain @ 0x1C00AE420 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C00AE668 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00AECF0 (NtUserGetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     xxxCancelTracking @ 0x1C00B6D04 (xxxCancelTracking.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxSendMessageBSM @ 0x1C00C9B50 (xxxSendMessageBSM.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSwitchDesktop @ 0x1C00E68B0 (NtUserSwitchDesktop.c)
 *     xxxDesktopsRecalc @ 0x1C00F19E4 (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C00FB7F0 (CleanupW32ThreadLocks.c)
 *     RemoteDisableScreen @ 0x1C00FE5BC (RemoteDisableScreen.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0107A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxWaitForInputIdle @ 0x1C010C2F4 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010C51C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010F60C (xxxImmUnloadThreadsLayout.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C013A844 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01B1AA0 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01BA8F0 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01BDB84 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01BE0D8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01BE4E0 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDeferredDesktopRotation @ 0x1C01E7BD0 (xxxDeferredDesktopRotation.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
