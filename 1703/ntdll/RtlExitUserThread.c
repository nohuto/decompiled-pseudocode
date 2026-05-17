/*
 * XREFs of RtlExitUserThread @ 0x180050E20
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     RtlUserThreadStart @ 0x180050C20 (RtlUserThreadStart.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     DbgUiRemoteBreakin @ 0x1800D5190 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9EB0 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D9FA0 @ 0x1800D9FA0 (sub_1800D9FA0.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 * Callees:
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x180050E80 (TpCheckTerminateWorker.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
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
  JUMPOUT(0x180050E75LL);
}
