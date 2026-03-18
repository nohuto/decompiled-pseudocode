/*
 * XREFs of PfSnLogHelper @ 0x140497128
 * Callers:
 *     PfSnLogVolumeCreate @ 0x14044DC00 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x140496FC4 (PfSnLogStreamCreate.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x1400602F0 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PfSnFailProcessTrace @ 0x1406C4CD4 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = (struct _EX_RUNDOWN_REF *)v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry(v6, a2, a3) < 0 )
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
