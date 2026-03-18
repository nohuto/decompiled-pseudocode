/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x140584C00
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1400D2C30 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}
