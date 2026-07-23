/*
 * XREFs of EtwLogTraceEvent @ 0x18005EE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18005EE74 @ 0x18005EE74 (sub_18005EE74.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 __fastcall EtwLogTraceEvent(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)sub_18005EE74(a1, a2, 48LL, 3222536192LL);
    }
    else
    {
      v5 = ZwTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
      if ( !v5 )
        return v2;
      return RtlNtStatusToDosError(v5);
    }
  }
  return 87LL;
}
