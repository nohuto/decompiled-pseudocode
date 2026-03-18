/*
 * XREFs of PoFxInitPowerManagement @ 0x1408C3198
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x1400BB9B0 (KeInitializeQueue.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14064DC3C (PopFxCreateEmergencyWorkerThread.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 v0; // r8
  __int64 (__fastcall **v1)(__int64); // rdx
  _QWORD *v2; // rcx
  __int64 (__fastcall **v3)(__int64); // rax
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 result; // rax

  PopFxResidentDpc.TargetInfoAsUlong = 275;
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  qword_1403AB3F8 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  qword_1403AB3E8 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_1403AB8F8 = (__int64)&PopWorkOrderList;
  PopWorkOrderList = (__int64)&PopWorkOrderList;
  qword_1403AB430 = (__int64)PopFxResidentTimeoutRoutine;
  PopFxResidentDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  qword_1403AB408 = (__int64)&PopFxPluginList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  PopFxActiveIdleThreshold *= 10000;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  PopWorkOrderLock = 0LL;
  qword_1403AB438 = 0LL;
  PopFxResidentWorkItem = 0LL;
  PopFxBlockingDeviceListLock = 0LL;
  PopFxResidentDpc.DeferredContext = 0LL;
  PopFxResidentDpc.DpcData = 0LL;
  PopFxResidentDpc.ProcessorHistory = 0LL;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopFxResidentTimer.Processor = 0LL;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxGlobalDeviceAccountingLock = 0LL;
  memset(&PopFxGlobalDeviceAccountingInfo, 0, 0x40uLL);
  PopFxGlobalDeviceAccountingInfo = 1;
  PopFxDeviceAccountingLevel = PopSleepStudyDeviceAccountingLevel;
  if ( PopSleepStudyDisabled )
    PopFxDeviceAccountingLevel = 0;
  v0 = 4LL;
  qword_1403AB4D8 = (__int64)&SocSubsystemsList;
  v1 = (__int64 (__fastcall **)(__int64))&unk_1403AB7D0;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  v2 = &unk_1403AB518;
  do
  {
    v1[3] = 0LL;
    *v1 = PopFxPluginWork;
    v3 = v1 - 2;
    v2[15] = v1 - 2;
    *(v2 - 1) = 0LL;
    *((_BYTE *)v2 - 8) = 8;
    v2[1] = v2;
    *v2 = v2;
    v2[2] = 0LL;
    v2[6] = 0LL;
    v1[1] = (__int64 (__fastcall *)(__int64))(v1 - 2);
    v1 += 7;
    *v3 = 0LL;
    v2[10] = PopFxWorkOrderWatchdog;
    v4 = (__int64 (__fastcall *)(__int64))(v2 - 3);
    v2[11] = v2 - 3;
    *((_DWORD *)v2 + 14) = 275;
    v2[14] = 0LL;
    v2[9] = 0LL;
    v2 += 22;
    *(v1 - 3) = v4;
    --v0;
  }
  while ( v0 );
  KeInitializeQueue(&PopFxSystemWorkQueue, 1u);
  PopFxCreateEmergencyWorkerThread((__int64)&PopFxSystemWorkQueue);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_1403A9978 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_1403A99F0 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  result = 0LL;
  PopFxPlatformInterface = 0LL;
  qword_1403A6368 = 0LL;
  qword_1403A6370 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_1403A99F8 = 0LL;
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
