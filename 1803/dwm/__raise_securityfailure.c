/*
 * XREFs of __raise_securityfailure @ 0x140003628
 * Callers:
 *     __report_gsfailure @ 0x140003690 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1400038E0 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_14000E7B0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_14000E7B0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
