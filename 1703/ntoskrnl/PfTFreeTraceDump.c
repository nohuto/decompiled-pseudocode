/*
 * XREFs of PfTFreeTraceDump @ 0x140061B90
 * Callers:
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1404987A8 (PfTTraceListFree.c)
 * Callees:
 *     <none>
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
