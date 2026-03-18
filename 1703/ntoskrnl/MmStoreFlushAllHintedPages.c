/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x14041FD88
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140004D70 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmStoreFlushAllHintedPages(void)
{
  return MiFlushAllHintedStorePages();
}
