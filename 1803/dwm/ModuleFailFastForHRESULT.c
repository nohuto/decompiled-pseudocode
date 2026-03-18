/*
 * XREFs of ModuleFailFastForHRESULT @ 0x140007394
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x14000820C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1400019F0 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x140003D88 (memset_0.c)
 */

void __fastcall ModuleFailFastForHRESULT(int a1)
{
  ULONG_PTR v1; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v1 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.ExceptionAddress = 0LL;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v1;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
  JUMPOUT(0x1400073FELL);
}
