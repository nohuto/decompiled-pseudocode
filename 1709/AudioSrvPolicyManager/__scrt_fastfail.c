/*
 * XREFs of __scrt_fastfail @ 0x1800271DC
 * Callers:
 *     dllmain_crt_process_attach @ 0x180026660 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x180026774 (dllmain_crt_process_detach.c)
 *     __scrt_initialize_onexit_tables @ 0x180026DF0 (__scrt_initialize_onexit_tables.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800271D4 (__crt_debugger_hook.c)
 *     memset @ 0x1800275FE (memset.c)
 */

void __fastcall _scrt_fastfail(unsigned int a1)
{
  DWORD64 Rip; // rbx
  struct _RUNTIME_FUNCTION *v3; // rax
  bool v4; // bl
  _EXCEPTION_POINTERS ExceptionInfo; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v6[20]; // [rsp+50h] [rbp-B0h] BYREF
  CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  DWORD64 retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v9; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+5E0h] [rbp+4E0h] BYREF
  PVOID HandlerData; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a1);
  _crt_debugger_hook();
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v3 )
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v9;
  memset(v6, 0, 0x98uLL);
  v6[2] = retaddr;
  v6[0] = 0x140000015LL;
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
  v4 = IsDebuggerPresent();
  ExceptionInfo.ContextRecord = &ContextRecord;
  SetUnhandledExceptionFilter(0LL);
  if ( !UnhandledExceptionFilter(&ExceptionInfo) && !v4 )
    _crt_debugger_hook();
}
