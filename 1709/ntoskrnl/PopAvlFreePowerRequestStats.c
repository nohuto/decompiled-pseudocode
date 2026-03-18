/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x14059EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x54515750u);
}
