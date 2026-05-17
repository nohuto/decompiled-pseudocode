/*
 * XREFs of RtlExitUserThread @ 0x18000A700
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x18006CB60 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CFE90 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9100 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D92F0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F02A0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     TpCheckTerminateWorker @ 0x18000A760 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A0B20 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v3) < 0 || !v3 )
  {
    LdrShutdownThread(v2);
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x18000A755LL);
}
