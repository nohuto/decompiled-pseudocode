/*
 * XREFs of LogicalQmsgCursorPos @ 0x1C004D238
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     StoreMessage @ 0x1C010724C (StoreMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01BD448 (zzzActiveCursorTracking.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01C0FF8 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

struct tagPOINT __fastcall LogicalQmsgCursorPos(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a1 + 368);
    return LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  if ( !a2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(0LL);
    return LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  v4 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 16);
  else
    v5 = *(_QWORD *)(a2 + 64);
  return LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(*(_QWORD *)(v5 + 376) + 280LL));
}
