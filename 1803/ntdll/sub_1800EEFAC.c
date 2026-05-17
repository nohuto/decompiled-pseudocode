/*
 * XREFs of sub_1800EEFAC @ 0x1800EEFAC
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

void __fastcall sub_1800EEFAC(ULONG_PTR a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  RtlRaiseException(&ExceptionRecord);
}
