/*
 * XREFs of LogSchedEvent @ 0x1C0025E94
 * Callers:
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004690 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C005AC7C (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C005AD9C (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C005EFAC (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C0025EF0 (LogEvent.c)
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
