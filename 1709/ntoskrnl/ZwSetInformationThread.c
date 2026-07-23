/*
 * XREFs of ZwSetInformationThread @ 0x14017DA60
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400B2954 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1405859DC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x140585C08 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140592024 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x1405B16E8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
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
