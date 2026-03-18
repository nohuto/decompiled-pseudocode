/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1400D2C30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x140584C00 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
