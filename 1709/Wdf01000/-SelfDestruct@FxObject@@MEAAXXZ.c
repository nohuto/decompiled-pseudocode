/*
 * XREFs of ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C000AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

void __fastcall FxObject::SelfDestruct(FxObject *this, unsigned int a2)
{
  FxObject *v2; // rbx
  void (__fastcall *v3)(FxObject *); // rax
  void *v4; // rcx
  FxObject_vtbl *v5; // rcx
  FX_POOL_TRACKER *Next; // rdi
  _MDL *Flink; // rcx
  FxObject *m_ParentObject; // rcx
  __int64 v9; // rdi
  FxRequestTimer *v10; // rcx
  FxObject *v11; // rcx
  FxVerifierLock *v12; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !this )
    return;
  v2 = this;
  v3 = this->~FxObject;
  if ( (char *)v3 == (char *)FxRegKey::`scalar deleting destructor' )
  {
    v4 = *(void **)&this[1].m_Type;
    v2->__vftable = (FxObject_vtbl *)FxRegKey::`vftable';
    if ( v4 )
    {
      ZwClose(v4);
      *(_QWORD *)&v2[1].m_Type = 0LL;
    }
    v5 = v2[1].__vftable;
    v2->__vftable = (FxObject_vtbl *)FxPagedObject::`vftable';
    if ( v5 )
    {
      FxPoolFree(v5);
      v2[1].__vftable = 0LL;
    }
    FxObject::~FxObject(v2);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxObject *)((char *)v2 - 48);
    if ( !v2 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
    {
LABEL_11:
      Next = (FX_POOL_TRACKER *)v2[-1].m_DisposeSingleEntry.Next;
      if ( LOBYTE(v2[-1].m_DeviceBase[1].m_ParentObject) )
      {
        if ( FxIsPagedPoolType(Next->PoolType) )
          FxPoolRemovePagedAllocateTracker(Next);
        else
          FxPoolRemoveNonPagedAllocateTracker(Next);
        memset(Next, 0, Next->Size + 64);
      }
      ExFreePoolWithTag(Next, 0);
      return;
    }
LABEL_46:
    ExFreePoolWithTag(v2, 0);
    return;
  }
  if ( (char *)v3 != (char *)FxRequest::`scalar deleting destructor' )
  {
    if ( (char *)v3 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
    {
      ((void (__fastcall *)(FxObject *, __int64))v3)(this, 1LL);
      return;
    }
    this->__vftable = (FxObject_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
    this[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
    FxObject::~FxObject(this);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxObject *)((char *)v2 - 48);
    if ( !v2 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
      goto LABEL_11;
    goto LABEL_46;
  }
  Flink = (_MDL *)this[2].m_ChildListHead.Flink;
  v2->__vftable = (FxObject_vtbl *)FxRequestBase::`vftable';
  if ( Flink )
  {
    if ( v2->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(v2->m_Globals, Flink);
    else
      IoFreeMdl(Flink);
  }
  m_ParentObject = v2[1].m_ParentObject;
  v9 = *(_QWORD *)&v2[1].m_SpinLock.m_DbgFlagIsInitialized;
  if ( m_ParentObject )
  {
    if ( v9 )
      ((void (__fastcall *)(FxObject *, FxObject *))m_ParentObject->AddRefOverride)(m_ParentObject, v2);
    v11 = v2[1].m_ParentObject;
    if ( v11 )
      ((void (__fastcall *)(FxObject *, __int64))v11->SelfDestruct)(v11, 1LL);
  }
  if ( v9 && BYTE5(v2[2].__vftable) == 1 )
    IoFreeIrp(*(PIRP *)&v2[1].m_SpinLock.m_DbgFlagIsInitialized);
  v10 = (FxRequestTimer *)v2[1].m_ChildEntry.Flink;
  if ( v10 )
    FxRequestTimer::`scalar deleting destructor'(v10, a2);
  v2->__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
  {
    v12 = (FxVerifierLock *)v2[-1].m_ParentObject;
    if ( v12 )
    {
      FxVerifierLock::`scalar deleting destructor'(v12, a2);
      v2[-1].m_ParentObject = 0LL;
    }
  }
  LOBYTE(v2[1].__vftable) = 0;
  FxObject::~FxObject(v2);
  if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    v2 = (FxObject *)((char *)v2 - 48);
  FxPoolFree(v2);
}
