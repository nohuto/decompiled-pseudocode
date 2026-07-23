/*
 * XREFs of EtwSetMark @ 0x180089610
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

ULONG __cdecl EtwSetMark(TRACEHANDLE TraceHandle, PETW_SET_MARK_INFORMATION MarkInfo, ULONG Size)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = ZwTraceEvent((HANDLE)TraceHandle, 0x600u, Size, MarkInfo);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}
