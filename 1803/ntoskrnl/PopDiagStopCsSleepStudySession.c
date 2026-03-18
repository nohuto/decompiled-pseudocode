/*
 * XREFs of PopDiagStopCsSleepStudySession @ 0x140765B10
 * Callers:
 *     PopDisplayBurstSuppressWorker @ 0x140769A40 (PopDisplayBurstSuppressWorker.c)
 *     PopForceCompleteCsSleepStudySessionWorker @ 0x140769BE0 (PopForceCompleteCsSleepStudySessionWorker.c)
 *     PopLidClosedSleepStudyWorker @ 0x140769EA0 (PopLidClosedSleepStudyWorker.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopEvaluateAggressiveStandbyActions @ 0x14075EEA8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 *     PdcTaskClientRequest @ 0x14078B714 (PdcTaskClientRequest.c)
 */

LONG __fastcall PopDiagStopCsSleepStudySession(char a1, int a2, int a3)
{
  __int64 v6; // rdx
  char CsSleepStudySession; // al
  unsigned int v8; // eax

  KeWaitForSingleObject(&PopSleepStudySessionLock, Executive, 0, 0, 0LL);
  if ( !PopSleepStudyTaskClientReferenceTaken )
  {
    LOBYTE(v6) = 1;
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, v6);
    PopSleepStudyTaskClientReferenceTaken = 1;
    KiSetTimerEx((__int64)&PopSleepStudyTaskClientTimer, -50000000LL, 0, 0, (__int64)&PopSleepStudyTaskClientTimerDpc);
  }
  PopPdcLastCsExitReason = a2;
  PopEvaluateAggressiveStandbyActions(0);
  byte_1403CDA78 = 1;
  CsSleepStudySession = PopDiagNextCsSleepStudySession(&NullGuid);
  if ( a1 && !CsSleepStudySession && !PopConsoleDisplayState )
  {
    PopPdcLastCsEnterReason = a3;
    v8 = PopEvaluateAggressiveStandbyActions(1);
    if ( qword_1403D1470 )
      ((void (__fastcall *)(_QWORD))qword_1403D1470)(v8);
    PopDiagNextCsSleepStudySession(&GUID_SPM_LOW_POWER_CS);
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
