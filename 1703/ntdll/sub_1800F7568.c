/*
 * XREFs of sub_1800F7568 @ 0x1800F7568
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     sub_18010057C @ 0x18010057C (sub_18010057C.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 */

void __fastcall sub_1800F7568(DWORD a1, ULONG_PTR a2, int a3)
{
  int v6; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B8h] BYREF

  if ( sub_1800F7520() )
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
