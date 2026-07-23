/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800E6BDC
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006E8E0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006EA20 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x1800A4090 (RtlCaptureContext.c)
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+D0h] [rbp-4E8h] BYREF

  RtlDecodePointer(RtlpUnhandledExceptionFilter);
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlCaptureContext(&ContextRecord);
  RtlReportException(&ExceptionRecord, &ContextRecord, 0xFu);
  RtlRaiseException(&ExceptionRecord);
}
