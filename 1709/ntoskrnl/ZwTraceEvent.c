/*
 * XREFs of ZwTraceEvent @ 0x14017E480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&TraceHandle);
}
