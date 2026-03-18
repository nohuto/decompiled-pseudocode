/*
 * XREFs of KeReadStateTimer @ 0x140242190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateTimer(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
