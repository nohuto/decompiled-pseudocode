/*
 * XREFs of KeReadStateTimer @ 0x140204970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateTimer(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
