/*
 * XREFs of CiAllocateMemory @ 0x1C0001BE0
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000AD40 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CiAllocateMemory(SIZE_T a1)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, a1, 0x74727641u);
}
