/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14026A060
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406EAB14 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
