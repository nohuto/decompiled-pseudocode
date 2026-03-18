/*
 * XREFs of ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006F830
 * Callers:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0002420 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C006FACC (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C006FFA8 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0070084 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006F7DC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

void __fastcall FxChildList::MarkModificationNotPresentWorker(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *ModificationEntry)
{
  __int32 v5; // r8d
  _LIST_ENTRY *p_m_ModificationLink; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // r8
  _LIST_ENTRY *v12; // rax

  v5 = ModificationEntry->m_ModificationState - 1;
  if ( v5 )
  {
    if ( v5 == 3 )
    {
      p_m_ModificationLink = &ModificationEntry->m_ModificationLink;
      Flink = ModificationEntry->m_ModificationLink.Flink;
      if ( Flink->Blink != &ModificationEntry->m_ModificationLink
        || (Blink = ModificationEntry->m_ModificationLink.Blink, Blink->Flink != p_m_ModificationLink) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      ModificationEntry->m_ModificationLink.Blink = &ModificationEntry->m_ModificationLink;
      p_m_ModificationLink->Flink = p_m_ModificationLink;
      FxChildList::MarkDescriptionNotPresentWorker(this, ModificationEntry, 0);
    }
  }
  else
  {
    v9 = &ModificationEntry->m_ModificationLink;
    v10 = ModificationEntry->m_ModificationLink.Flink;
    if ( v10->Blink != &ModificationEntry->m_ModificationLink
      || (v11 = ModificationEntry->m_ModificationLink.Blink, v11->Flink != v9) )
    {
      __fastfail(3u);
    }
    v11->Flink = v10;
    v10->Blink = v11;
    ModificationEntry->m_ModificationLink.Blink = &ModificationEntry->m_ModificationLink;
    v9->Flink = v9;
    if ( this->m_StaticList )
      ModificationEntry->m_ModificationState = ModificationNeedsPnpRemoval;
    v12 = FreeListHead->Blink;
    if ( v12->Flink != FreeListHead )
      __fastfail(3u);
    ModificationEntry->m_DescriptionLink.Flink = FreeListHead;
    ModificationEntry->m_DescriptionLink.Blink = v12;
    v12->Flink = (_LIST_ENTRY *)ModificationEntry;
    FreeListHead->Blink = (_LIST_ENTRY *)ModificationEntry;
  }
}
