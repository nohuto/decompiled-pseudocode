/*
 * XREFs of HMValidateHandle @ 0x1C00485E8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0002540 (NtUserGetRawInputData.c)
 *     _MapDesktopObject @ 0x1C001AB90 (_MapDesktopObject.c)
 *     NtUserSetCursor @ 0x1C003E520 (NtUserSetCursor.c)
 *     NtUserDrawIconEx @ 0x1C0044B50 (NtUserDrawIconEx.c)
 *     NtUserDestroyCursor @ 0x1C0045210 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00457B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCursorIconData @ 0x1C00468C0 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C00483C0 (NtUserGetIconInfo.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C0054DB0 (fnHkINLPMSG.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     NtUserTranslateAccelerator @ 0x1C00B7FE0 (NtUserTranslateAccelerator.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserUnhookWinEvent @ 0x1C00D8EB0 (NtUserUnhookWinEvent.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00D9050 (NtUserUnhookWindowsHookEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00DB8B0 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetIconSize @ 0x1C00F47F0 (NtUserGetIconSize.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00F4FC0 (NtUserCopyAcceleratorTable.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00FA060 (NtUserEndDeferWindowPosEx.c)
 *     NtUserUpdateInputContext @ 0x1C00FAB40 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C0103D80 (NtUserAssociateInputContext.c)
 *     NtUserRegisterEdgy @ 0x1C0105C80 (NtUserRegisterEdgy.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0109DD0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C010B080 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C010DB30 (NtUserDestroyAcceleratorTable.c)
 *     NtUserDestroyInputContext @ 0x1C0135750 (NtUserDestroyInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0139110 (NtUserCreateLocalMemHandle.c)
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     NtUserDragObject @ 0x1C01D76A0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01D7A50 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D8C50 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D8D90 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01DA4C0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C01DAAF0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01DAC30 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01DCA10 (NtUserLinkDpiCursor.c)
 *     NtUserSetCalibrationData @ 0x1C01DEE80 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C01DF220 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C01DF390 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01DFD60 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01E1300 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E8664 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C01F8D30 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C01FEC90 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C01FF6BC (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0211DE4 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 *v7; // r14
  char v8; // al
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = (__int64 *)(gpKernelHandleTable
                   + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5));
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL, v5, gpsi, (unsigned __int16)a1))
      && (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v8 = *(_BYTE *)(v6 + 24);
      if ( v8 == a2 || a2 == -1 && v8 )
        v3 = *v7;
    }
  }
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v12 = 1400LL;
      break;
    case 2:
      v12 = 1401LL;
      break;
    case 3:
      v12 = 1402LL;
      break;
    case 4:
      v12 = 1405LL;
      break;
    case 5:
      v12 = 1404LL;
      break;
    case 8:
      v12 = 1403LL;
      break;
    default:
      v12 = 6LL;
      break;
  }
  UserSetLastError(v12);
  return 0LL;
}
