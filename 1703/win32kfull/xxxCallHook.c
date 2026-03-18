/*
 * XREFs of xxxCallHook @ 0x1C0048E7C
 * Callers:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     xxxSetTrayWindow @ 0x1C0018E48 (xxxSetTrayWindow.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxGetInputEvent @ 0x1C004C770 (xxxGetInputEvent.c)
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8 (-xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxNotifyIMEStatus @ 0x1C00F9340 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C0118570 (EditionNotifyShellLanguageHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0132E90 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0139250 (xxxRedrawFrameAndHook.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7CE0 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     IsPointerInputHookCall @ 0x1C0048F34 (IsPointerInputHookCall.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 */

__int64 __fastcall xxxCallHook(int a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r11d
  int Valid; // eax

  if ( (unsigned int)IsPointerInputHookCall(a4, a3) )
    return xxxPointerCallHook(a1, a2, a3, v7, dword_1C02E78C0[v7 + 1]);
  Valid = PhkFirstValid(gptiCurrent, v7);
  return xxxCallHook2(Valid, a1, a2, a3, 0LL);
}
