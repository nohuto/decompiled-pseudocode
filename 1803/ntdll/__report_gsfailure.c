/*
 * XREFs of __report_gsfailure @ 0x18008B130
 * Callers:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18000B340 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18000EBA0 (RtlLookupFunctionEntry.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x18009EAD0 (RtlCaptureContext.c)
 *     RtlUnhandledExceptionFilter @ 0x1800F5FD0 (RtlUnhandledExceptionFilter.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t _StackCookie)
{
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+0h]
  uintptr_t v7; // [rsp+90h] [rbp+8h] BYREF

  v7 = _StackCookie;
  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&v7;
  }
  qword_180159E90 = ContextRecord.Rip;
  ContextRecord.Rcx = v7;
  dword_180159E80 = -1073740791;
  dword_180159E84 = 1;
  dword_180159E98 = 1;
  unk_180159EA0 = 2LL;
  HandlerData[2] = (PVOID)qword_1801724E8;
  RtlUnhandledExceptionFilter((PEXCEPTION_POINTERS)&ExceptionPointers);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
