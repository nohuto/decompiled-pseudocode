/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0014C30
 * Callers:
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0014940 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C003ADF0 (imp_WdfFdoInitOpenRegistryKey.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001FE44 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned __int64 Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ *v9; // rdi
  ULONG v10; // r12d
  int result; // eax
  _POOL_TYPE v13; // ebx
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // r14d
  void *Caller; // rax
  FxObject *v17; // rax
  FxObject *v18; // rbx
  _FX_DRIVER_GLOBALS *ParentObject; // rdx
  FxObject *Driver; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v22; // r13
  KIRQL v23; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  NTSTATUS v26; // ebp
  unsigned __int16 v27; // ax
  const void *v28; // rbp
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v30; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v33; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int64 Size; // [rsp+40h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h]
  void *hKey; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v9 = 0LL;
  hKey = 0LL;
  v10 = DeviceInstanceKeyType;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0, DeviceInstanceKeyType);
  if ( result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    if ( !Device )
    {
      DeviceObject = DeviceInit->Fdo.PhysicalDevice;
      goto LABEL_7;
    }
LABEL_47:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDevice_cpp_Traceguids, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return -1073741811;
  }
  if ( !Device )
    goto LABEL_47;
  if ( *(_BYTE *)(Device + 280) )
  {
    DeviceObject = *(PDEVICE_OBJECT *)(Device + 160);
    if ( DeviceObject )
    {
LABEL_7:
      v13 = ExDefaultNonPagedPoolType;
      ContextSizeOverride = 0LL;
      Tag = FxDriverGlobals->Tag;
      if ( KeyAttributes )
      {
        ContextTypeInfo = KeyAttributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = KeyAttributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = ContextTypeInfo->ContextSize;
        }
      }
      if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x80u, 0, ContextSizeOverride, &Size) < 0 )
        return -1073741670;
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v17 = (FxObject *)FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v13, Size, Tag, Caller);
      v18 = v17;
      if ( v17 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v17, 0, 0x30uLL);
          LODWORD(v18->m_ChildListHead.Flink) = 1146058822;
          v18 = (FxObject *)((char *)v18 + 48);
        }
        memset(&v18[1].24, 0, 0x30uLL);
        *(_QWORD *)&v18[1].m_ObjectFlags = v18;
        if ( KeyAttributes )
        {
          v30 = KeyAttributes->ContextTypeInfo;
          if ( v30 )
          {
            ContextSize = KeyAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v30->ContextSize;
            memset(&v18[1].m_ChildEntry, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v18[1].m_SpinLock.m_Lock = (unsigned __int64)KeyAttributes->ContextTypeInfo;
        }
      }
      if ( !v18 )
        return -1073741670;
      *(_DWORD *)&v18->m_Type = 8392710;
      v18->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
      v18->m_Globals = FxDriverGlobals;
      v18->m_SpinLock.m_Lock = 0LL;
      v18->m_SpinLock.m_DbgFlagIsInitialized = 1;
      FxObject::Construct(v18, 0);
      v18->m_ObjectFlags |= 0x11u;
      v18->__vftable = (FxObject_vtbl *)FxRegKey::`vftable';
      v18[1].__vftable = 0LL;
      *(_QWORD *)&v18[1].m_Type = 0LL;
      v18[1].m_Globals = FxDriverGlobals;
      if ( Device )
        v18->m_DeviceBase = (FxDeviceBase *)Device;
      Driver = 0LL;
      Size = 0LL;
      if ( v18->m_ObjectSize )
      {
        if ( !KeyAttributes )
          goto LABEL_77;
        if ( KeyAttributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks(v18, ObjectLock);
          Driver = (FxObject *)Size;
        }
        ParentObject = (_FX_DRIVER_GLOBALS *)KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(v18->m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&Size);
          Driver = (FxObject *)Size;
        }
        else
        {
LABEL_77:
          if ( !v18->m_ParentObject )
          {
            m_Globals = v18->m_Globals;
            if ( m_Globals->Driver != v18 )
            {
              Driver = m_Globals->Driver;
              Size = (unsigned __int64)Driver;
            }
          }
        }
        if ( Driver )
        {
          v22 = KeAcquireSpinLockRaiseToDpc(&v18->m_SpinLock.m_Lock);
          if ( v18->m_ObjectState != 1 )
          {
            FxObject::TraceDroppedEvent(v18, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&v18->m_SpinLock.m_Lock, v22);
            v26 = -1073741738;
            goto LABEL_58;
          }
          if ( v18->m_ParentObject )
          {
            KeReleaseSpinLock(&v18->m_SpinLock.m_Lock, v22);
            v26 = -1071644147;
            goto LABEL_58;
          }
          v23 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
          if ( Driver->m_ObjectState == 1 )
          {
            Blink = Driver->m_ChildListHead.Blink;
            p_m_ChildEntry = &v18->m_ChildEntry;
            if ( Blink->Flink != &Driver->m_ChildListHead )
              __fastfail(3u);
            p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
            v18->m_ChildEntry.Blink = Blink;
            Blink->Flink = p_m_ChildEntry;
            Driver->m_ChildListHead.Blink = p_m_ChildEntry;
            if ( !v18->m_DeviceBase )
              v18->m_DeviceBase = Driver->m_DeviceBase;
            KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v23);
            v26 = 0;
            v18->m_ParentObject = Driver;
          }
          else
          {
            FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v23);
            v26 = -1073741738;
          }
          KeReleaseSpinLock(&v18->m_SpinLock.m_Lock, v22);
          if ( v26 < 0 )
            goto LABEL_58;
          v10 = DeviceInstanceKeyType;
        }
        if ( KeyAttributes )
        {
          m_ObjectSize = v18->m_ObjectSize;
          if ( m_ObjectSize )
            v33 = (char *)v18 + m_ObjectSize;
          else
            v33 = 0LL;
          EvtDestroyCallback = KeyAttributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v33 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = KeyAttributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v33 + 2) = EvtCleanupCallback;
            v18->m_ObjectFlags |= 0x400u;
          }
        }
        v18->m_ObjectFlags |= 8u;
        if ( v18->m_ObjectSize )
          v9 = (WDFKEY__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( v18->m_Globals->FxVerifierOn )
          FxObject::Vf_VerifyLeakDetectionConsiderObject(v18, ParentObject);
        v26 = IoOpenDeviceRegistryKey(DeviceObject, v10, DesiredAccess, &hKey);
        if ( v26 >= 0 )
        {
          *(_QWORD *)&v18[1].m_Type = hKey;
          *Key = v9;
          return v26;
        }
      }
      else
      {
        v26 = -1073741816;
      }
LABEL_58:
      FxObject::DeleteFromFailedCreate(v18);
      return v26;
    }
  }
  v27 = *(_WORD *)(Device + 10);
  v28 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v27 )
    v28 = 0LL;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, v28, -1073741436);
  return -1073741436;
}
