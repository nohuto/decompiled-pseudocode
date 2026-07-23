/*
 * XREFs of CMFFreeFn @ 0x14056E280
 * Callers:
 *     XpressDecodeClose @ 0x14026B60C (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
