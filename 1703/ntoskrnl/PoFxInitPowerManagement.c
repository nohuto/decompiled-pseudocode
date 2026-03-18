/*
 * XREFs of PoFxInitPowerManagement @ 0x140820D80
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405CF5DC (PopFxCreateEmergencyWorkerThread.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 v0; // r9
  __int64 (__fastcall **v1)(__int64); // r8
  char *v2; // rdx
  __int64 (__fastcall *v3)(__int64); // rcx
  __int64 (__fastcall **v4)(__int64); // rax
  char *v5; // rax
  __int64 result; // rax

  PopFxResidentDpc.TargetInfoAsUlong = 275;
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  qword_14034C1A8 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  qword_14034C1C8 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_14034C1E8 = (__int64)&PopFxPluginList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  qword_14034C2B0 = (__int64)PopFxResidentTimeoutRoutine;
  PopFxResidentDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  qword_14034C2B8 = 0LL;
  PopFxActiveIdleThreshold *= 10000;
  PopFxResidentWorkItem = 0LL;
  PopFxResidentDpc.DeferredContext = 0LL;
  PopFxResidentDpc.DpcData = 0LL;
  PopFxResidentDpc.ProcessorHistory = 0LL;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopFxResidentTimer.Processor = 0LL;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxDeviceAccountingLevel = PopSleepStudyDeviceAccountingLevel;
  if ( PopSleepStudyDisabled )
    PopFxDeviceAccountingLevel = 0;
  v0 = 4LL;
  qword_14034C2C8 = (__int64)&SocSubsystemsList;
  v1 = (__int64 (__fastcall **)(__int64))&unk_14034C510;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  v2 = (char *)&unk_14034C321;
  do
  {
    v1[3] = 0LL;
    v3 = (__int64 (__fastcall *)(__int64))(v2 - 65);
    *v1 = PopFxPluginWork;
    v4 = v1 - 2;
    *(_QWORD *)(v2 + 63) = v1 - 2;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v2 - 61) = 0;
    *(_BYTE *)v3 = 8;
    v1[1] = (__int64 (__fastcall *)(__int64))(v1 - 2);
    v1 += 7;
    *v4 = 0LL;
    v5 = v2 - 57;
    *(_QWORD *)(v2 - 49) = v2 - 57;
    v2 += 136;
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v2 - 177) = 0LL;
    *(_QWORD *)(v2 - 145) = 0LL;
    *(_QWORD *)(v2 - 113) = PopFxWorkOrderWatchdog;
    *(_DWORD *)(v2 - 137) = 275;
    *(_QWORD *)(v2 - 105) = v3;
    *(_QWORD *)(v2 - 81) = 0LL;
    *(_QWORD *)(v2 - 121) = 0LL;
    *(v1 - 3) = v3;
    --v0;
  }
  while ( v0 );
  KeInitializeQueue(&PopFxSystemWorkQueue, 1u);
  PopFxCreateEmergencyWorkerThread((__int64)&PopFxSystemWorkQueue);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_14034AB58 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_14034AC30 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  result = 0LL;
  PopFxPlatformInterface = 0LL;
  qword_1403490E8 = 0LL;
  qword_1403490F0 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_14034AC38 = 0LL;
  PopPepIdleWorkItem = 0LL;
  PopPepIdleDpc.TargetInfoAsUlong = 275;
  PopPepIdleDpc.DeferredContext = 0LL;
  PopPepIdleDpc.DpcData = 0LL;
  PopPepIdleDpc.ProcessorHistory = 0LL;
  PopPepIdleTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopPepIdleTimer.Processor = 0LL;
  PopPepVetoMaskReadyLock = 0LL;
  return result;
}
