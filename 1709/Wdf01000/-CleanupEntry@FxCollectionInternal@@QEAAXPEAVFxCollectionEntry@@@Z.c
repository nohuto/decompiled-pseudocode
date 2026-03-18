/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C00120A0
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001216C (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     imp_WdfCollectionRemove @ 0x1C0085250 (imp_WdfCollectionRemove.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C0085380 (imp_WdfCollectionRemoveItem.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCollectionInternal::CleanupEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rcx

  Flink = Entry->m_ListEntry.Flink;
  if ( Flink->Blink != &Entry->m_ListEntry || (Blink = Entry->m_ListEntry.Blink, Blink->Flink != &Entry->m_ListEntry) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Entry )
    FxPoolFree(Entry);
  --this->m_Count;
}
