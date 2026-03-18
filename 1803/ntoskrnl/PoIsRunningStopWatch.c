/*
 * XREFs of PoIsRunningStopWatch @ 0x1400771C4
 * Callers:
 *     PopPausePowerRequestStats @ 0x140524FFC (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
