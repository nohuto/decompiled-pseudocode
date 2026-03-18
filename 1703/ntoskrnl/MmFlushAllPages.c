/*
 * XREFs of MmFlushAllPages @ 0x14021AAD4
 * Callers:
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

_QWORD *MmFlushAllPages()
{
  return MmFlushAllPagesEx(0, 8u);
}
