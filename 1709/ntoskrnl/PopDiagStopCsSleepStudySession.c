/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x1407016F4
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x140705B90 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x140705D30 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140705FE0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x1406F76AC (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x140727AC0 (PdcTaskClientRequest.c)
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
  byte_140389C78 = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    PopEvaluateAggressiveStandbyActions(1);
    PopAcquirePolicyLock();
    if ( qword_14038D520 )
      qword_14038D520((unsigned int)PopAggressiveStandbyAppliedActions);
    PopReleasePolicyLock();
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
