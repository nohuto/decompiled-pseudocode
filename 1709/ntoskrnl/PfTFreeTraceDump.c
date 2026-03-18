/*
 * XREFs of PfTFreeTraceDump @ 0x140010B04
 * Callers:
 *     PfGetCompletedTrace @ 0x140455130 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1404572B8 (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140455100 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
