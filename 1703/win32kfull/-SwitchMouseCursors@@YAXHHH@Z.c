/*
 * XREFs of ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01B6F64
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01B6930 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SwitchMouseCursors(int a1, int a2, int a3)
{
  if ( a1 || a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFFCFF);
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, a1 != 0 ? 256 : 512);
  }
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
}
