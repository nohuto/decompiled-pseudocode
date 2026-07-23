/*
 * XREFs of LdrProcessRelocationBlockEx @ 0x1800DD730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlockEx(
        ULONG Machine,
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return LdrProcessRelocationBlockEx_0(Machine, VA, SizeOfBlock, NextOffset, Diff);
}
