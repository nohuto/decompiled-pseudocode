/*
 * XREFs of ZwSetInformationThread @ 0x1401A7660
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140086C70 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x140574B08 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140574D34 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x14057CB88 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
