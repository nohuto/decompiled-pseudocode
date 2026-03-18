/*
 * XREFs of ?xxxSwitchCursors@@YAXH@Z @ 0x1C01BC4E0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00492E4 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C0046DE0 (GreHidePointer.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01BC380 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

void __fastcall xxxSwitchCursors(int a1)
{
  Feedback *v1; // rcx

  Feedback::gfUsingPenCursors = a1;
  if ( a1 )
  {
    Feedback::gfUsingTouchCursors = 0;
    EtwTraceContactVisualizationInfo(1LL);
    if ( (*(_DWORD *)UPDWORDPointer(8222LL) & 0x20) == 0 || Feedback::gfForceHidePenCursor )
    {
      TransitionCursorSuppressionState(3, 0);
    }
    else
    {
      GreHidePointer(1);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v1);
    }
  }
  else
  {
    Feedback::gfUsingTouchCursors = 1;
    EtwTraceContactVisualizationInfo(2LL);
    GreHidePointer(1);
  }
}
