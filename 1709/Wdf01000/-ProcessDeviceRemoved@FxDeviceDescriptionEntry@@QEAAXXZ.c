/*
 * XREFs of ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C006FBCC
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098730 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002220 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::ProcessDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  FxChildList *m_DeviceList; // rbx
  KIRQL v3; // dl
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rax
  unsigned __int8 v7; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  FxVerifierCheckIrqlLevel(this->m_DeviceList->m_Globals, 0);
  m_DeviceList = this->m_DeviceList;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&m_DeviceList->m_ListLock);
  if ( !m_DeviceList->m_ScanCount || (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink == this )
  {
    Flink = this->m_DescriptionLink.Flink;
    if ( (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink->Blink != this
      || (Blink = this->m_DescriptionLink.Blink, (FxDeviceDescriptionEntry *)Blink->Flink != this) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v6 = freeHead.Blink;
    if ( freeHead.Blink->Flink != &freeHead )
      __fastfail(3u);
    this->m_DescriptionLink.Blink = freeHead.Blink;
    this->m_DescriptionLink.Flink = &freeHead;
    v6->Flink = (_LIST_ENTRY *)this;
    freeHead.Blink = (_LIST_ENTRY *)this;
  }
  else
  {
    this->m_PendingDeleteOnScanEnd = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v3);
  FxChildList::DrainFreeListHead(this->m_DeviceList, &freeHead, v7);
}
