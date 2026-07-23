/*
 * XREFs of TpCheckTerminateWorker @ 0x180050E80
 * Callers:
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180050EC4 @ 0x180050EC4 (sub_180050EC4.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180105930 @ 0x180105930 (sub_180105930.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_180050EC4(Thread) )
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
