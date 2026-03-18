/*
 * XREFs of _GetCursorInfo @ 0x1C00BD5C0
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C00BD430 (NtUserGetCursorInfo.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UsingPenCursors @ 0x1C00BD648 (UsingPenCursors.c)
 */

__int64 __fastcall GetCursorInfo(__int64 a1)
{
  char CurrentThreadDpiAwarenessContext; // al
  struct tagPOINT v3; // rax
  struct tagPOINT v4; // rcx
  struct tagPOINT v5; // r8
  struct tagPOINT v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v3 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v7 = 0LL;
  *(struct tagPOINT *)(a1 + 16) = v3;
  v8 = gCursorSuppressionState;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v8 > 0 && v8 < 7 && v8 != 4
    || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UsingPenCursors)(v4, 0LL, v5, v6)
    && Feedback::gfInRange == (_DWORD)v7 )
  {
    *(_DWORD *)(a1 + 4) = 2;
  }
  else if ( gpcurPhysCurrent != v7 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = gpcurLogCurrent;
  if ( gpcurLogCurrent )
    v7 = *gpcurLogCurrent;
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}
