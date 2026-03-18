/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406EAB14
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14026A060 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 */

__int64 __fastcall MmStoreFlushAllHintedPages(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  return MiFlushAllHintedStorePages(a1, a2, a3, a4);
}
