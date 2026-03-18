/*
 * XREFs of _PostMessage @ 0x1C00C91E0
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005410C (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     TrackMouseEvent @ 0x1C0084C04 (TrackMouseEvent.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6904 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PostPointerEventMessage @ 0x1C00C6E10 (PostPointerEventMessage.c)
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     xxxImmProcessKey @ 0x1C00CE9BC (xxxImmProcessKey.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00E2044 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C01133B8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 *     NtUserEndMenu @ 0x1C0124C10 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C0142310 (PowerOffGdi.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B8230 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01B9814 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01C0F9C (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01C6870 (DestroyTask.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01D2A18 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 *     _PostUIActions @ 0x1C01EF4E0 (_PostUIActions.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F00D8 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01F1ED8 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(__int64 a1, __int64 a2, unsigned __int64 a3, struct _LARGE_STRING *a4)
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
