/*
 * XREFs of ZwResumeThread @ 0x1401A7F00
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeThread(HANDLE ThreadHandle, PULONG SuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
