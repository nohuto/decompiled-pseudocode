/*
 * XREFs of PushFrame @ 0x1C0003314
 * Callers:
 *     ReadObject @ 0x1C00031E0 (ReadObject.c)
 *     PushPost @ 0x1C00032BC (PushPost.c)
 *     LoadDDB @ 0x1C004A4D8 (LoadDDB.c)
 *     SleepQueueRequest @ 0x1C004BF0C (SleepQueueRequest.c)
 *     AccessBaseField @ 0x1C004C1C0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x1C004D0E0 (PushPreserveWriteObj.c)
 *     WriteField @ 0x1C004DDF4 (WriteField.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     PushCall @ 0x1C004E600 (PushCall.c)
 *     PushScope @ 0x1C004E73C (PushScope.c)
 *     PushTerm @ 0x1C004E810 (PushTerm.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     Release @ 0x1C004F7F0 (Release.c)
 *     Acquire @ 0x1C004FCE0 (Acquire.c)
 *     Package @ 0x1C00522C0 (Package.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 480, 1297237576LL);
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
