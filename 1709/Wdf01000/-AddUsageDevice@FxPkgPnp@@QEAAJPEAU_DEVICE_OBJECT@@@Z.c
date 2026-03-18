/*
 * XREFs of ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009C9C4
 * Callers:
 *     imp_WdfDeviceAddDependentUsageDeviceObject @ 0x1C0077780 (imp_WdfDeviceAddDependentUsageDeviceObject.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002E7A0 (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00A5CB0 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::AddUsageDevice(FxPkgPnp *this, _DEVICE_OBJECT *DependentDevice, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _QWORD *v6; // rax
  FxRelatedDeviceList *v7; // rcx
  _QWORD *v8; // rax
  int v9; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v12; // rcx
  FxRelatedDevice *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  void *Caller; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( !this->m_UsageDependentDeviceList )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( this->m_UsageDependentDeviceList )
      goto LABEL_10;
    v6 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x50uLL,
           this->m_Globals->Tag,
           Caller);
    v7 = (FxRelatedDeviceList *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 12) = 0;
      *(_WORD *)((char *)v6 + 53) = 0;
      v6[5] = 0LL;
      v8 = v6 + 1;
      v8[1] = v8;
      *v8 = v8;
      v7->m_TransactionHead.Blink = &v7->m_TransactionHead;
      v7->m_TransactionHead.Flink = &v7->m_TransactionHead;
      v7->m_ListLock.m_Lock = 0LL;
      v7->m_ListLock.m_DbgFlagIsInitialized = 1;
      v7->__vftable = (FxRelatedDeviceList_vtbl *)FxRelatedDeviceList::`vftable';
      v7->m_DeleteOnRemove = 1;
      v7->m_NeedReportMissing = 0;
    }
    else
    {
      v7 = 0LL;
    }
    this->m_UsageDependentDeviceList = v7;
    if ( v7 )
    {
LABEL_10:
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      v12 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x45u, WPP_FxPkgPnp_cpp_Traceguids, v12, -1073741670);
    }
    FxNonPagedObject::Unlock(this, irql, v5);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v14 = (FxRelatedDevice *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xA8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeInternal);
  if ( v14 )
  {
    FxRelatedDevice::FxRelatedDevice(v14, DependentDevice, this->m_Globals);
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = FxTransactionedList::Add(this->m_UsageDependentDeviceList, this->m_Globals, (FxTransactionedEntry *)(v16 + 104));
  if ( v17 < 0 )
    FxObject::DeleteFromFailedCreate((FxObject *)v16);
  return (unsigned int)v17;
}
