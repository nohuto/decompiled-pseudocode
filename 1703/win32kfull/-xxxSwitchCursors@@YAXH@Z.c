/*
 * XREFs of ?xxxSwitchCursors@@YAXH@Z @ 0x1C01B7184
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C00F0EC0 (GreHidePointer.c)
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
