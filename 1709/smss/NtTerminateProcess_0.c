/*
 * XREFs of NtTerminateProcess_0 @ 0x14000C71E
 * Callers:
 *     __report_gsfailure @ 0x14000C500 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtTerminateProcess_0(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return NtTerminateProcess(ProcessHandle, ExitStatus);
}
