/*
 * XREFs of __raise_securityfailure @ 0x180090CB0
 * Callers:
 *     __report_securityfailure @ 0x180090E2C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F9910 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
