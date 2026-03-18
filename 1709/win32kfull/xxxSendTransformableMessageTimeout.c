/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C00A8A60
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C000BD0C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxSendSizeMessage @ 0x1C0049940 (xxxSendSizeMessage.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxActivateApp @ 0x1C00544F0 (xxxActivateApp.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C0083C74 (xxxEnableScrollBar.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A60E0 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxChangeClipboardChain @ 0x1C00C52C0 (xxxChangeClipboardChain.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00C5834 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSendMessageEx @ 0x1C00EE970 (xxxSendMessageEx.c)
 *     xxxTranslateAccelerator @ 0x1C00FC58C (xxxTranslateAccelerator.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C01133B8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxHandleWindowPosChanged @ 0x1C0113B28 (xxxHandleWindowPosChanged.c)
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxImmActivateLayout @ 0x1C0125C04 (xxxImmActivateLayout.c)
 *     xxxGetComboBoxInfo @ 0x1C013743C (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C013E248 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxSendMessageFF @ 0x1C0142E80 (xxxSendMessageFF.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01C1664 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01C1874 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01C22E8 (xxxImmUnloadLayout.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     EditionSendIMENotification @ 0x1C01D2D60 (EditionSendIMENotification.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D54AC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D6548 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01F3C94 (xxxRequestOutOfFullScreenMode.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     xxxGetListBoxInfo @ 0x1C0213174 (xxxGetListBoxInfo.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxSendHelpMessage @ 0x1C021A3C4 (xxxSendHelpMessage.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     ValidateDDEConvPair @ 0x1C01F192C (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01F1ED8 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        __int64 *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5,
        int a6,
        __int64 *BugCheckParameter3,
        unsigned int a8,
        int a9)
{
  unsigned int v11; // edi
  __int64 *v13; // r14
  _DWORD *v14; // rsi
  union tagBROADCASTMSG *v15; // rcx
  unsigned int v16; // r9d
  __int64 result; // rax
  ULONG_PTR v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r12d
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // r13
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+58h] [rbp-100h] BYREF
  int v35; // [rsp+60h] [rbp-F8h]
  unsigned __int64 HighLimit; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-D0h]
  __int64 v40; // [rsp+90h] [rbp-C8h]
  __int64 v41; // [rsp+98h] [rbp-C0h]
  _DWORD v42[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 *v43; // [rsp+A8h] [rbp-B0h]
  _QWORD v44[3]; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp-88h]
  __int64 v46; // [rsp+D8h] [rbp-80h]
  __int64 v47; // [rsp+E0h] [rbp-78h]
  char v48; // [rsp+E8h] [rbp-70h] BYREF
  _DWORD v49[10]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 *v50; // [rsp+118h] [rbp-40h]
  int v51; // [rsp+160h] [rbp+8h]
  unsigned int BugCheckParameter3a; // [rsp+190h] [rbp+38h]

  v11 = a2;
  v13 = BugCheckParameter3;
  v14 = 0LL;
  if ( BugCheckParameter3 )
    *BugCheckParameter3 = 0LL;
  if ( BugCheckParameter2 != (__int64 *)-1LL )
  {
    v18 = 0LL;
    LOWORD(v19) = 0;
    if ( BugCheckParameter2 )
      v19 = *BugCheckParameter2;
    v35 = (unsigned __int16)v19;
    if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL)
      || (v18 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v19 * LODWORD(gSharedInfo[2]),
          v20 = 3LL * (unsigned __int16)v19,
          v21 = gpKernelHandleTable,
          *(__int64 **)(gpKernelHandleTable + 24LL * (unsigned __int16)v19) != BugCheckParameter2)
      || *(_BYTE *)(v18 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)BugCheckParameter2, v18, 1uLL);
    }
    if ( v11 - 992 > 8 )
    {
      BugCheckParameter3a = a8;
      v51 = a6;
      v22 = a5;
    }
    else
    {
      if ( !(unsigned int)xxxDDETrackSendHook((struct tagWND *)BugCheckParameter2) )
        return 0LL;
      if ( v11 == 992 && (v51 = guDdeSendTimeout) != 0 )
      {
        v22 = a5 | 2;
        v23 = (__int64 *)&v48;
        if ( BugCheckParameter3 )
          v23 = BugCheckParameter3;
        v13 = v23;
      }
      else
      {
        v51 = a6;
        v22 = a5;
      }
      v24 = ValidateDDEConvPair(a3, BugCheckParameter2);
      v21 = a8;
      if ( v24 )
        v21 = 1LL;
      BugCheckParameter3a = v21;
    }
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, a3, v18) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    v27 = (_QWORD *)BugCheckParameter2[2];
    v33 = v27;
    if ( (_QWORD *)v25 == v27 )
    {
      if ( BugCheckParameter2 != *(__int64 **)(v25 + 1424)
        && ((*(_BYTE *)(v25 + 656) | *(_BYTE *)(**(_QWORD **)(v25 + 440) + 16LL)) & 0x20) != 0 )
      {
        v40 = *BugCheckParameter2;
        v39 = v11;
        v38[1] = a3;
        v38[0] = a4;
        v41 = 0LL;
        if ( (v11 - 577 <= 3 || v11 - 581 <= 0x12 && v11 != 589) && v11 != 595 || v11 == 528 && (_WORD)a3 == 582 )
        {
          xxxPointerCallHook(0, 0, (__int64)v38, 4u, 0);
        }
        else
        {
          v29 = *(_QWORD *)(gptiCurrent + 920LL);
          if ( (v29 || (v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 72LL)) != 0)
            && (*(_DWORD *)(v29 + 64) & 0x80u) != 0 )
          {
            LODWORD(v29) = PhkNextValid(v29);
          }
          xxxCallHook2(v29, 0, 0, (unsigned int)v38, 0LL);
        }
      }
      if ( (*((_BYTE *)BugCheckParameter2 + 58) & 4) != 0 )
      {
        IoGetStackLimits(&LowLimit, &HighLimit);
        if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
          return 0LL;
        v30 = BugCheckParameter2[20];
        if ( v30 >= 7 )
          return 0LL;
        result = ((__int64 (__fastcall *)(__int64 *, _QWORD, unsigned __int64, struct _LARGE_STRING *))*(&gServerHandlers + v30))(
                   BugCheckParameter2,
                   v11,
                   a3,
                   a4);
        if ( !v13 )
          return result;
        *v13 = result;
      }
      else
      {
        xxxSendMessageToClient((struct tagWND *)BugCheckParameter2, v11, a3, (__int64)a4, 0LL, 0, &v34);
        if ( BugCheckParameter2 == *(__int64 **)(v25 + 1424)
          || ((*(_DWORD *)(v25 + 656) | *(_DWORD *)(**(_QWORD **)(v25 + 440) + 16LL)) & 0x2000) == 0 )
        {
          v31 = v34;
        }
        else
        {
          v46 = *BugCheckParameter2;
          v45 = v11;
          v44[2] = a3;
          v44[1] = a4;
          v31 = v34;
          v44[0] = v34;
          v47 = 0LL;
          xxxCallHook(0, 0, (__int64)v44, 0xCu);
        }
        if ( v11 == 576 )
        {
          FreeTouchInputInfo(a4, 1LL);
        }
        else if ( v11 == 281 )
        {
          FreeGestureInfo(a4, 1LL);
        }
        if ( !v13 )
          return v31;
        *v13 = v31;
      }
      return 1LL;
    }
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)BugCheckParameter2
                   + gSharedInfo[1]
                   + 25LL) & 1) != 0 )
      return xxxDefWindowProc((struct tagWND *)BugCheckParameter2, v11, a3, (__int64)a4);
    if ( v13 )
    {
      if ( (v22 & 2) != 0 )
      {
        v28 = v27[53];
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(v28 + 12) > gdwHungAppTimeout
          && (*(_WORD *)(v28 + 10) & 0x1C07) == 0
          && !(unsigned int)PsGetThreadFreezeCount(*v27)
          && (*(_DWORD *)(v33[50] + 12LL) & 0x40) == 0 )
        {
          return 0LL;
        }
      }
      v49[0] = 2;
      v49[8] = v22;
      v49[9] = v51;
      v50 = v13;
      v14 = v49;
    }
    return xxxInterSendMsgEx(
             (__int64)BugCheckParameter2,
             v11,
             a3,
             a4,
             1,
             BugCheckParameter2[2],
             v14,
             BugCheckParameter3a,
             a9);
  }
  v15 = 0LL;
  v16 = 0;
  if ( BugCheckParameter3 )
  {
    v16 = 4;
    v42[0] = a5;
    v42[1] = a6;
    v43 = BugCheckParameter3;
    v15 = (union tagBROADCASTMSG *)v42;
  }
  return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v16, v15, a8, 0);
}
