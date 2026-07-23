/*
 * XREFs of TpCheckTerminateWorker @ 0x18000A760
 * Callers:
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 * Callees:
 *     TppIsWorkerThread @ 0x18000A7A4 (TppIsWorkerThread.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     TppReportExceptionFilter @ 0x18010AF50 (TppReportExceptionFilter.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread(Thread) )
  {
    DbgPrintEx(
      0x54u,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      Thread);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
