/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x1404E79C8
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405F25F8 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14058D024 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x14058D098 (PopStatsMarkPowerRequestActive.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 */

void __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    if ( !*(_QWORD *)(a1 + 88) )
    {
      PopStatsMarkPowerRequestActive();
      *(_QWORD *)(a1 + 88) = PsChargeProcessWakeCounter(*(PVOID *)(a1 + 96));
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
    {
      PsReleaseProcessWakeCounter(v3);
      *(_QWORD *)(a1 + 88) = 0LL;
      PopStatsMarkPowerRequestInactive(a1);
    }
  }
}
