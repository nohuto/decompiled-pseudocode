/*
 * XREFs of xxxCallHook @ 0x1C00A8930
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C0048A94 (xxxDesktopThreadWaiter.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSetTrayWindow @ 0x1C00537F8 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     xxxGetInputEvent @ 0x1C0086730 (xxxGetInputEvent.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxNotifyIMEStatus @ 0x1C01055E0 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     EditionNotifyShellLanguageHook @ 0x1C0121DA0 (EditionNotifyShellLanguageHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0135050 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C013FA10 (xxxRedrawFrameAndHook.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 */

__int64 __fastcall xxxCallHook(int a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // r10d
  int v5; // r11d
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = a2;
  v5 = a1;
  if ( a4 == 3 )
    goto LABEL_2;
  if ( a4 )
  {
    if ( a4 == -1 )
      goto LABEL_2;
    if ( a4 != 4 )
    {
      if ( a4 != 6 )
      {
        if ( a4 != 12 )
        {
          v6 = 0;
          LOWORD(v7) = 0;
          goto LABEL_5;
        }
        v6 = *(_DWORD *)(a3 + 24);
        goto LABEL_3;
      }
LABEL_2:
      v6 = *(_DWORD *)(a3 + 8);
LABEL_3:
      v7 = *(_QWORD *)(a3 + 16);
      goto LABEL_4;
    }
    v6 = *(_DWORD *)(a3 + 16);
    v7 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    v6 = *(_DWORD *)a3;
    LOWORD(v7) = 0;
  }
LABEL_4:
  if ( (unsigned int)(v6 - 577) > 3 )
  {
LABEL_5:
    if ( (unsigned int)(v6 - 581) > 0x12 || v6 == 589 )
      goto LABEL_6;
  }
  if ( v6 != 595 )
    return xxxPointerCallHook(v5, v4, a3, a4, dword_1C02E1F90[a4 + 1]);
LABEL_6:
  if ( v6 == 528 && (_WORD)v7 == 582 )
    return xxxPointerCallHook(v5, v4, a3, a4, dword_1C02E1F90[a4 + 1]);
  v8 = (int)(a4 + 1);
  v9 = *(_QWORD *)(gptiCurrent + 8 * v8 + 880);
  if ( (v9 || (v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8 * v8 + 32)) != 0)
    && (*(_DWORD *)(v9 + 64) & 0x80u) != 0 )
  {
    LODWORD(v9) = PhkNextValid(v9);
  }
  return xxxCallHook2(v9, v5, v4, a3, 0LL);
}
