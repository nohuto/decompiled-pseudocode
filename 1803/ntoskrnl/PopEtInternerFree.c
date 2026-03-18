/*
 * XREFs of PopEtInternerFree @ 0x140581AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtInternerFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54456F50u);
}
