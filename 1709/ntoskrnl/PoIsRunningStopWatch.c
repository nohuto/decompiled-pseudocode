/*
 * XREFs of PoIsRunningStopWatch @ 0x140128D9C
 * Callers:
 *     PopPausePowerRequestStats @ 0x14058D10C (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
