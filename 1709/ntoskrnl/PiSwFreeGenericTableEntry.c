/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x1406CDD00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x57706E50u);
}
