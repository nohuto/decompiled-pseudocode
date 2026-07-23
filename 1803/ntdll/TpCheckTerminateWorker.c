/*
 * XREFs of TpCheckTerminateWorker @ 0x180073720
 * Callers:
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_180073764 @ 0x180073764 (sub_180073764.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180108740 @ 0x180108740 (sub_180108740.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_180073764(Thread) )
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
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
