/*
 * XREFs of PopDiagInitialize @ 0x1408A5C04
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     EtwSetInformation @ 0x140603DA0 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     PdcTaskClientRegister @ 0x140624758 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x1406249EC (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl

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
  qword_1403A95C8 = 0LL;
  qword_1403A95D8 = MEMORY[0xFFFFF78000000014];
  qword_1403A95E0 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_1403A960C = v1;
  qword_1403A95E8 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PopForceSleepStudyLock = 0LL;
  qword_1403A9508 = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.Parameter = 0LL;
  PopForceCompleteCsSleepStudySessionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopForceCompleteCsSleepStudySessionWorker;
  PopForceCompleteCsSleepStudySessionWorkItem.List.Flink = 0LL;
  KiInitializeMutant((__int64)&PopSleepStudySessionLock, 0LL, 1);
  PopSleepStudyTaskClientTimer = 8LL;
  qword_1403A96D0 = (__int64)&qword_1403A96C8;
  qword_1403A96C8 = (__int64)&qword_1403A96C8;
  qword_1403A9698 = (__int64)PopSleepStudyTaskClientTimerCallback;
  PopSleepStudyTaskClientTimerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSleepStudyTaskClientTimerWorker;
  qword_1403A96D8 = 0LL;
  qword_1403A96F8 = 0LL;
  PopSleepStudyTaskClientTimerDpc = 275;
  qword_1403A96A0 = 0LL;
  qword_1403A96B8 = 0LL;
  qword_1403A9690 = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.Parameter = 0LL;
  PopSleepStudyTaskClientTimerWorkItem.List.Flink = 0LL;
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
