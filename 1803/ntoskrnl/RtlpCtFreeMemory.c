/*
 * XREFs of RtlpCtFreeMemory @ 0x14078AD30
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
