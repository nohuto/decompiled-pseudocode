/*
 * XREFs of LogicalQmsgCursorPos @ 0x1C00A072C
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     StoreMessage @ 0x1C0113BF0 (StoreMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C47FC (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall LogicalQmsgCursorPos(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a1 + 368);
  }
  else if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 120);
    if ( v4 )
      v5 = *(_QWORD *)(v4 + 16);
    else
      v5 = *(_QWORD *)(a2 + 96);
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v5 + 400) + 280LL);
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL);
  }
  return LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
}
