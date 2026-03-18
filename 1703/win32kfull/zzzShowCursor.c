/*
 * XREFs of zzzShowCursor @ 0x1C0115E10
 * Callers:
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rbx
  bool v3; // zf
  unsigned int v4; // ebx

  v1 = (_DWORD *)gdwDeferWinEvent;
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  ++gdwDeferWinEvent;
  if ( a1 )
  {
    ++*(_DWORD *)(gptiCurrent + 672LL);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL);
    if ( v2 != gpqCursor )
      goto LABEL_6;
    v3 = *(_DWORD *)(v2 + 336) == 0;
  }
  else
  {
    --*(_DWORD *)(gptiCurrent + 672LL);
    --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 336LL);
    if ( v2 != gpqCursor )
      goto LABEL_6;
    v3 = *(_DWORD *)(v2 + 336) == -1;
  }
  if ( v3 )
  {
    zzzUpdateCursorImage();
    v1 = (_DWORD *)gdwDeferWinEvent;
  }
LABEL_6:
  v4 = *(_DWORD *)(v2 + 336);
  v3 = (*v1)-- == 1;
  if ( v3 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return v4;
}
