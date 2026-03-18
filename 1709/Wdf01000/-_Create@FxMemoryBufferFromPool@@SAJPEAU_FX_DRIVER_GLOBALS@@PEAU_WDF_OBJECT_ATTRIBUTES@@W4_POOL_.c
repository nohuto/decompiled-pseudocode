/*
 * XREFs of ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0011150
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0003BB0 (imp_WdfMemoryCreate.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C001802C (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 * Callees:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001166C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0011B2C (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxMemoryBufferFromPool::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Buffer)
{
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  unsigned __int8 IsPagedPoolType; // r14
  FxDeviceBase *v12; // rsi
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rbx
  SIZE_T v15; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType )
    v12 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, v10);
  else
    v12 = 0LL;
  v13 = (FxMemoryObject *)FxObjectHandleAlloc(
                            FxDriverGlobals,
                            ExDefaultNonPagedPoolType,
                            0x80uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
  v14 = v13;
  if ( v12 )
  {
    if ( v13 )
    {
      FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
      v14->m_DeviceBase = v12;
      v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
LABEL_6:
      v14[1].FxObject::__vftable = 0LL;
      v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      goto LABEL_7;
    }
  }
  else if ( v13 )
  {
    FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
    v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    goto LABEL_6;
  }
  v14 = 0LL;
LABEL_7:
  if ( !v14 )
    return 3221225626LL;
  v15 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v15, PoolTag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::DeleteFromFailedCreate(v14);
    return 3221225626LL;
  }
  if ( IsPagedPoolType )
    v14->m_ObjectFlags |= 0x11u;
  *Buffer = v14;
  return 0LL;
}
