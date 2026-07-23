/*
 * XREFs of __report_securityfailure @ 0x18008B28C
 * Callers:
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 * Callees:
 *     sub_18008B110 @ 0x18008B110 (sub_18008B110.c)
 *     RtlCaptureContext @ 0x18009EAD0 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180159E90 = retaddr;
  dword_180159E80 = -1073740791;
  dword_180159E84 = 1;
  dword_180159E98 = 1;
  unk_180159EA0 = v2;
  sub_18008B110((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
