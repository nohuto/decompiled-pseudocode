/*
 * XREFs of PopPowerRequestInit @ 0x1408C5EB8
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14006E4D0 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 *     PopStatsInitPowerRequestLibrary @ 0x1408C60B4 (PopStatsInitPowerRequestLibrary.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_1403ABB18 = 0LL;
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
    qword_1403ABC18 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_1403ABC08 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_1403ABBF8 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    *(_QWORD *)&PopExecutionRequiredTimer.Header.Lock = 8LL;
    PopExecutionRequiredContext = 0x2D00000000LL;
    qword_1403ABA98 = 0LL;
    PopExecutionRequiredTimer.Header.WaitListHead.Blink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimer.Header.WaitListHead.Flink = &PopExecutionRequiredTimer.Header.WaitListHead;
    qword_1403ABB78 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopExecutionRequiredTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopExecutionRequiredTimeoutWorkerRoutine;
    PopExecutionRequiredTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopExecutionRequiredTimer.Processor = 0LL;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_1403ABB80 = 0LL;
    qword_1403ABB98 = 0LL;
    qword_1403ABB70 = 0LL;
    PopExecutionRequiredTimeoutWorker.Parameter = 0LL;
    PopExecutionRequiredTimeoutWorker.List.Flink = 0LL;
    PopStatsInitPowerRequestLibrary();
  }
  return (unsigned int)v0;
}
