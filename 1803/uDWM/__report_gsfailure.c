/*
 * XREFs of __report_gsfailure @ 0x180048F50
 * Callers:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x180048F10 (__raise_securityfailure.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-48h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-40h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-30h] BYREF
  PVOID HandlerData[5]; // [rsp+60h] [rbp-28h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_1800C96F0 = ContextRecord.Rip;
  ContextRecord.Rcx = StackCookie;
  dword_1800C96E0 = -1073740791;
  dword_1800C96E4 = 1;
  dword_1800C96F8 = 3;
  qword_1800C9700[0] = 2LL;
  qword_1800C9700[1] = _security_cookie;
  qword_1800C9700[2] = _security_cookie_complement;
  HandlerData[2] = (PVOID)_security_cookie_complement;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
