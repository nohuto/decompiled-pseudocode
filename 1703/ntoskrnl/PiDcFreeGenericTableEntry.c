/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x140697940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PiDcFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x47706E50u);
}
