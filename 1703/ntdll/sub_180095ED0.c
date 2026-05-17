/*
 * XREFs of sub_180095ED0 @ 0x180095ED0
 * Callers:
 *     __report_securityfailure @ 0x18009604C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F84F0 (RtlUnhandledExceptionFilter.c)
 */

__int64 sub_180095ED0()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
