/*
 * XREFs of MmFlushAllPages @ 0x1402602D0
 * Callers:
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 * Callees:
 *     MmFlushAllPagesEx @ 0x140157768 (MmFlushAllPagesEx.c)
 */

_QWORD *MmFlushAllPages()
{
  return MmFlushAllPagesEx(0, 8u);
}
