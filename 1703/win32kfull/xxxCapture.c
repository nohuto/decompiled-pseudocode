/*
 * XREFs of xxxCapture @ 0x1C003C570
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C003C4E8 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C0207828 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     LockCaptureWindow @ 0x1C003C7A4 (LockCaptureWindow.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCapture(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  char v19; // [rsp+B8h] [rbp+20h] BYREF

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
      if ( a1[48] == *(_QWORD *)(result + 384) )
        return result;
    }
  }
  v7 = 0LL;
  if ( a3 == 6 )
  {
    v17 = gspwndInternalCapture;
    v18 = a2;
    result = HMAssignmentLock(&v17);
    v4 = 2;
  }
  if ( !v4 )
  {
    result = gspwndInternalCapture;
    if ( gspwndInternalCapture )
    {
      if ( a1 == *(_QWORD **)(gspwndInternalCapture + 16LL) )
        result = HMAssignmentUnlock(gspwndInternalCapture);
    }
  }
  v8 = a1[48];
  if ( v8 )
  {
    v9 = a1[51];
    if ( (*(_DWORD *)(v9 + 48) & 0xC0) != 0 && *(_DWORD *)(v9 + 192) == 1 )
    {
      if ( (v16 = *(_QWORD *)(v9 + 184), v16 == a2) && v4 != 2
        || v16 == *(_QWORD *)(v8 + 72) && *(_DWORD *)(v8 + 116) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v9 + 48),
          *(_QWORD *)(v9 + 184),
          *(unsigned int *)(v9 + 192),
          192LL);
        if ( !v19 )
        {
          --gdwInAtomicOperation;
          UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v19);
        }
      }
    }
    result = LockCaptureWindow(v8, a2);
    v7 = result;
    *(_DWORD *)(v8 + 116) = v4;
  }
  v10 = (_DWORD *)gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v7 )
      goto LABEL_29;
    result = zzzSetFMouseMoved();
    v10 = (_DWORD *)gdwDeferWinEvent;
  }
  v11 = 3;
  if ( v7 )
  {
    v12 = 3;
    if ( !*v10 )
      v12 = 1;
    result = xxxWindowEvent(9, v7, 0, 0, v12);
    v10 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( a2 )
  {
    if ( !*v10 )
      v11 = 1;
    result = xxxWindowEvent(8, a2, 0, 0, v11);
    v10 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( v7 && (*(_BYTE *)(v7 + 61) & 2) != 0 && *(__int16 *)(v7 + 82) >= 0 )
  {
    if ( a1[66] && a2 )
      *(_DWORD *)(v8 + 340) |= 0x100000u;
    v17 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v17;
    ++*(_DWORD *)(v7 + 8);
    v18 = v7;
    v13 = (*v10)-- == 1;
    if ( v13 )
    {
      if ( gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
    }
    xxxSendMessageCallback((struct tagWND *)v7, 0x215u, 0LL, 0LL, 0, 0, 1);
    ThreadUnlock1(v15, v14);
    result = a1[48];
    *(_DWORD *)(result + 340) &= ~0x100000u;
    return result;
  }
LABEL_29:
  v13 = (*v10)-- == 1;
  if ( v13 && gpPendingNotifies )
    return xxxFlushDeferredWindowEvents();
  return result;
}
