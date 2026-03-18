/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C002E1D4
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C002FEF0 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C000EA58 (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C006F34C (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned int v8; // ebp
  FxChildList *v9; // rsi
  FxChildList_vtbl *v10; // rsi
  unsigned int Flags; // ecx
  FxChildList_vtbl *v13; // r15
  unsigned __int8 (__fastcall *EvtChildListIdentificationDescriptionCompare)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  void (__fastcall *SelfDestruct)(FxObject *); // rcx
  __int16 v16; // ax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v17; // esi
  WDFDEVICE__ *v18; // rcx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  const void *_a1; // rcx
  _LIST_ENTRY *p_m_DescriptionListHead; // rcx
  _LIST_ENTRY *i; // rax
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  char v26; // r13
  _LIST_ENTRY *Flink; // rsi
  unsigned int v28; // r15d
  unsigned __int8 (__fastcall *v29)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  unsigned __int64 v30; // rcx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v31; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v32; // rdx
  unsigned int v33; // [rsp+40h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-30h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v8 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v8 = -1073741436;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741436);
    goto $Done_21;
  }
  v9 = (FxChildList *)Iterator->Reserved[0];
  if ( v9 )
  {
    if ( this->m_Globals->FxVerifierOn )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      if ( v9 != (FxChildList *)&this->m_DescriptionListHead )
      {
        for ( i = p_m_DescriptionListHead->Flink; ; i = i->Flink )
        {
          if ( i == p_m_DescriptionListHead )
          {
            v8 = -1073741811;
            goto $Done_21;
          }
          if ( v9 == (FxChildList *)i )
            break;
        }
      }
    }
    v10 = v9->__vftable;
    if ( v10 == (FxChildList_vtbl *)&this->m_DescriptionListHead )
    {
LABEL_5:
      Iterator->Reserved[0] = 0LL;
    }
    else
    {
      while ( 1 )
      {
        if ( (Flags = Iterator->Flags, v13 = v10, (Flags & 1) != 0) && LODWORD(v10->Release) == 2
          || (Flags & 2) != 0 && (unsigned int)(LODWORD(v10->Release) - 3) <= 1
          || (Flags & 4) != 0 && LODWORD(v10->Release) == 1 )
        {
          if ( !Info )
            break;
          EvtChildListIdentificationDescriptionCompare = Info->EvtChildListIdentificationDescriptionCompare;
          if ( !EvtChildListIdentificationDescriptionCompare )
            break;
          v24 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !this->m_ObjectSize )
            v24 = 0LL;
          if ( EvtChildListIdentificationDescriptionCompare(
                 (WDFCHILDLIST__ *)v24,
                 Info->IdentificationDescription,
                 (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v10->AddRefOverride) )
          {
            break;
          }
        }
        v10 = (FxChildList_vtbl *)v10->SelfDestruct;
        if ( v10 == (FxChildList_vtbl *)&this->m_DescriptionListHead )
          goto LABEL_5;
      }
      Iterator->Reserved[0] = v10;
      SelfDestruct = v10[1].SelfDestruct;
      if ( SelfDestruct )
      {
        v16 = *((_WORD *)SelfDestruct + 5);
        v17 = WdfChildListRetrieveDeviceSuccess;
        v18 = (WDFDEVICE__ *)((unsigned __int64)SelfDestruct ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v16 )
          v18 = 0LL;
        *Device = v18;
      }
      else
      {
        v17 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(
            this,
            IdentificationDescription,
            (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v13->AddRefOverride);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(
            this,
            AddressDescription,
            (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v13->ReleaseOverride);
        Info->Status = v17;
      }
      v8 = 0;
    }
  }
  if ( (Iterator->Flags & 4) == 0 )
    goto $Done_21;
  v25 = (unsigned int)Iterator->Reserved[1];
  v33 = v25;
  if ( !v25 )
    goto $Done_21;
  v26 = 0;
  Flink = this->m_ModificationListHead.Flink;
  v28 = 1;
  if ( Flink == &this->m_ModificationListHead )
    goto LABEL_63;
  while ( 1 )
  {
    if ( LODWORD(Flink[1].Flink) != 1 )
      goto LABEL_53;
    if ( ++v28 <= v25 )
      goto LABEL_53;
    v26 = 1;
    if ( !Info )
      break;
    v29 = Info->EvtChildListIdentificationDescriptionCompare;
    if ( !v29 )
      break;
    v30 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v30 = 0LL;
    v26 = v29(
            (WDFCHILDLIST__ *)v30,
            Info->IdentificationDescription,
            (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Flink[-1].Flink);
    if ( v26 )
      break;
    v25 = v33;
LABEL_53:
    Flink = Flink->Flink;
    if ( Flink == &this->m_ModificationListHead )
      goto LABEL_62;
  }
  Iterator->Reserved[1] = (void *)v28;
  if ( Info )
  {
    v31 = Info->IdentificationDescription;
    if ( v31 )
      FxChildList::CopyId(this, v31, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Flink[-1].Flink);
    v32 = Info->AddressDescription;
    if ( v32 )
      FxChildList::CopyAddress(this, v32, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)Flink[-1].Blink);
    Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
  }
  v8 = 0;
LABEL_62:
  if ( !v26 )
LABEL_63:
    Iterator->Reserved[1] = 0LL;
$Done_21:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v8;
}
