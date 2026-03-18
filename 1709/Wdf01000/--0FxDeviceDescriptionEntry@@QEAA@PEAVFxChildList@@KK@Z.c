/*
 * XREFs of ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C002F2A4
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002E330 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C006F0B4 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
        FxDeviceDescriptionEntry *this,
        FxChildList *DeviceList,
        unsigned int AddressDescriptionSize,
        unsigned int IdentificationDescriptionSize)
{
  unsigned int RefCount; // r8d
  unsigned int *m_ScanTag; // rcx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v7; // rcx

  this->m_IdentificationDescription = (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)&this[1];
  LODWORD(this[1].m_DescriptionLink.Flink) = AddressDescriptionSize;
  if ( IdentificationDescriptionSize )
  {
    v7 = (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)((char *)this->m_IdentificationDescription
                                                 + ((AddressDescriptionSize + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
    this->m_AddressDescription = v7;
    v7->AddressDescriptionSize = IdentificationDescriptionSize;
  }
  this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
  this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
  this->m_ModificationLink.Blink = &this->m_ModificationLink;
  this->m_ModificationLink.Flink = &this->m_ModificationLink;
  this->m_ModificationState = ModificationInsert;
  this->m_DeviceList = DeviceList;
  *(_WORD *)&this->m_FoundInLastScan = 0;
  this->m_PendingDeleteOnScanEnd = 0;
  RefCount = _InterlockedIncrement(&DeviceList->m_Refcnt);
  if ( SLOBYTE(DeviceList->m_ObjectFlags) < 0 )
    m_ScanTag = DeviceList[-1].m_ScanTag;
  else
    m_ScanTag = 0LL;
  if ( m_ScanTag )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_ScanTag,
      this,
      72,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp",
      TagAddRef,
      RefCount);
}
