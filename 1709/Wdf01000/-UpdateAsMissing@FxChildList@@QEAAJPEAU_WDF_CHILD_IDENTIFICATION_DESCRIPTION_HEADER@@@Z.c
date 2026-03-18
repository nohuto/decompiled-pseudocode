/*
 * XREFs of ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C006FFA8
 * Callers:
 *     imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x1C006E3D0 (imp_WdfChildListUpdateChildDescriptionAsMissing.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098520 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002220 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002270 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002DEAC (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002DF14 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006F7DC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006F830 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 */

__int64 __fastcall FxChildList::UpdateAsMissing(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Description)
{
  unsigned __int64 *p_m_ListLock; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  FxDeviceDescriptionEntry *v7; // rax
  FxDeviceDescriptionEntry *v8; // rax
  unsigned __int8 v9; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Description);
  if ( v7 )
  {
    FxChildList::MarkModificationNotPresentWorker(this, &freeHead, v7);
  }
  else
  {
    v8 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Description);
    if ( v8 )
    {
      if ( (unsigned int)(v8->m_DescriptionState - 1) <= 1 )
        FxChildList::MarkDescriptionNotPresentWorker(this, v8, 0);
    }
    else
    {
      v5 = -1073741810;
    }
  }
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v9);
  return v5;
}
