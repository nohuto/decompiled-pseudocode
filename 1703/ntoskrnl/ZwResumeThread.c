/*
 * XREFs of ZwResumeThread @ 0x14017E980
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, SuspendCount, v2);
}
