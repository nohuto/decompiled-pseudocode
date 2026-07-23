/*
 * XREFs of __report_securityfailure @ 0x180090E2C
 * Callers:
 *     __report_rangecheckfailure @ 0x180090E18 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180090CB0 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x1800A4090 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18015CE70 = retaddr;
  dword_18015CE60 = -1073740791;
  dword_18015CE64 = 1;
  dword_18015CE78 = 1;
  unk_18015CE80 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
