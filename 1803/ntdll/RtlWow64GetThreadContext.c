/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800D6580
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlWow64GetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu, 0LL);
}
