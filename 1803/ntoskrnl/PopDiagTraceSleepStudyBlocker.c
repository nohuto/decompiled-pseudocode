/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x14027D824
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x14027217C (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14075FBC0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14076F75C (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( PopDiagSleepStudyHandleRegistered )
  {
    v3 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(v3, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 6u, a2);
  }
}
