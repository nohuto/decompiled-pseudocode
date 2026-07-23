/*
 * XREFs of LdrProcessRelocationBlock @ 0x1800DD700
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockEx_0 @ 0x180082738 (LdrProcessRelocationBlockEx_0.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return LdrProcessRelocationBlockEx_0(0x8664u, VA, SizeOfBlock, NextOffset, Diff);
}
