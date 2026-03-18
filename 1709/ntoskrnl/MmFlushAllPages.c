/*
 * XREFs of MmFlushAllPages @ 0x140227320
 * Callers:
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     MmFlushAllPagesEx @ 0x14022733C (MmFlushAllPagesEx.c)
 */

__int64 MmFlushAllPages()
{
  return MmFlushAllPagesEx(0LL, 8LL);
}
