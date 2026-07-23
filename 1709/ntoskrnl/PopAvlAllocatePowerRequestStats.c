/*
 * XREFs of PopAvlAllocatePowerRequestStats @ 0x14059E970
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopAvlAllocatePowerRequestStats(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x54515750u);
}
