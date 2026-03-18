/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1402820C0
 * Callers:
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14076F8F0 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14076F96C (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
