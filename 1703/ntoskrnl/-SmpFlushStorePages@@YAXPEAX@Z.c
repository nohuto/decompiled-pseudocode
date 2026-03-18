/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140004D70
 * Callers:
 *     <none>
 * Callees:
 *     MmStoreFlushAllHintedPages @ 0x14041FD88 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(struct _KEVENT *a1)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(a1, 0, 0);
}
