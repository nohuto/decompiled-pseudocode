/*
 * XREFs of __report_securityfailure @ 0x18009604C
 * Callers:
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 * Callees:
 *     sub_180095ED0 @ 0x180095ED0 (sub_180095ED0.c)
 *     RtlCaptureContext @ 0x1800A91B0 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180158E30 = retaddr;
  dword_180158E20 = -1073740791;
  dword_180158E24 = 1;
  dword_180158E38 = 1;
  unk_180158E40 = v2;
  sub_180095ED0((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
