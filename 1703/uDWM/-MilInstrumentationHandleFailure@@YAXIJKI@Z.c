/*
 * XREFs of ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x1800A1254
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800A1104 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800A1230 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800A13CC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure(__int64 a1, int a2, unsigned int a3, int a4)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( (a3 & 0x10) != 0 && IsOOM(a2) )
    TerminateProcessOnMemoryExhaustion(0LL);
  if ( a2 == -2003303421 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.ExceptionCode = -2003303421;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
