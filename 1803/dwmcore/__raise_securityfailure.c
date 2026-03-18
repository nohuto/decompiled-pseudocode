/*
 * XREFs of __raise_securityfailure @ 0x1800DAB24
 * Callers:
 *     __report_gsfailure @ 0x1800DAB90 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800DB3E8 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_1802D5CE0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_1802D5CE0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
