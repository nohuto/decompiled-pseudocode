/*
 * XREFs of xxxCapture @ 0x1C0046908
 * Callers:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0046880 (xxxSetCapture.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C0046C44 (LockCaptureWindow.c)
 *     xxxWindowFromPoint @ 0x1C0061E0C (xxxWindowFromPoint.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCapture(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // ebx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // [rsp+58h] [rbp-19h]
  __int128 v26; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v28[3]; // [rsp+90h] [rbp+1Fh] BYREF
  char v29; // [rsp+F0h] [rbp+7Fh] BYREF

  result = gspwndScreenCapture;
  v4 = a3;
  if ( gspwndScreenCapture )
  {
    if ( a3 != 5 )
    {
      if ( a2 )
        return result;
      if ( a3 )
        return result;
      result = *(_QWORD *)(gspwndScreenCapture + 16);
      if ( a1[51] == *(_QWORD *)(result + 408) )
        return result;
    }
  }
  v7 = 0LL;
  if ( a3 == 6 )
  {
    *(_QWORD *)&v25 = gspwndInternalCapture;
    *((_QWORD *)&v25 + 1) = a2;
    v26 = v25;
    HMAssignmentLock(&v26);
    v4 = 2;
  }
  if ( !v4 && gspwndInternalCapture && a1 == *(_QWORD **)(gspwndInternalCapture + 16LL) )
    HMAssignmentUnlock(gspwndInternalCapture);
  v8 = a1[51];
  if ( v8 )
  {
    v9 = a1[54];
    if ( (*(_DWORD *)(v9 + 48) & 0xC0) != 0 && *(_DWORD *)(v9 + 192) == 1 )
    {
      if ( (v10 = *(_QWORD *)(v9 + 184), v10 == a2) && v4 != 2
        || v10 == *(_QWORD *)(v8 + 104) && *(_DWORD *)(v8 + 148) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v29);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v9 + 48),
          *(_QWORD *)(v9 + 184),
          *(unsigned int *)(v9 + 192),
          192LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v29);
      }
    }
    v7 = LockCaptureWindow(v8, a2);
    *(_DWORD *)(v8 + 148) = v4;
  }
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v7 )
      return zzzEndDeferWinEventNotify();
    if ( (*(_QWORD *)(*(_QWORD *)(v7 + 16) + 624LL) & 0x1000000000000000LL) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v27[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v27;
      v27[1] = v7;
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v27, v12);
      v14 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
      v15 = xxxWindowFromPoint(v14);
      if ( v15 )
      {
        v18 = *(_QWORD *)(v15 + 16);
        v19 = *(_QWORD *)(v18 + 408);
        *(_DWORD *)(v19 + 380) |= 0x20u;
        SetSystemInputSource(v19 + 412);
        WakeSomeone(v19, v18, 512LL, 0LL);
      }
      v8 = a1[51];
      ThreadUnlock1(v17, v16);
    }
    GenerateMouseMove(0LL);
  }
  v20 = 3;
  if ( v7 )
  {
    v21 = 3;
    if ( !gdwDeferWinEvent )
      v21 = 1;
    xxxWindowEvent(9, v7, 0, 0, v21);
  }
  if ( a2 )
  {
    if ( !gdwDeferWinEvent )
      v20 = 1;
    xxxWindowEvent(8, a2, 0, 0, v20);
  }
  if ( !v7 || (*(_BYTE *)(v7 + 61) & 2) == 0 || *(__int16 *)(v7 + 82) < 0 )
    return zzzEndDeferWinEventNotify();
  if ( a1[73] )
  {
    if ( a2 )
      *(_DWORD *)(v8 + 380) |= 0x100000u;
  }
  v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v28[0] = *(_QWORD *)(v22 + 392);
  *(_QWORD *)(v22 + 392) = v28;
  v28[1] = v7;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
  zzzEndDeferWinEventNotify();
  xxxSendMessageCallback((struct tagWND *)v7, 0x215u, 0LL, 0LL, 0, 0, 1);
  ThreadUnlock1(v24, v23);
  result = a1[51];
  *(_DWORD *)(result + 380) &= ~0x100000u;
  return result;
}
