/*
 * XREFs of RtlpCtContextFree @ 0x14078AC0C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x14078AC68 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14078AE30 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExUnsubscribeWnfStateChange @ 0x140575B10 (ExUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v5; // rcx
  PVOID v6; // rcx

  v5 = (struct _EX_RUNDOWN_REF *)P[1];
  if ( v5 )
    ExUnsubscribeWnfStateChange(v5, a2, a3, a4);
  v6 = P[2];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x67744364u);
    P[2] = 0LL;
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x67744364u);
  ExFreePoolWithTag(P, 0x67744364u);
}
