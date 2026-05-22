/*
 * XREFs of __raise_securityfailure @ 0x1800CAB54
 * Callers:
 *     __report_gsfailure @ 0x1800CABC0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800CA63C (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18010EBC0 = IsDebuggerPresent();
  _crt_debugger_hook();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18010EBC0 )
    _crt_debugger_hook();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
