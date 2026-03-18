/*
 * XREFs of PopPowerRequestInit @ 0x140853E60
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x1400DF9E0 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 *     PopStatsInitPowerRequestLibrary @ 0x14085405C (PopStatsInitPowerRequestLibrary.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_140367218 = 0LL;
  PopPowerRequestSpinLock = 0LL;
  PopPowerRequestObjectCount = 0LL;
  PopSpecialPowerRequestObjectCount = 0LL;
  memset(v3, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v3[0]) |= 0x14u;
  v3[8] = PopClosePowerRequestObject;
  LOWORD(v3[0]) = 120;
  v3[9] = PopDeletePowerRequestObject;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 120;
  LODWORD(v3[1]) = 402;
  *(_OWORD *)((char *)&v3[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v3[3]) = 2031616;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( v0 >= 0 )
  {
    PopCallbackWorkItem.Parameter = 0LL;
    PopCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerRequestCallbackWorker;
    PopCallbackWorkItem.List.Flink = 0LL;
    qword_140367358 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_140367388 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_140367378 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    *(_QWORD *)&PopExecutionRequiredTimer.Header.Lock = 8LL;
    PopExecutionRequiredContext = 0x2C00000000LL;
    qword_1403671E8 = 0LL;
    PopExecutionRequiredTimer.Header.WaitListHead.Blink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimer.Header.WaitListHead.Flink = &PopExecutionRequiredTimer.Header.WaitListHead;
    qword_140367318 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopExecutionRequiredTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopExecutionRequiredTimeoutWorkerRoutine;
    PopExecutionRequiredTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopExecutionRequiredTimer.Processor = 0LL;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_140367320 = 0LL;
    qword_140367338 = 0LL;
    qword_140367310 = 0LL;
    PopExecutionRequiredTimeoutWorker.Parameter = 0LL;
    PopExecutionRequiredTimeoutWorker.List.Flink = 0LL;
    PopStatsInitPowerRequestLibrary();
  }
  return (unsigned int)v0;
}
