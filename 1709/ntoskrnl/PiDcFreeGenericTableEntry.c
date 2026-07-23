/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x1406C33B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x47706E50u);
}
