/*
 * XREFs of __raise_securityfailure @ 0x14001CE78
 * Callers:
 *     __report_gsfailure @ 0x14001CEE0 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x14001CFC8 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x14001D66C (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_140085D20 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_140085D20 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
