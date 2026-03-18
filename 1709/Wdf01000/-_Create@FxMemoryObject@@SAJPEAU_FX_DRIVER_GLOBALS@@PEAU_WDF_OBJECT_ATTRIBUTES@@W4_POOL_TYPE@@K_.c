/*
 * XREFs of ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C001802C
 * Callers:
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0011398 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C00184B8 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00849D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C008BE10 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0011150 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001FE44 (-Construct@FxObject@@AEAAXE@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C0081E58 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

__int64 __fastcall FxMemoryObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Object)
{
  unsigned __int64 v6; // r15
  ULONG Tag; // ebp
  _POOL_TYPE v8; // ebx
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r14
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = BufferSize;
  Tag = PoolTag;
  v8 = PoolType;
  if ( BufferSize >= 0x1000
    || FxDriverGlobals->FxVerifierOn && FxDriverGlobals->FxPoolTrackingOn
    || (PoolType & 0xFFFFFEFF) == 1
    || (PoolType & 0xFFFFFEFF) == 5 )
  {
    return FxMemoryBufferFromPool::_Create(FxDriverGlobals, Attributes, PoolType, PoolTag, BufferSize, Object);
  }
  if ( PoolType == NonPagedPoolMustSucceed
    || PoolType == NonPagedPoolCacheAligned
    || PoolType == NonPagedPoolCacheAlignedMustS )
  {
    v8 = ExDefaultNonPagedPoolType;
  }
  if ( !PoolTag )
    Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x78u, v6, ContextSize, &BufferSize) < 0 )
    goto LABEL_26;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v13 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v8, BufferSize, Tag, Caller);
  v14 = v13;
  if ( v13 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v13, 0, 0x30uLL);
      *((_DWORD *)v14 + 8) = 1146058822;
      v14 += 6;
    }
    v15 = (_QWORD *)((char *)v14 + (unsigned __int16)(((v6 + 15) & 0xFFF0) + 128));
    memset(v15, 0, 0x30uLL);
    *v15 = v14;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(v15 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v15[4] = Attributes->ContextTypeInfo;
    }
  }
  if ( v14 )
  {
    v14[2] = FxDriverGlobals;
    *v14 = &FxObject::`vftable';
    *((_WORD *)v14 + 4) = 4096;
    *((_WORD *)v14 + 5) = ((v6 + 15) & 0xFFF0) + 128;
    v14[7] = 0LL;
    *((_BYTE *)v14 + 48) = 1;
    FxObject::Construct((FxObject *)v14, 0);
    v14[14] = v6;
    *v14 = FxMemoryObject::`vftable'{for `FxObject'};
    v14[13] = FxMemoryObject::`vftable'{for `IFxMemory'};
    if ( (v14[3] & 0x80) != 0 )
      FxObject::AllocateTagTracker((FxObject *)v14, 0x100Au);
    *v14 = FxMemoryBuffer::`vftable'{for `FxObject'};
    v14[13] = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  }
  else
  {
LABEL_26:
    v14 = 0LL;
  }
  if ( v14 )
    *Object = (FxMemoryObject *)v14;
  return v14 == 0LL ? 0xC000009A : 0;
}
