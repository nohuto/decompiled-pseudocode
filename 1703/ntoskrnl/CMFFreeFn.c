/*
 * XREFs of CMFFreeFn @ 0x14056E280
 * Callers:
 *     XpressDecodeClose @ 0x14026B60C (XpressDecodeClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
