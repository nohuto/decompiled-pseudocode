/*
 * XREFs of PfSnLogHelper @ 0x140456164
 * Callers:
 *     PfSnLogVolumeCreate @ 0x1404547D4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x140456004 (PfSnLogStreamCreate.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x140012EB8 (PfSnTraceGetLogEntry.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PfSnFailProcessTrace @ 0x1406F4650 (PfSnFailProcessTrace.c)
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
      ExReleaseRundownProtection_0(v7 + 45);
  }
  return v5;
}
