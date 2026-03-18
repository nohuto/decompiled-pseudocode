/*
 * XREFs of ExInsertPoolTag @ 0x140119970
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 */

_BOOL8 __fastcall ExInsertPoolTag(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3, int a4, char a5)
{
  return ExpAllocateBigPool(a2, a4, a3, a1, a5) != 0;
}
