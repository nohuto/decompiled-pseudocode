/*
 * XREFs of PushFrame @ 0x1C0018B78
 * Callers:
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     LoadDDB @ 0x1C001524C (LoadDDB.c)
 *     Release @ 0x1C0015300 (Release.c)
 *     Acquire @ 0x1C0016280 (Acquire.c)
 *     AccessBaseField @ 0x1C00173C0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C0018A78 (PushAccFieldObj.c)
 *     PushPost @ 0x1C0018BF8 (PushPost.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     SleepQueueRequest @ 0x1C005F45C (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C005FCA0 (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 480, 1297237576, a3);
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
