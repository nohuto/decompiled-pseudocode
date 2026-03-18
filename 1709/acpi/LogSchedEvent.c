/*
 * XREFs of LogSchedEvent @ 0x1C0028490
 * Callers:
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C00079E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     AMLIPauseInterpreter @ 0x1C005B7DC (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C005B900 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C00601A4 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C00284EC (LogEvent.c)
 */

__int64 __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11

  v5 = a3;
  LODWORD(a3) = 0;
  if ( a2 )
    a3 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (unsigned int)KeGetCurrentThread(), a3, a2, (unsigned int)gReadyQueue, v5, a4, a5);
}
