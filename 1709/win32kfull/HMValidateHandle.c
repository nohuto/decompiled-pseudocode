/*
 * XREFs of HMValidateHandle @ 0x1C0099110
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00073A0 (NtUserGetRawInputData.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0056130 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C00566B0 (NtUserUnhookWinEvent.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0097CA0 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetCursorIconData @ 0x1C0098670 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C0098EF0 (NtUserGetIconInfo.c)
 *     NtUserSetCursor @ 0x1C009A9A0 (NtUserSetCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C009ADE0 (NtUserDestroyCursor.c)
 *     NtUserDrawIconEx @ 0x1C009AE70 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C009CA30 (NtUserGetIconSize.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C009CCD0 (NtUserEndDeferWindowPosEx.c)
 *     _MapDesktopObject @ 0x1C009CD70 (_MapDesktopObject.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C00AA9D0 (fnHkINLPMSG.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C00FC480 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00FEEE0 (NtUserCopyAcceleratorTable.c)
 *     NtUserUpdateInputContext @ 0x1C0108970 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C010F460 (NtUserAssociateInputContext.c)
 *     NtUserRegisterEdgy @ 0x1C0110840 (NtUserRegisterEdgy.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0112FB0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0114D60 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0117290 (NtUserDestroyAcceleratorTable.c)
 *     NtUserDestroyInputContext @ 0x1C013A760 (NtUserDestroyInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C013F930 (NtUserCreateLocalMemHandle.c)
 *     _DuplicateCursor @ 0x1C01409BC (_DuplicateCursor.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     NtUserDragObject @ 0x1C01E3EB0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01E4270 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01E55A0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01E56E0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01E6910 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C01E6D40 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01E6E80 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01E8BF0 (NtUserLinkDpiCursor.c)
 *     NtUserSetCalibrationData @ 0x1C01EAFA0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C01EB330 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C01EB580 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01EBEE0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01ED470 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4684 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C01FA720 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0200620 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02010C0 (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  char v6; // di
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r14
  char v14; // al
  struct _KTHREAD *v15; // r14
  __int64 v16; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v20; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    PsGetThreadWin32Thread(CurrentThread);
  v10 = (unsigned __int16)a1;
  v11 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = gSharedInfo[1];
    v12 = v8 + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v13 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( WORD1(a1) == *(_WORD *)(v12 + 26)
      || (v11 = 0xFFFFLL, WORD1(a1) == 0xFFFF)
      || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL) )
    {
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
      {
        v14 = *(_BYTE *)(v12 + 24);
        if ( v14 == v6 || v6 == -1 && v14 )
          v5 = *(_QWORD *)(gpKernelHandleTable + 8 * v13);
      }
    }
  }
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v8, v10, v9) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v16 + 464) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v5 = 0LL;
  }
  else
  {
    v5 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v5 )
    return v5;
  switch ( v6 )
  {
    case 1:
      v20 = 1400LL;
      break;
    case 2:
      v20 = 1401LL;
      break;
    case 3:
      v20 = 1402LL;
      break;
    case 4:
      v20 = 1405LL;
      break;
    case 5:
      v20 = 1404LL;
      break;
    case 8:
      v20 = 1403LL;
      break;
    default:
      v20 = 6LL;
      break;
  }
  UserSetLastError(v20, v18);
  return 0LL;
}
