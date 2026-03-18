/*
 * XREFs of SetWakeBit @ 0x1C00A0D10
 * Callers:
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0046548 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ClearSendMessages @ 0x1C0060394 (ClearSendMessages.c)
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     _ReplyMessage @ 0x1C009E280 (_ReplyMessage.c)
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00C8CC4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IPostQuitMessage @ 0x1C00D7230 (IPostQuitMessage.c)
 *     _DelegateCapturePointers @ 0x1C01BF628 (_DelegateCapturePointers.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01C048C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C7090 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C020CF6C (IncPaintCount.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C0085D30 (SetForegroundPriority.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     UpdateRawMouseMode @ 0x1C00A0E54 (UpdateRawMouseMode.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

int __fastcall SetWakeBit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // di
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  LODWORD(v2) = *(_DWORD *)(a1 + 464);
  v3 = a2;
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 408) + 88LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 408));
    }
    if ( (v3 & 2) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 408);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 120);
        if ( v8 )
          v9 = *(_QWORD *)(v8 + 16);
        else
          v9 = *(_QWORD *)(v7 + 96);
        CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v9 + 400) + 280LL);
      }
      else
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 408) + 184LL) = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    }
    if ( (v3 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 408) + 96LL) = a1;
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) |= v3;
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 4LL) |= v3;
    if ( (v3 & 0x1C07) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 400);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 0x400000) != 0
        && ((v3 & 2) == 0 || *(_DWORD *)(gpsi + 4944LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4948LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v5 + 12) = v6 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1);
      }
    }
    v2 = *(_QWORD *)(a1 + 424);
    if ( (*(_WORD *)(v2 + 10) & v3) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 704), 2, 0);
  }
  return v2;
}
