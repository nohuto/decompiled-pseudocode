/*
 * XREFs of sub_180095ED0 @ 0x180095ED0
 * Callers:
 *     __report_securityfailure @ 0x18009604C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F84F0 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall sub_180095ED0(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
