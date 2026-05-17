/*
 * XREFs of EtwSetMark @ 0x180089610
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

ULONG __fastcall EtwSetMark(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ecx
  ULONG result; // eax

  v3 = ZwTraceEvent(a1, 1536LL, a3, a2);
  result = 0;
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return result;
}
