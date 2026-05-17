/*
 * XREFs of RtlExitUserThread @ 0x1800736C0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     RtlUserThreadStart @ 0x180073670 (RtlUserThreadStart.c)
 *     DbgUiRemoteBreakin @ 0x1800C95C0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D32A0 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D3490 @ 0x1800D3490 (sub_1800D3490.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 * Callees:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v6, 4LL, 0LL) < 0 || !v6 )
  {
    LdrShutdownThread(v3, v2, v4, v5);
    TpCheckTerminateWorker(0LL);
    ZwTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x180073715LL);
}
