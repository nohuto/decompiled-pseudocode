/*
 * XREFs of PushFrame @ 0x1C001CCF0
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     Acquire @ 0x1C001CB50 (Acquire.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 *     Release @ 0x1C001D360 (Release.c)
 *     LoadDDB @ 0x1C001D980 (LoadDDB.c)
 *     SleepQueueRequest @ 0x1C005E794 (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C005EAC0 (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 440, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
