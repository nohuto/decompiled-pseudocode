/*
 * XREFs of RtlReportCriticalFailure @ 0x1800F8394
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 *     RtlpReportHeapFailure @ 0x1801023A4 (RtlpReportHeapFailure.c)
 * Callees:
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F834C (RtlIsAnyDebuggerPresent.c)
 */

void __fastcall RtlReportCriticalFailure(int a1, unsigned __int64 a2, int a3)
{
  int v6; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B8h] BYREF

  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", v6);
    if ( a3 )
      __debugbreak();
  }
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a2;
  RtlRaiseException(&ExceptionRecord);
}
