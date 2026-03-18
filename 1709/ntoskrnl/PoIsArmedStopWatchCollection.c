/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x14024C3B0
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14070C424 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14070C4A0 (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
