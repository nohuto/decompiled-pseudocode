/*
 * XREFs of __raise_securityfailure @ 0x180090CB0
 * Callers:
 *     __report_securityfailure @ 0x180090E2C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F9910 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall _raise_securityfailure(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
