/*
 * XREFs of __raise_securityfailure @ 0x1800984F8
 * Callers:
 *     __report_gsfailure @ 0x180098560 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x180098BD8 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_180437B80 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_180437B80 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
