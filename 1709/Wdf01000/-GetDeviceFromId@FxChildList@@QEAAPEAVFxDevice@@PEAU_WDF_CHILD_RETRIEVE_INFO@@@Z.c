/*
 * XREFs of ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C006F584
 * Callers:
 *     imp_WdfChildListRequestChildEject @ 0x1C006DE60 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfChildListRetrievePdo @ 0x1C006E170 (imp_WdfChildListRetrievePdo.c)
 * Callees:
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002DEAC (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002DF14 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C006F34C (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

FxDevice *__fastcall FxChildList::GetDeviceFromId(FxChildList *this, _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned __int64 *p_m_ListLock; // r14
  FxDevice *m_Pdo; // rbp
  KIRQL v6; // r15
  FxDeviceDescriptionEntry *v7; // rax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v8; // ebx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  FxDevice *result; // rax

  p_m_ListLock = &this->m_ListLock;
  m_Pdo = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Info->IdentificationDescription);
  v8 = WdfChildListRetrieveDeviceSuccess;
  if ( v7 && v7->m_ModificationState == ModificationInsert )
    goto LABEL_3;
  v7 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Info->IdentificationDescription);
  if ( !v7 )
  {
    v8 = WdfChildListRetrieveDeviceNoSuchDevice;
    goto LABEL_8;
  }
  if ( v7->m_DescriptionState == DescriptionPresentNeedsInstantiation )
LABEL_3:
    v8 = WdfChildListRetrieveDeviceNotYetCreated;
  else
    m_Pdo = v7->m_Pdo;
LABEL_8:
  if ( v7 )
  {
    AddressDescription = Info->AddressDescription;
    if ( AddressDescription )
      FxChildList::CopyAddress(this, AddressDescription, v7->m_AddressDescription);
  }
  KeReleaseSpinLock(p_m_ListLock, v6);
  result = m_Pdo;
  Info->Status = v8;
  return result;
}
