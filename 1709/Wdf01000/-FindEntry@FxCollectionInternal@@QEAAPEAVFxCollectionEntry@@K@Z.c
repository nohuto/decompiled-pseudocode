/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0012038
 * Callers:
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C0011010 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C00116D0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C0011EC0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C0011F50 (imp_WdfCmResourceListGetDescriptor.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00120E8 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0012350 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C0085380 (imp_WdfCollectionRemoveItem.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxCollectionInternal::FindEntry(FxCollectionInternal *this, unsigned int Index)
{
  int v4; // ecx
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Flink; // rax

  if ( Index < this->m_Count )
  {
    v4 = 0;
    p_m_ListHead = &this->m_ListHead;
    Flink = p_m_ListHead->Flink;
    while ( Flink != p_m_ListHead )
    {
      if ( v4 == Index )
        return &Flink[-1].Blink;
      Flink = Flink->Flink;
      ++v4;
    }
  }
  return 0LL;
}
