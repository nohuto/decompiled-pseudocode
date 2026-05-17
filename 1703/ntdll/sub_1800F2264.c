/*
 * XREFs of sub_1800F2264 @ 0x1800F2264
 * Callers:
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

void __fastcall sub_1800F2264(ULONG_PTR a1)
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
