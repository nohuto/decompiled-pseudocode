/*
 * XREFs of PopPowerRequestInit @ 0x14082399C
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14004D3E0 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_14034C768 = 0LL;
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
  HIDWORD(v3[5]) = 112;
  LODWORD(v3[1]) = 402;
  *(_OWORD *)((char *)&v3[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v3[3]) = 2031616;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( v0 >= 0 )
  {
    PopCallbackWorkItem.Parameter = 0LL;
    PopCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerRequestCallbackWorker;
    PopCallbackWorkItem.List.Flink = 0LL;
    qword_14034C8C8 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_14034C8B8 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_14034C8E8 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    PopExecutionRequiredTimer = 8LL;
    qword_14034C790 = (__int64)&qword_14034C788;
    qword_14034C788 = (__int64)&qword_14034C788;
    qword_14034C878 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopCheckExecutionRequiredWorker.WorkerRoutine = (void (__fastcall *)(void *))PopCheckExecutionRequiredPowerRequests;
    qword_14034C798 = 0LL;
    qword_14034C7B8 = 0LL;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_14034C880 = 0LL;
    qword_14034C898 = 0LL;
    qword_14034C870 = 0LL;
    PopCheckExecutionRequiredWorker.Parameter = 0LL;
    PopCheckExecutionRequiredWorker.List.Flink = 0LL;
  }
  return (unsigned int)v0;
}
