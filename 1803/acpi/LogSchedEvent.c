/*
 * XREFs of LogSchedEvent @ 0x1C000295C
 * Callers:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     RestartContext @ 0x1C000252C (RestartContext.c)
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C0043F34 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C00442E0 (AMLIResumeInterpreter.c)
 *     RestartCtxtCallback @ 0x1C004BD10 (RestartCtxtCallback.c)
 *     AsyncCallBack @ 0x1C004EA84 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C00029B8 (LogEvent.c)
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
