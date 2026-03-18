/*
 * XREFs of _PostMessage @ 0x1C00B3950
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0018FA0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C00A236C (_SetMagnificationInputTransform.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PostPointerEventMessage @ 0x1C00B0620 (PostPointerEventMessage.c)
 *     PostDeviceNotification @ 0x1C00B173C (PostDeviceNotification.c)
 *     TrackMouseEvent @ 0x1C00B1DC4 (TrackMouseEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     xxxImmProcessKey @ 0x1C00CA748 (xxxImmProcessKey.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DAC14 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010A3F8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     NtUserEndMenu @ 0x1C011B010 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C013B690 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C019C3C4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B4FEC (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01BD084 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01C46F0 (DestroyTask.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01CE864 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     _PostUIActions @ 0x1C01E34D0 (_PostUIActions.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01E40C0 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01E5EA4 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E5FCC (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     zzzPostInertiaMessage @ 0x1C020AA48 (zzzPostInertiaMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(__int64 a1, __int64 a2, __int64 a3, struct _LARGE_STRING *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, 1);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
