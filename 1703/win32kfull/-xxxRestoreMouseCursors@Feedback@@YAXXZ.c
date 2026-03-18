/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01B70F8
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00C6160 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 *     SetPointerMetaVisibility @ 0x1C00F0E8C (SetPointerMetaVisibility.c)
 */

void __fastcall Feedback::xxxRestoreMouseCursors(Feedback *this)
{
  __int64 v1; // rbx

  EtwTraceContactVisualizationInfo(3LL);
  Feedback::gfUsingPenCursors = 0;
  v1 = 0LL;
  Feedback::gfUsingTouchCursors = 0;
  if ( grpWinStaList )
    v1 = grpWinStaList + 168LL;
  if ( *(_QWORD *)(v1 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v1, 0);
    xxxUpdateSystemCursorFromRegistry(v1, 2u);
    xxxUpdateSystemCursorFromRegistry(v1, 0xBu);
    xxxUpdateSystemCursorFromRegistry(v1, 0xCu);
  }
  if ( gCursorSuppressionState != 1 )
    SetPointerMetaVisibility(1u);
}
