/*
 * XREFs of SetWakeBit @ 0x1C004C3B0
 * Callers:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000718C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     ClearSendMessages @ 0x1C005D298 (ClearSendMessages.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _ReplyMessage @ 0x1C00F5F20 (_ReplyMessage.c)
 *     IPostQuitMessage @ 0x1C00FE028 (IPostQuitMessage.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C01198C8 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01BB90C (_DelegateCapturePointers.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     ?ReadyTimer@@YAHPEAUtagTIMER@@K@Z @ 0x1C01C4D30 (-ReadyTimer@@YAHPEAUtagTIMER@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C020BA3C (IncPaintCount.c)
 * Callees:
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetForegroundPriority @ 0x1C00B5AE0 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rax

  LODWORD(v2) = *(_DWORD *)(a1 + 440);
  v4 = a1;
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 56LL) = a1;
      v7 = *(_QWORD *)(a1 + 384);
      if ( v7 == gpqForeground )
      {
        v8 = *(_QWORD *)(v7 + 72);
        if ( v8 )
          v9 = *(_QWORD *)(v8 + 16);
        else
          v9 = *(_QWORD *)(v7 + 56);
        gForegroundQRawMouseRequested = (unsigned int)HasHidTable(v9)
                                     && (v8 ? (v14 = *(_QWORD *)(v8 + 16)) : (v14 = *(_QWORD *)(v7 + 56)),
                                         a1 = *(_QWORD *)(*(_QWORD *)(v14 + 376) + 776LL),
                                         (*(_DWORD *)(a1 + 100) & 1) != 0);
      }
    }
    if ( (a2 & 2) != 0 )
    {
      v10 = *(_QWORD *)(v4 + 384);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 88);
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 16);
        else
          v12 = *(_QWORD *)(v10 + 64);
        CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v12 + 376) + 280LL);
      }
      else
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
      }
      *(struct tagPOINT *)(*(_QWORD *)(v4 + 384) + 152LL) = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    }
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(v4 + 384) + 64LL) = v4;
    *(_WORD *)(*(_QWORD *)(v4 + 400) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(v4 + 400) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 376);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 5368LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 5372LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v5 + 12) = v6 & 0xFFBFFFFF;
        SetForegroundPriority(v4, 1LL);
      }
    }
    v2 = *(_QWORD *)(v4 + 400);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(v4 + 648), 2, 0);
  }
  return v2;
}
