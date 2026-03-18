/*
 * XREFs of SetPointerMetaVisibility @ 0x1C0046DAC
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01BC454 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C0046DE0 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
