/*
 * XREFs of NdisCancelTimer @ 0x1C001DE20
 * Callers:
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C2688 (ndisCancelInitModeTimeoutTimer.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
