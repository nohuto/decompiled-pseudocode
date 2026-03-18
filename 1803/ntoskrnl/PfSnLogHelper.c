/*
 * XREFs of PfSnLogHelper @ 0x140539004
 * Callers:
 *     PfSnLogStreamCreate @ 0x140538EA8 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x140576F74 (PfSnLogVolumeCreate.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x14008E554 (PfSnTraceGetLogEntry.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     PfSnFailProcessTrace @ 0x1405C45A4 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
    }
    else
    {
      v5 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      ExReleaseRundownProtection(v7 + 45);
  }
  return v5;
}
