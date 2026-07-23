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

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
