/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x18002BE90
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x18002BF50 (-DoStackCapture@@YAXIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18009FB50 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, DWORD a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // ecx
  _DWORD *v8; // rax
  bool v9; // si
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v9 = a2 == -2003303421;
  if ( (a3 & 0x10) != 0 )
  {
    v7 = 0;
    v8 = &unk_1800AACE8;
    while ( *v8 != a2 )
    {
      ++v7;
      ++v8;
      if ( v7 >= 0xA )
        goto LABEL_5;
    }
    TerminateProcessOnMemoryExhaustion(0LL);
  }
LABEL_5:
  if ( v9 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = a2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2u, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
