/*
 * XREFs of sub_18008B110 @ 0x18008B110
 * Callers:
 *     __report_securityfailure @ 0x18008B28C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F5FD0 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall sub_18008B110(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
