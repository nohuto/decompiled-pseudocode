/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BC1B8
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C0046DE0 (GreHidePointer.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01BBFD8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01BC2FC (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1, const struct tagPOINT *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  Feedback *v9; // rcx

  v2 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v2 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2, 0);
    UserSessionSwitchLeaveCrit(v5, v4);
    Feedback::gfInRange = 1;
  }
  Feedback::MoveCursor((const struct tagPOINTERCURSORDATA *)((char *)a1 + 4), a2);
  if ( v2 )
  {
    EnterCrit(0LL, 1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8, 0);
    GreHidePointer(0);
    UserSessionSwitchLeaveCrit(v7, v6);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    {
      if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
        TransitionCursorSuppressionState(2, 0);
      Feedback::xxxReplaceArrowWithNullCursor(v9);
    }
    UserSessionSwitchLeaveCrit(v9, v8);
    Feedback::gfInRange = 0;
  }
}
