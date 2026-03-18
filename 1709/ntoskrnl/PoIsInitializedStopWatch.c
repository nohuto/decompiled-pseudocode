/*
 * XREFs of PoIsInitializedStopWatch @ 0x140128C80
 * Callers:
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
