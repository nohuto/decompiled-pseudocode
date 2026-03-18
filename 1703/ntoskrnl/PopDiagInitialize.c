/*
 * XREFs of PopDiagInitialize @ 0x140812630
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwSetInformation @ 0x1405892A0 (EtwSetInformation.c)
 *     PdcTaskClientRegister @ 0x1405B9024 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1405B9204 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x1405B9544 (PopDiagSleepStudyInitialize.c)
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
  TraceLoggingRegisterEx(&hProvider, (TLG_PENABLECALLBACK)PopDiagTraceControlCallback, &hProvider);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  PopTelemetryOsState = 0LL;
  qword_14034A5E8 = 0LL;
  qword_14034A5F8 = MEMORY[0xFFFFF78000000014];
  qword_14034A600 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_14034A62C = v1;
  qword_14034A608 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_14034A528 = 0LL;
  qword_14034A4F8 = 0LL;
  qword_14034A4F0 = (__int64)PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0, 1);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_14034A650 = (__int64)&qword_14034A648;
  qword_14034A648 = (__int64)&qword_14034A648;
  qword_14034A6B8 = (__int64)PopSleepStudyTaskClientTimerCallback;
  qword_14034A690 = (__int64)PopSleepStudyTaskClientTimerWorker;
  qword_14034A658 = 0LL;
  qword_14034A678 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_14034A6C0 = 0LL;
  qword_14034A6D8 = 0LL;
  qword_14034A6B0 = 0LL;
  qword_14034A698 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem = 0LL;
  PdcTaskClientRegister(v3, v2);
  return 0LL;
}
