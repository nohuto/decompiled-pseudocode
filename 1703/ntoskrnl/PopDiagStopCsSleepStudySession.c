/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x1406CC424
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x1406CE680 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x1406CE820 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x1406CEAD0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406C6F18 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x1406F0020 (PdcTaskClientRequest.c)
 */

LONG __fastcall PopDiagStopCsSleepStudySession(char a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char CsSleepStudySession; // al

  KeWaitForSingleObject(&PopSleepStudySessionLock, Executive, 0, 0, 0LL);
  if ( !PopSleepStudyTaskClientReferenceTaken )
  {
    LOBYTE(v6) = 1;
    PdcTaskClientRequest(v7, v6);
    PopSleepStudyTaskClientReferenceTaken = 1;
    KiSetTimerEx((__int64)&PopSleepStudyTaskClientTimer, -50000000LL, 0, 0, (__int64)&PopSleepStudyTaskClientTimerDpc);
  }
  PopPdcLastCsExitReason = a2;
  PopEvaluateAggressiveStandbyActions(0);
  byte_14036E1F8 = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    PopEvaluateAggressiveStandbyActions(1);
    PopAcquirePolicyLock();
    if ( qword_14036E730 )
      qword_14036E730((unsigned int)PopAggressiveStandbyAppliedActions);
    PopReleasePolicyLock();
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
