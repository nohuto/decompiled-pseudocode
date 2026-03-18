/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x140247084
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x14023ACA4 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1406F86FC (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14070C290 (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
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
