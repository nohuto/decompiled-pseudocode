/*
 * XREFs of PopDiagInitialize @ 0x140827B48
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     EtwSetInformation @ 0x1405ABE40 (EtwSetInformation.c)
 *     PdcTaskClientRegister @ 0x1405ACD68 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x1405AD454 (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx(&pCallbackContext, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &pCallbackContext);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  PopTelemetryOsState = 0LL;
  qword_140364E68 = 0LL;
  qword_140364E78 = MEMORY[0xFFFFF78000000014];
  qword_140364E80 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140364EAC = v1;
  qword_140364E88 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_140364D48 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0, 1);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_140364F30 = (__int64)&qword_140364F28;
  qword_140364F28 = (__int64)&qword_140364F28;
  qword_140364ED8 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_140364F38 = 0LL;
  qword_140364F58 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_140364EE0 = 0LL;
  qword_140364EF8 = 0LL;
  qword_140364ED0 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(v3, v2);
  return 0LL;
}
