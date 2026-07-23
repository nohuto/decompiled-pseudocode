/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x14045AE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PnpAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x75737050u);
}
