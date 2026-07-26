/*
 * XREFs of NdisCancelTimer @ 0x1C001E730
 * Callers:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C5CB4 (ndisCancelInitModeTimeoutTimer.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
