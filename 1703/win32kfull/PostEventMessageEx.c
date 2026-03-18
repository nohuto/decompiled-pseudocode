/*
 * XREFs of PostEventMessageEx @ 0x1C0049DE8
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0005040 (NtUserSendEventMessage.c)
 *     NtUserShowWindowAsync @ 0x1C0006200 (NtUserShowWindowAsync.c)
 *     xxxSwitchToThisWindow @ 0x1C00069B0 (xxxSwitchToThisWindow.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     _GetWindowTrackInfoAsync @ 0x1C00B2F90 (_GetWindowTrackInfoAsync.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00B5774 (xxxApplyGlobalInputSettings.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00CB4B0 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F1C20 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F4BFC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 *     NtUserDisableThreadIme @ 0x1C010C180 (NtUserDisableThreadIme.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C010F140 (NtUserBroadcastThemeChangeEvent.c)
 *     EditionPostEventMessage @ 0x1C0111C30 (EditionPostEventMessage.c)
 *     NtUserRegisterBSDRWindow @ 0x1C01153A0 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     QueueShutdownData @ 0x1C013B038 (QueueShutdownData.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPostAccessibility @ 0x1C01D37E0 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C01D3840 (EditionPostRitSound.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01F1F30 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C01F5A08 (BeginSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C020B5C8 (xxxSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004D464 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C01072BC (ProcessSuspendedEventMessage.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C740C (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall PostEventMessageEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct tagQMSG *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 440) & 1) != 0 )
      return 0LL;
    vAdjustDelegatePriority((struct tagTHREADINFO *)a1);
    if ( (*(_DWORD *)(a1 + 1096) & 0x20) != 0 && !(unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7) )
      return 0LL;
  }
  v12 = AllocQEntryEx((struct tagMLIST *)a2, 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = LogicalQmsgCursorPos(a4, a2);
  StoreQMessage((_DWORD)v12, a4, a5, a6, a7, 0, 0, a3, 0LL, 0, a8, v13, 0LL, 0LL);
  *((_QWORD *)v12 + 13) = a1;
  if ( a3 == 20 )
    ReferenceMsgData(a7, 3LL, v12);
  if ( a1 )
  {
    v14 = a1;
  }
  else
  {
    SetWakeBit(*(_QWORD *)(a2 + 56), 8256LL);
    v14 = *(_QWORD *)(a2 + 64);
  }
  SetWakeBit(v14, 8256LL);
  return 1LL;
}
