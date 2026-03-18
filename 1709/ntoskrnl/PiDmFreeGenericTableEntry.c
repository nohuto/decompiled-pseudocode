/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x1406C2CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x5A706E50u);
}
