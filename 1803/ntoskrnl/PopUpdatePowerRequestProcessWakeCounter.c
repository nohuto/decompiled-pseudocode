/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x140655158 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x140524F90 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x140525174 (PopStatsMarkPowerRequestInactive.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 */

void __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 88);
  if ( a2 )
  {
    if ( !v3 )
    {
      PopStatsMarkPowerRequestActive(a1);
      *(_QWORD *)(a1 + 88) = PsChargeProcessWakeCounter(*(PVOID *)(a1 + 96));
    }
  }
  else if ( v3 )
  {
    PsReleaseProcessWakeCounter(v3, a1);
    *(_QWORD *)(a1 + 88) = 0LL;
    PopStatsMarkPowerRequestInactive(a1);
  }
}
