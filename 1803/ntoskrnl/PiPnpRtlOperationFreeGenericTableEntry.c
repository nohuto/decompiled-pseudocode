/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x140502640
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x41706E50u);
}
