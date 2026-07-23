/*
 * XREFs of CMFFreeFn @ 0x14059F590
 * Callers:
 *     XpressDecodeClose @ 0x140295B7C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
