/*
 * XREFs of RtlWerpReportException @ 0x180003BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlWerpReportException(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  return RtlWerpReportException_0(ProcessId, CrashReportSharedMem, Flags, CrashVerticalProcessHandle);
}
