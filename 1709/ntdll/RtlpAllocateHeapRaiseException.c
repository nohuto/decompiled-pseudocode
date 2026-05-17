/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x1800F2B10
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
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
