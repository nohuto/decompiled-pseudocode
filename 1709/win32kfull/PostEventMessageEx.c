/*
 * XREFs of PostEventMessageEx @ 0x1C009F99C
 * Callers:
 *     NtUserSendEventMessage @ 0x1C000AD90 (NtUserSendEventMessage.c)
 *     NtUserShowWindowAsync @ 0x1C000AE80 (NtUserShowWindowAsync.c)
 *     xxxSwitchToThisWindow @ 0x1C000BE60 (xxxSwitchToThisWindow.c)
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00496A0 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0084EB0 (_GetWindowTrackInfoAsync.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0085944 (xxxApplyGlobalInputSettings.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0104150 (EditionHandleAndPostKeyEvent.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C01046C8 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0115B10 (NtUserDisableThreadIme.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0118D60 (NtUserBroadcastThemeChangeEvent.c)
 *     EditionPostEventMessage @ 0x1C011B0B0 (EditionPostEventMessage.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0120B70 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     QueueShutdownData @ 0x1C0141F74 (QueueShutdownData.c)
 *     PostEventMessage @ 0x1C01C0B9C (PostEventMessage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01D9940 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C01DCD08 (BeginSetWindowArrangement.c)
 *     EditionPostAccessibility @ 0x1C01DFBC0 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C01DFC20 (EditionPostRitSound.c)
 *     xxxSetWindowShowState @ 0x1C020C98C (xxxSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C009FB1C (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     ??0?$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00A07E0 (--0-$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C00A082C (--1-$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C01164A0 (ProcessSuspendedEventMessage.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC058 (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  struct tagQMSG *v13; // rbp
  __int64 v14; // rax
  struct tagTHREADINFO *v15; // rcx
  _BYTE v17[16]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusive<DLT_QUEUE>::CLockExclusive<DLT_QUEUE>(v17);
  v12 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 116) & 1) == 0
    && ((vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 296) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7)) )
  {
    v13 = AllocQEntryEx((struct tagMLIST *)(a2 + 24), 0LL, 0);
    if ( v13 )
    {
      v14 = LogicalQmsgCursorPos(a4, a2);
      StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v14, 0LL, 0LL);
      *((_QWORD *)v13 + 13) = a1;
      if ( a3 == 20 )
        ReferenceMsgData(a7, 3LL, v13);
      if ( a1 )
      {
        v15 = a1;
      }
      else
      {
        SetWakeBit(*(_QWORD *)(a2 + 88), 8256LL);
        v15 = *(struct tagTHREADINFO **)(a2 + 96);
      }
      SetWakeBit(v15, 8256LL);
      v12 = 1;
    }
  }
  CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(v17);
  return v12;
}
