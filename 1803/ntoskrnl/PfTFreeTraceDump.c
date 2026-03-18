/*
 * XREFs of PfTFreeTraceDump @ 0x14006EFFC
 * Callers:
 *     PfGetCompletedTrace @ 0x14050FFC4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14051039C (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140529278 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
