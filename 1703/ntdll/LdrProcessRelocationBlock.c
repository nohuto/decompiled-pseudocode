/*
 * XREFs of LdrProcessRelocationBlock @ 0x1800E22C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockEx_0 @ 0x180086FC8 (LdrProcessRelocationBlockEx_0.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return LdrProcessRelocationBlockEx_0(0x8664u, VA, SizeOfBlock, NextOffset, Diff);
}
