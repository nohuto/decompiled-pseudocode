/*
 * XREFs of RtlWerpReportException @ 0x180002300
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
  return ReportExceptionInternal(ProcessId, CrashReportSharedMem, Flags, CrashVerticalProcessHandle);
}
