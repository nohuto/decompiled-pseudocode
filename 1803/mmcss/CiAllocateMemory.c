/*
 * XREFs of CiAllocateMemory @ 0x1C0002824
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000A598 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CiAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, NumberOfBytes, 0x74727641u);
}
