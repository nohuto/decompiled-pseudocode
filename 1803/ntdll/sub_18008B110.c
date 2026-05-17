/*
 * XREFs of sub_18008B110 @ 0x18008B110
 * Callers:
 *     __report_securityfailure @ 0x18008B28C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F5FD0 (RtlUnhandledExceptionFilter.c)
 */

__int64 sub_18008B110()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
