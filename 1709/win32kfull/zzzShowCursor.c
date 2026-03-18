/*
 * XREFs of zzzShowCursor @ 0x1C011E824
 * Callers:
 *     NtUserShowCursor @ 0x1C011E7F0 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 CurrentLogicalCursorThread; // rax
  __int64 v6; // rdi
  bool v7; // zf
  unsigned int v8; // ebx

  v4 = a1;
  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread(a1, a2, a3, a4);
  v6 = *(_QWORD *)(CurrentLogicalCursorThread + 408);
  ++gdwDeferWinEvent;
  if ( v4 )
  {
    ++*(_DWORD *)(CurrentLogicalCursorThread + 728);
    ++*(_DWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 408) + 376LL);
    if ( v6 != gpqCursor )
      goto LABEL_6;
    v7 = *(_DWORD *)(v6 + 376) == 0;
  }
  else
  {
    --*(_DWORD *)(CurrentLogicalCursorThread + 728);
    --*(_DWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 408) + 376LL);
    if ( v6 != gpqCursor )
      goto LABEL_6;
    v7 = *(_DWORD *)(v6 + 376) == -1;
  }
  if ( v7 )
    zzzUpdateCursorImage();
LABEL_6:
  v8 = *(_DWORD *)(v6 + 376);
  zzzEndDeferWinEventNotify();
  return v8;
}
