/*
 * XREFs of ZwSetInformationThread @ 0x14017E0E0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14012A928 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x14044BCE4 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140455794 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
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
