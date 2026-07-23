/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x1405DE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiDmAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x5A706E50u);
}
