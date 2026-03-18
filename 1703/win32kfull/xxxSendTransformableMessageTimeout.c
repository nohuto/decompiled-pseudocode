/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C00530C0
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006A14 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxActivateApp @ 0x1C001C140 (xxxActivateApp.c)
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxSendSizeMessage @ 0x1C003C8A0 (xxxSendSizeMessage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxSendMessageEx @ 0x1C004E330 (xxxSendMessageEx.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0050980 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxChangeClipboardChain @ 0x1C00AE420 (xxxChangeClipboardChain.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00AE988 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxTranslateAccelerator @ 0x1C00B81C8 (xxxTranslateAccelerator.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00D7060 (xxxEnableScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     xxxWindowHitTest2 @ 0x1C00FD4B0 (xxxWindowHitTest2.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010A3F8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxImmActivateLayout @ 0x1C011BE9C (xxxImmActivateLayout.c)
 *     xxxGetComboBoxInfo @ 0x1C0131E2C (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C01374F4 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxSendMessageFF @ 0x1C0139E00 (xxxSendMessageFF.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B501C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01BDB84 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01BDD8C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01BE7C8 (xxxImmUnloadLayout.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D0E14 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D1F44 (xxxPerformTargetingWithinPwnd.c)
 *     EditionSendIMENotification @ 0x1C01D2A90 (EditionSendIMENotification.c)
 *     xxxSendTransformableMessage @ 0x1C01E6D28 (xxxSendTransformableMessage.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E7CA4 (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 *     xxxGetListBoxInfo @ 0x1C0211C54 (xxxGetListBoxInfo.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 *     xxxSendHelpMessage @ 0x1C02191CC (xxxSendHelpMessage.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     ValidateDDEConvPair @ 0x1C01E590C (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01E5EA4 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5,
        int a6,
        __int64 *BugCheckParameter3,
        int a8,
        int a9)
{
  unsigned __int64 v10; // r11
  __int64 *v13; // r15
  __int64 v14; // r14
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // ecx
  int v20; // r13d
  _QWORD *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 result; // rax
  __int64 v28; // rax
  _DWORD *v29; // r12
  int v30; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v35; // rax
  int ThreadFreezeCount; // eax
  union tagBROADCASTMSG *v37; // rcx
  unsigned int v38; // r9d
  __int64 *v39; // rax
  int v40; // eax
  __int64 v41; // [rsp+50h] [rbp-108h] BYREF
  int v42; // [rsp+58h] [rbp-100h]
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v46; // [rsp+80h] [rbp-D8h]
  __int64 v47; // [rsp+88h] [rbp-D0h]
  __int64 v48; // [rsp+90h] [rbp-C8h]
  _DWORD v49[2]; // [rsp+98h] [rbp-C0h] BYREF
  __int64 *v50; // [rsp+A0h] [rbp-B8h]
  _QWORD v51[3]; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+C8h] [rbp-90h]
  __int64 v53; // [rsp+D0h] [rbp-88h]
  __int64 v54; // [rsp+D8h] [rbp-80h]
  char v55; // [rsp+E0h] [rbp-78h] BYREF
  _DWORD v56[10]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 *v57; // [rsp+110h] [rbp-48h]
  int BugCheckParameter2; // [rsp+160h] [rbp+8h]
  int BugCheckParameter3a; // [rsp+190h] [rbp+38h]

  v10 = a3;
  v13 = BugCheckParameter3;
  v14 = 0LL;
  if ( BugCheckParameter3 )
    *BugCheckParameter3 = 0LL;
  if ( a1 == -1LL )
  {
    v37 = 0LL;
    v38 = 0;
    if ( BugCheckParameter3 )
    {
      v38 = 4;
      v49[0] = a5;
      v49[1] = a6;
      v50 = BugCheckParameter3;
      v37 = (union tagBROADCASTMSG *)v49;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v38, v37, a8, 0);
  }
  v15 = 0LL;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    LOWORD(v16) = 0;
  v17 = (unsigned __int16)v16;
  v42 = (unsigned __int16)v16;
  if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
    || (v18 = gSharedInfo[0],
        v15 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v16 * LODWORD(gSharedInfo[2]),
        *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v16) != a1)
    || *(_BYTE *)(v15 + 24) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, a1, v15, 1uLL);
  }
  if ( a2 - 992 <= 8 )
  {
    if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)a1) )
      return 0LL;
    if ( a2 == 992 && (BugCheckParameter2 = guDdeSendTimeout) != 0 )
    {
      v20 = a5 | 2;
      v39 = (__int64 *)&v55;
      if ( BugCheckParameter3 )
        v39 = BugCheckParameter3;
      v13 = v39;
    }
    else
    {
      BugCheckParameter2 = a6;
      v20 = a5;
    }
    v40 = ValidateDDEConvPair(a3, a1);
    v19 = a8;
    if ( v40 )
      v19 = 1;
    v18 = gSharedInfo[0];
    v10 = a3;
  }
  else
  {
    v19 = a8;
    BugCheckParameter2 = a6;
    v20 = a5;
  }
  BugCheckParameter3a = v19;
  v21 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)gptiCurrent != v21 )
  {
    v41 = 0LL;
    if ( (*(_BYTE *)(*(_DWORD *)(v18 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + *(_QWORD *)(v18 + 8) + 25LL) & 1) != 0 )
      return xxxDefWindowProc((struct tagWND *)a1, a2, v10, (__int64)a4);
    if ( v13 )
    {
      if ( (v20 & 2) != 0 )
      {
        v28 = v21[50];
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(v28 + 12) > gdwHungAppTimeout
          && (*(_WORD *)(v28 + 10) & 0x1C07) == 0 )
        {
          ThreadFreezeCount = PsGetThreadFreezeCount(*v21);
          if ( !ThreadFreezeCount && (*(_DWORD *)(v21[47] + 12LL) & 0x40) == 0 )
            return 0LL;
        }
      }
      v56[0] = 2;
      v56[8] = v20;
      v56[9] = BugCheckParameter2;
      v57 = v13;
      v29 = v56;
    }
    else
    {
      v29 = (_DWORD *)v41;
    }
    v30 = 18;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(v14);
      if ( *(_DWORD *)(v14 + 340) )
      {
        v30 = *(_DWORD *)(v14 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32);
        if ( CurrentProcessWin32Process )
          v30 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
    return xxxInterSendMsgEx(
             a1,
             a2,
             a3,
             (_DWORD)a4,
             gptiCurrent,
             v30,
             *(_QWORD *)(a1 + 16),
             (__int64)v29,
             BugCheckParameter3a,
             a9);
  }
  v22 = *(_QWORD *)(gptiCurrent + 416LL);
  v23 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)v22 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)v22 + 16LL)) & 0x20) != 0 )
  {
    v47 = *(_QWORD *)a1;
    v46 = a2;
    v45[1] = v10;
    v45[0] = a4;
    v48 = 0LL;
    if ( a2 - 577 <= 0x16 && (v24 = 8122367, _bittest(&v24, a2 - 577)) || a2 == 528 && (_WORD)v10 == 582 )
    {
      xxxPointerCallHook(0, 0, (__int64)v45, 4u, 0);
    }
    else
    {
      v25 = *(_QWORD *)(gptiCurrent + 832LL);
      if ( (v25 || (v25 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
        && (*(_DWORD *)(v25 + 64) & 0x80u) != 0 )
      {
        LODWORD(v25) = PhkNextValid(v25, v23, v17);
      }
      xxxCallHook2(v25, 0, 0, (unsigned int)v45, 0LL);
    }
    v10 = a3;
  }
  if ( (*(_BYTE *)(a1 + 58) & 4) == 0 )
  {
    xxxSendMessageToClient((struct tagWND *)a1, a2, v10, (__int64)a4, 0LL, 0, &v41);
    if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x2000) != 0 )
    {
      v53 = *(_QWORD *)a1;
      v52 = a2;
      v51[2] = a3;
      v51[1] = a4;
      v26 = v41;
      v51[0] = v41;
      v54 = 0LL;
      xxxCallHook(0, 0, (__int64)v51, 0xCu);
    }
    else
    {
      v26 = v41;
    }
    if ( a2 == 576 )
    {
      FreeTouchInputInfo(a4, 1LL);
    }
    else if ( a2 == 281 )
    {
      FreeGestureInfo(a4, 1LL);
    }
    if ( !v13 )
      return v26;
    *v13 = v26;
    return 1LL;
  }
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  v35 = *(_QWORD *)(a1 + 160);
  if ( v35 >= 7 )
    return 0LL;
  result = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, unsigned __int64, struct _LARGE_STRING *))*(&gServerHandlers + v35))(
             a1,
             a2,
             a3,
             a4);
  if ( v13 )
  {
    *v13 = result;
    return 1LL;
  }
  return result;
}
