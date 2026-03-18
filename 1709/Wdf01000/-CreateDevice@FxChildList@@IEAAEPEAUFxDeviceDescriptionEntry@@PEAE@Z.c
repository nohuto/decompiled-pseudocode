/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002DD64
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002DA20 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002220 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002270 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C00208FC (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0020A90 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006F7DC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CDD8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D574 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  unsigned int v6; // edx
  char v7; // r15
  char v8; // al
  WDFCHILDLIST__ *v9; // rcx
  int _a1; // edi
  unsigned __int64 CreatedDevice; // rbx
  KIRQL v13; // al
  _LIST_ENTRY *p_m_ModificationLink; // r14
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v17; // r10
  KIRQL v18; // bl
  unsigned __int8 v19; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v7 = 1;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v8 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v8 != 0);
  if ( !this->m_StaticList )
  {
    v9 = (WDFCHILDLIST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    _a1 = this->m_EvtCreateDevice.m_Method(v9, Entry->m_IdentificationDescription, &init);
    if ( _a1 == -1073741267 )
    {
      if ( init.CreatedDevice )
        FxDevice::Destroy((FxDevice *)init.CreatedDevice);
      *InvalidateRelations = 1;
    }
    else
    {
      CreatedDevice = (unsigned __int64)init.CreatedDevice;
      if ( _a1 >= 0 )
      {
        if ( !init.CreatedDevice )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
          FxVerifierDbgBreakPoint(this->m_Globals);
          CreatedDevice = (unsigned __int64)init.CreatedDevice;
          _a1 = -1073740951;
        }
        if ( _a1 >= 0 )
          goto LABEL_9;
      }
      if ( CreatedDevice )
      {
        v13 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
        Entry->m_DescriptionState = DescriptionReportedMissing;
        if ( Entry->m_ModificationState )
        {
          p_m_ModificationLink = &Entry->m_ModificationLink;
          Flink = p_m_ModificationLink->Flink;
          if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink
            || (Blink = p_m_ModificationLink->Blink, Blink->Flink != p_m_ModificationLink) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        KeReleaseSpinLock(&this->m_ListLock, v13);
        v17 = (const void *)(CreatedDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(CreatedDevice + 10) )
          v17 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v17,
          *(_QWORD *)(CreatedDevice + 144),
          _a1);
        FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)CreatedDevice, _a1, 1u);
        init.CreatedDevice = 0LL;
      }
      else
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v18 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v18);
        FxChildList::DrainFreeListHead(this, &freeHead, v19);
      }
    }
    v7 = 0;
    goto LABEL_10;
  }
  CreatedDevice = *(_QWORD *)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = (void *)CreatedDevice;
LABEL_9:
  Entry->m_Pdo = (FxDevice *)CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_10:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init, v6);
  return v7;
}
