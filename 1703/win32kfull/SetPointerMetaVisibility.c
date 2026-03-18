/*
 * XREFs of SetPointerMetaVisibility @ 0x1C00F0E8C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01B70F8 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(unsigned int a1)
{
  zzzEnableDwmPointerSupport(a1, 1);
  return GreHidePointer(a1 == 0);
}
