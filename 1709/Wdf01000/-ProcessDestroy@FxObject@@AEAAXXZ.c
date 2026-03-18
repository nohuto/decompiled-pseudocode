/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000B2A0
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006960 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0082AC4 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

void __fastcall FxObject::ProcessDestroy(
        FxObject *this,
        FxObjectDebugLeakDetection *FxVerifyLeakDetection,
        unsigned int a3)
{
  FxRegKey *v3; // rbx
  FxTagTracker *m_Lock; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v7)(unsigned __int64); // rax
  void (__fastcall *v8)(unsigned __int64); // rax
  unsigned __int16 v9; // ax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  void (__fastcall *SelfDestruct)(FxObject *, unsigned int); // rdx
  void *(__fastcall *v13)(FxRegKey *, unsigned int); // rax
  void *m_Key; // rcx
  FxObject_vtbl *v15; // rcx
  FX_POOL_TRACKER *v16; // rdi
  _MDL *v17; // rcx
  FxObject *Blink; // rcx
  __int64 v19; // rdi
  FxRequestTimer *v20; // rcx
  FxObject *v21; // rcx
  FxVerifierLock *Next; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  v3 = (FxRegKey *)this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
  }
  else
  {
    m_Lock = 0LL;
  }
  m_ObjectSize = v3->m_ObjectSize;
  if ( m_ObjectSize && (v3->m_ObjectFlags & 8) != 0 )
  {
    for ( i = (FxRegKey_vtbl **)((char *)&v3->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v7 = (void (__fastcall *)(unsigned __int64))i[2];
      if ( v7 )
      {
        v7((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[2] = 0LL;
      }
      v8 = (void (__fastcall *)(unsigned __int64))i[3];
      if ( v8 )
      {
        v8((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[3] = 0LL;
      }
    }
    v9 = v3->m_ObjectSize;
    LOBYTE(FxVerifyLeakDetection) = 1;
    if ( v9 )
    {
      v10 = (FxRegKey_vtbl **)((char *)&v3->__vftable + v9);
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)v10[1];
          if ( !(_BYTE)FxVerifyLeakDetection )
            FxPoolFree(v10);
          LOBYTE(FxVerifyLeakDetection) = 0;
          v10 = v11;
        }
        while ( v11 );
      }
    }
  }
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(v3[-1].m_Lock) )
    {
      _InterlockedDecrement(&v3->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( v3->m_Type == 4098
        && _InterlockedExchangeAdd(
             &v3->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
             0xFFFFFFFF) != 1 )
      {
        FxVerifyLeakDetection = v3->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
      }
    }
  }
  if ( m_Lock )
  {
    v3[-1].m_ChildEntry.Blink = 0LL;
    FxTagTracker::`scalar deleting destructor'(m_Lock, (unsigned int)FxVerifyLeakDetection);
  }
  SelfDestruct = (void (__fastcall *)(FxObject *, unsigned int))v3->SelfDestruct;
  if ( SelfDestruct != FxObject::SelfDestruct )
  {
    v3->SelfDestruct(v3);
    return;
  }
  v13 = (void *(__fastcall *)(FxRegKey *, unsigned int))v3->~FxObject;
  if ( v13 == FxRegKey::`scalar deleting destructor' )
  {
    v3->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
    m_Key = v3->m_Key;
    if ( m_Key )
    {
      ZwClose(m_Key);
      v3->m_Key = 0LL;
    }
    v15 = (FxObject_vtbl *)v3->m_Lock;
    v3->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
    if ( v15 )
    {
      FxPoolFree(v15);
      v3->m_Lock = 0LL;
    }
    FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRegKey *)((char *)v3 - 48);
    if ( !v3 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v3 & 0xFFF) != 0 )
    {
LABEL_29:
      v16 = (FX_POOL_TRACKER *)v3[-1].m_Key;
      if ( v3[-1].m_Globals->FxPoolTrackingOn )
      {
        if ( FxIsPagedPoolType(v16->PoolType) )
          FxPoolRemovePagedAllocateTracker(v16);
        else
          FxPoolRemoveNonPagedAllocateTracker(v16);
        memset(v16, 0, v16->Size + 64);
      }
      ExFreePoolWithTag(v16, 0);
      return;
    }
LABEL_57:
    ExFreePoolWithTag(v3, 0);
    return;
  }
  if ( (char *)v13 != (char *)FxRequest::`scalar deleting destructor' )
  {
    if ( (char *)v13 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
    {
      v13(v3, 1u);
      return;
    }
    v3->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
    v3->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
    FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRegKey *)((char *)v3 - 48);
    if ( !v3 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v3 & 0xFFF) != 0 )
      goto LABEL_29;
    goto LABEL_57;
  }
  v3->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
  v17 = (_MDL *)v3[1].m_Key;
  if ( v17 )
  {
    if ( v3->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
      FxMdlFreeDebug(v3->FxPagedObject::FxObject::m_Globals, (_MDL *)v3[1].m_Key);
    else
      IoFreeMdl(v17);
  }
  Blink = (FxObject *)v3[1].m_ChildListHead.Blink;
  v19 = *(_QWORD *)&v3[1].m_ObjectFlags;
  if ( Blink )
  {
    if ( v19 )
      ((void (__fastcall *)(FxObject *, FxRegKey *))Blink->AddRefOverride)(Blink, v3);
    v21 = (FxObject *)v3[1].m_ChildListHead.Blink;
    if ( v21 )
      ((void (__fastcall *)(FxObject *, __int64))v21->SelfDestruct)(v21, 1LL);
  }
  if ( v19 && BYTE5(v3[1].m_ChildEntry.Blink) == 1 )
    IoFreeIrp(*(PIRP *)&v3[1].m_ObjectFlags);
  v20 = *(FxRequestTimer **)&v3[1].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v20 )
    FxRequestTimer::`scalar deleting destructor'(v20, (unsigned int)SelfDestruct);
  v3->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
  {
    Next = (FxVerifierLock *)v3[-1].m_DisposeSingleEntry.Next;
    if ( Next )
    {
      FxVerifierLock::`scalar deleting destructor'(Next, (unsigned int)SelfDestruct);
      v3[-1].m_DisposeSingleEntry.Next = 0LL;
    }
  }
  LOBYTE(v3->m_Lock) = 0;
  FxObject::~FxObject(v3, (unsigned int)SelfDestruct, a3);
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
    v3 = (FxRegKey *)((char *)v3 - 48);
  FxPoolFree(v3);
}
