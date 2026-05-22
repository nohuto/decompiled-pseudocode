/*
 * XREFs of __raise_securityfailure @ 0x1800E1B34
 * Callers:
 *     __report_gsfailure @ 0x1800E1BA0 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800E1690 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_180135E70 = IsDebuggerPresent();
  _crt_debugger_hook();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_180135E70 )
    _crt_debugger_hook();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
