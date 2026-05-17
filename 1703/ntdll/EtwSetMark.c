/*
 * XREFs of EtwSetMark @ 0x180104760
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

ULONG EtwSetMark()
{
  NTSTATUS v0; // ecx
  ULONG result; // eax

  v0 = ZwTraceEvent();
  result = 0;
  if ( v0 )
    return RtlNtStatusToDosError(v0);
  return result;
}
