/*
 * XREFs of imp_WdfMemoryCreate @ 0x1C0003BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0011150 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C0081E58 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfMemoryCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory,
        void **Buffer)
{
  _FX_DRIVER_GLOBALS *DriverName; // r14
  unsigned int v9; // edi
  unsigned __int64 ParentObject; // rdi
  __int64 v12; // rcx
  FxObject *v13; // rbx
  FxObject_vtbl *v14; // rax
  int (__fastcall *QueryInterface)(FxDevice *, FxQueryInterfaceParams *); // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // al
  unsigned __int64 v20; // r15
  int result; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 ContextSizeOverride; // r8
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int16 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  void *Caller; // rax
  __int64 v29; // r10
  int v30; // ebx
  FxMemoryObject *v31; // rax
  FxMemoryObject *v32; // rdi
  _QWORD *v33; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v34; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  bool v36; // zf
  FxObject *Driver; // rbx
  unsigned __int64 v38; // r14
  __int64 v39; // rcx
  FxObject_vtbl *v40; // rax
  int (__fastcall *v41)(FxDevice *, FxQueryInterfaceParams *); // rax
  unsigned int v42; // r8d
  unsigned __int16 v43; // r9
  KIRQL v44; // al
  KIRQL v45; // r12
  KIRQL v46; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v49; // r14d
  unsigned __int16 m_ObjectSize; // ax
  char *v51; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFMEMORY__ *v54; // rbx
  void **v55; // rbx
  _FX_DRIVER_GLOBALS *v56; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  bool v60; // cf
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 ContextSize; // r8
  const _GUID *Tag; // [rsp+20h] [rbp-40h]
  FxObject **p_pParent; // [rsp+50h] [rbp-10h] BYREF
  __int16 v67; // [rsp+58h] [rbp-8h]
  __int16 v68; // [rsp+5Ah] [rbp-6h]
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *pParent; // [rsp+A0h] [rbp+40h] BYREF
  FxMemoryObject *pBuffer; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v72; // [rsp+B8h] [rbp+58h]

  v72 = PoolTag;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v9 = PoolTag;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v12) = 0;
        v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v12 = LOWORD(v13->__vftable);
          v13 = (FxObject *)((char *)v13 - v12);
        }
        if ( v13->m_Type == 4096 )
        {
          pParent = v13;
        }
        else
        {
          pParent = 0LL;
          p_pParent = &pParent;
          v14 = v13->__vftable;
          v67 = 4096;
          v68 = v12;
          QueryInterface = (int (__fastcall *)(FxDevice *, FxQueryInterfaceParams *))v14->QueryInterface;
          if ( QueryInterface == FxDevice::QueryInterface )
          {
            pParent = v13;
          }
          else
          {
            if ( QueryInterface((FxDevice *)v13, (FxQueryInterfaceParams *)&p_pParent) < 0 )
            {
              WPP_IFR_SF_qDqD(v13->m_Globals, v16, v17, v18, Tag, (const void *)ParentObject, 0x1000u, v13, v13->m_Type);
              FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
            }
            v13 = pParent;
          }
        }
        DriverName = v13->m_Globals;
      }
      v9 = v72;
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
        (unsigned __int8)FxDevice::QueryInterface,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  if ( !Memory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v19 = 1;
  if ( (PoolType & 0xFFFFFEFF) != 1 && (PoolType & 0xFFFFFEFF) != 5 )
    v19 = 2;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > v19 )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, v19);
      FxVerifierDbgBreakPoint(DriverName);
      return -1073741808;
    }
  }
  v20 = BufferSize;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  *Memory = 0LL;
  result = FxValidateObjectAttributes(DriverName, Attributes, 0);
  if ( result >= 0 )
  {
    if ( !v9 )
      v9 = DriverName->Tag;
    if ( DriverName->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, v9);
    if ( v20 >= 0x1000
      || DriverName->FxVerifierOn && DriverName->FxPoolTrackingOn
      || (PoolType & 0xFFFFFEFF) == 1
      || (PoolType & 0xFFFFFEFF) == 5 )
    {
      result = FxMemoryBufferFromPool::_Create(DriverName, Attributes, PoolType, v9, v20, &pBuffer);
LABEL_92:
      v32 = pBuffer;
      goto LABEL_50;
    }
    if ( PoolType <= NonPagedPoolCacheAlignedMustS
      && (PoolType == NonPagedPoolMustSucceed
       || PoolType == NonPagedPoolCacheAligned
       || PoolType == NonPagedPoolCacheAlignedMustS) )
    {
      PoolType = ExDefaultNonPagedPoolType;
    }
    if ( !v9 )
      v9 = DriverName->Tag;
    ContextSizeOverride = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v25 = v20 + 15;
    v26 = (((_DWORD)v20 + 15) & 0xFFF0u) + 128;
    v27 = v26 + 48;
    pBuffer = (FxMemoryObject *)(v26 + 48);
    if ( v26 + 48 < v26 )
    {
      pBuffer = (FxMemoryObject *)-1LL;
      v30 = -1073741675;
    }
    else
    {
      Caller = 0LL;
      v29 = -1LL;
      v30 = 0;
      if ( ContextSizeOverride )
      {
        v58 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v58 < ContextSizeOverride )
        {
LABEL_123:
          result = -1073741670;
          goto LABEL_92;
        }
        v59 = v58 + v27;
        v22 = v27;
        v60 = v58 + v27 < v27;
        v61 = -1LL;
        if ( !v60 )
          v61 = v59;
        v27 = v61;
        pBuffer = (FxMemoryObject *)v61;
        v30 = v59 < v22 ? 0xC0000095 : 0;
        Caller = 0LL;
      }
      if ( v30 >= 0 )
      {
        if ( DriverName->FxVerifierHandle )
        {
          v62 = v27 + 48;
          v63 = v27;
          if ( v27 + 48 >= v27 )
            v29 = v27 + 48;
          v27 = v29;
          pBuffer = (FxMemoryObject *)v29;
          v30 = v62 < v63 ? 0xC0000095 : 0;
          Caller = 0LL;
        }
        if ( v30 >= 0 )
        {
          if ( DriverName->FxPoolTrackingOn )
            Caller = retaddr;
          v31 = (FxMemoryObject *)FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, PoolType, v27, v9, Caller);
          v32 = v31;
          if ( v31 )
          {
            if ( DriverName->FxVerifierHandle )
            {
              memset(v31, 0, 0x30uLL);
              LODWORD(v32->m_ChildListHead.Flink) = 1146058822;
              v32 = (FxMemoryObject *)((char *)v32 + 48);
            }
            v22 = 128LL;
            v33 = (FxMemoryObject_vtbl **)((char *)&v32->FxObject::__vftable + (unsigned __int16)((v25 & 0xFFF0) + 128));
            v33[1] = 0LL;
            v33[2] = 0LL;
            v33[3] = 0LL;
            v33[4] = 0LL;
            v33[5] = 0LL;
            *v33 = v32;
            if ( Attributes )
            {
              v34 = Attributes->ContextTypeInfo;
              if ( v34 )
              {
                ContextSize = Attributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v34->ContextSize;
                memset(v33 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                v22 = 128LL;
              }
              v33[4] = Attributes->ContextTypeInfo;
            }
          }
          else
          {
            v22 = 128LL;
          }
          if ( v32 )
          {
            v32->m_Globals = DriverName;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)&FxObject::`vftable';
            v32->m_ObjectSize = (v25 & 0xFFF0) + 128;
            v32->m_Type = 4096;
            v32->m_SpinLock.m_Lock = 0LL;
            v32->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v32->m_Refcnt = 1;
            *(_DWORD *)&v32->m_ObjectFlags = 0x10000;
            v32->m_ParentObject = 0LL;
            v32->m_ChildListHead.Blink = &v32->m_ChildListHead;
            v32->m_ChildListHead.Flink = &v32->m_ChildListHead;
            v32->m_ChildEntry.Blink = &v32->m_ChildEntry;
            v32->m_ChildEntry.Flink = &v32->m_ChildEntry;
            m_Globals = v32->m_Globals;
            v32->m_DisposeSingleEntry.Next = 0LL;
            v32->m_DeviceBase = 0LL;
            if ( m_Globals->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v32, (_FX_DRIVER_GLOBALS *)0x80, 0);
            v32->m_BufferSize = v20;
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
            if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
              FxObject::AllocateTagTracker(v32, 0x100Au);
            v32->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            v32->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            result = 0;
LABEL_50:
            if ( result < 0 )
              return result;
            v36 = v32->m_ObjectSize == 0;
            Driver = 0LL;
            pParent = 0LL;
            if ( v36 )
            {
              v49 = -1073741816;
            }
            else
            {
              if ( !Attributes )
                goto LABEL_136;
              if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v32, ObjectLock);
                Driver = pParent;
              }
              v38 = (unsigned __int64)Attributes->ParentObject;
              if ( v38 )
              {
                LOWORD(v39) = 0;
                Driver = (FxObject *)(~v38 & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (v38 & 1) != 0 )
                {
                  v39 = LOWORD(Driver->__vftable);
                  Driver = (FxObject *)((char *)Driver - v39);
                }
                if ( Driver->m_Type == 4096 )
                {
                  pParent = Driver;
                }
                else
                {
                  pParent = 0LL;
                  p_pParent = &pParent;
                  v40 = Driver->__vftable;
                  v68 = v39;
                  v67 = 4096;
                  v41 = (int (__fastcall *)(FxDevice *, FxQueryInterfaceParams *))v40->QueryInterface;
                  if ( v41 == FxDevice::QueryInterface )
                  {
                    pParent = Driver;
                  }
                  else
                  {
                    if ( v41((FxDevice *)Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                    {
                      WPP_IFR_SF_qDqD(
                        Driver->m_Globals,
                        v22,
                        v42,
                        v43,
                        Tag,
                        (const void *)v38,
                        0x1000u,
                        Driver,
                        Driver->m_Type);
                      FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v38, 0x1000uLL);
                    }
                    Driver = pParent;
                  }
                }
              }
              else
              {
LABEL_136:
                if ( !v32->m_ParentObject )
                {
                  v56 = v32->m_Globals;
                  if ( (FxMemoryObject *)v56->Driver != v32 )
                  {
                    Driver = v56->Driver;
                    pParent = Driver;
                  }
                }
              }
              if ( !Driver )
                goto LABEL_71;
              v44 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
              v45 = v44;
              if ( v32->m_ObjectState == 1 )
              {
                if ( v32->m_ParentObject )
                {
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v44);
                  v49 = -1071644147;
                }
                else
                {
                  v46 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v32->m_ChildEntry;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                    v32->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v32->m_DeviceBase )
                      v32->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    v49 = 0;
                    v32->m_ParentObject = Driver;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    v49 = -1073741738;
                  }
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v45);
                  if ( v49 >= 0 )
                  {
LABEL_71:
                    if ( Attributes )
                    {
                      m_ObjectSize = v32->m_ObjectSize;
                      if ( m_ObjectSize )
                        v51 = (char *)v32 + m_ObjectSize;
                      else
                        v51 = 0LL;
                      EvtDestroyCallback = Attributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v51 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = Attributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v51 + 2) = EvtCleanupCallback;
                        v32->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v32->m_ObjectFlags |= 8u;
                    if ( v32->m_ObjectSize )
                      v54 = (WDFMEMORY__ *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v54 = 0LL;
                    if ( v32->m_Globals->FxVerifierOn )
                      FxObject::Vf_VerifyLeakDetectionConsiderObject(v32, (_FX_DRIVER_GLOBALS *)v22);
                    v49 = 0;
                    *Memory = v54;
                    v55 = Buffer;
                    if ( Buffer )
                      *v55 = (void *)v32->GetBuffer(&v32->IFxMemory);
                    return v49;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v32, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v45);
                v49 = -1073741738;
              }
            }
            FxObject::DeleteFromFailedCreate(v32);
            return v49;
          }
          goto LABEL_123;
        }
      }
    }
    WPP_IFR_SF_DDxd(
      DriverName,
      v22,
      ContextSizeOverride,
      v27,
      Tag,
      0x78u,
      (unsigned __int16)v20,
      ContextSizeOverride,
      v30);
    goto LABEL_123;
  }
  return result;
}
