/*
 * XREFs of PopPowerRequestAllocate @ 0x14059DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopPowerRequestAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x6C564150u);
}
