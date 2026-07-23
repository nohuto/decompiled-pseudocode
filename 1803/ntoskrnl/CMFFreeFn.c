/*
 * XREFs of CMFFreeFn @ 0x1405E9DE0
 * Callers:
 *     XpressDecodeClose @ 0x1402CB1BC (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
