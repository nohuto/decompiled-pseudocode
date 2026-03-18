/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C001C710
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00230C0 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C007A8F0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Construct@FxIoTarget@@AEAAXXZ @ 0x1C00236B8 (-Construct@FxIoTarget@@AEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002434C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0087EEC (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *v6; // rdi
  _POOL_TYPE v7; // ebx
  ULONG Tag; // ebp
  void *Caller; // rax
  FxIoTarget *v10; // rax
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxIoTarget *v12; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int v14; // eax
  int v15; // edi
  KIRQL v16; // al
  KIRQL v17; // r15
  KIRQL v18; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  _FX_DRIVER_GLOBALS *v21; // rdx
  _FX_DRIVER_GLOBALS *v22; // rax
  FxIoTarget *v24; // rax
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // r9
  const void *v28; // r14
  bool v29; // zf
  unsigned __int16 v30; // ax
  unsigned __int16 m_ObjectSize; // ax
  const void *v32; // r14
  FxObjectType ObjectType; // [rsp+30h] [rbp-48h]
  _FX_DRIVER_GLOBALS **v34; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 Size; // [rsp+98h] [rbp+20h] BYREF

  p_m_Globals = &this->m_Globals;
  v34 = &this->m_Globals;
  if ( SelfTarget )
  {
    v24 = (FxIoTarget *)FxObjectHandleAlloc(
                          *p_m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x160uLL,
                          0,
                          0LL,
                          0,
                          FxObjectTypeExternal);
    v12 = v24;
    if ( v24 )
    {
      FxIoTarget::FxIoTarget(v24, *p_m_Globals, 0x160u, 0x1205u);
      v12[1].__vftable = 0LL;
      v12->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
      goto LABEL_14;
    }
LABEL_48:
    v12 = 0LL;
    goto LABEL_49;
  }
  v6 = *p_m_Globals;
  v7 = ExDefaultNonPagedPoolType;
  Tag = (*p_m_Globals)->Tag;
  if ( (int)FxCalculateObjectTotalSize2(*p_m_Globals, 0x158u, 0, 0LL, &Size) < 0 )
    goto LABEL_48;
  if ( v6->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v10 = (FxIoTarget *)FxPoolAllocator(v6, &v6->FxPoolFrameworks, v7, Size, Tag, Caller);
  v12 = v10;
  if ( v10 )
  {
    if ( v6->FxVerifierHandle )
    {
      memset(v10, 0, 0x30uLL);
      LODWORD(v12->m_ChildListHead.Flink) = 1146058822;
      v12 = (FxIoTarget *)((char *)v12 + 48);
    }
    memset(&v12[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v12[1].m_Type = v12;
  }
  if ( !v12 )
    goto LABEL_48;
  v12->m_Globals = *p_m_Globals;
  v12->__vftable = (FxIoTarget_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&v12->m_Type = 23073280;
  v12->m_SpinLock.m_Lock = 0LL;
  v12->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v12->m_Refcnt = 1;
  *(_DWORD *)&v12->m_ObjectFlags = 0x10000;
  v12->m_ParentObject = 0LL;
  v12->m_ChildListHead.Blink = &v12->m_ChildListHead;
  v12->m_ChildListHead.Flink = &v12->m_ChildListHead;
  v12->m_ChildEntry.Blink = &v12->m_ChildEntry;
  v12->m_ChildEntry.Flink = &v12->m_ChildEntry;
  m_Globals = v12->m_Globals;
  v12->m_DisposeSingleEntry.Next = 0LL;
  v12->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v12, v11, 0);
  v12->__vftable = (FxIoTarget_vtbl *)FxNonPagedObject::`vftable';
  v12->m_NPLock.m_Lock = 0LL;
  v12->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
  {
    v25 = v12->m_Globals;
    if ( v25->FxVerifierLock )
    {
      Size = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&Size, v25, v12);
      v12[-1].m_TargetDevice = (_DEVICE_OBJECT *)Size;
    }
  }
  v12->__vftable = (FxIoTarget_vtbl *)FxIoTarget::`vftable';
  v12->m_TransactionedEntry.m_Transaction = FxTransactionActionNothing;
  v12->m_TransactionedEntry.m_TransactionedObject = 0LL;
  v12->m_TransactionedEntry.m_ListLink.Blink = &v12->m_TransactionedEntry.m_ListLink;
  v12->m_TransactionedEntry.m_ListLink.Flink = &v12->m_TransactionedEntry.m_ListLink;
  v12->m_TransactionedEntry.m_TransactionLink.Blink = &v12->m_TransactionedEntry.m_TransactionLink;
  v12->m_TransactionedEntry.m_TransactionLink.Flink = &v12->m_TransactionedEntry.m_TransactionLink;
  v12->m_SentIoEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&v12->m_SentIoEvent.m_Event.m_Event, SynchronizationEvent, 0);
  v12->m_SentIoEvent.m_Event.m_DbgFlagIsInitialized = 1;
  v12->m_PendedQueue.m_Queue.Blink = &v12->m_PendedQueue.m_Queue;
  v12->m_PendedQueue.m_Queue.Flink = &v12->m_PendedQueue.m_Queue;
  v12->m_PendedQueue.m_LockObject = 0LL;
  v12->m_PendedQueue.m_CancelCallback = 0LL;
  v12->m_PendedQueue.m_RequestCount = 0;
  FxIoTarget::Construct(v12);
LABEL_14:
  if ( !v12 )
  {
LABEL_49:
    v15 = -1073741670;
    m_ObjectSize = this->m_ObjectSize;
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v32 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, v32, -1073741670);
    goto LABEL_29;
  }
  v14 = this->AddIoTarget(this, v12);
  v15 = v14;
  if ( v14 < 0 )
  {
    v26 = this->m_ObjectSize;
    v27 = 14;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    ObjectType = v14;
    v29 = v26 == 0;
  }
  else
  {
    v15 = FxIoTarget::Init(v12, this);
    if ( v15 < 0 )
    {
      v27 = 15;
    }
    else
    {
      if ( v12->m_ObjectSize )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(&v12->m_SpinLock.m_Lock);
        v17 = v16;
        if ( v12->m_ObjectState == 1 )
        {
          if ( v12->m_ParentObject )
          {
            KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v16);
            v15 = -1071644147;
          }
          else
          {
            v18 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
            if ( this->m_ObjectState == 1 )
            {
              Blink = this->m_ChildListHead.Blink;
              p_m_ChildEntry = &v12->m_ChildEntry;
              if ( Blink->Flink != &this->m_ChildListHead )
                __fastfail(3u);
              p_m_ChildEntry->Flink = &this->m_ChildListHead;
              v12->m_ChildEntry.Blink = Blink;
              Blink->Flink = p_m_ChildEntry;
              this->m_ChildListHead.Blink = p_m_ChildEntry;
              if ( !v12->m_DeviceBase )
                v12->m_DeviceBase = this->m_DeviceBase;
              KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
              v15 = 0;
              v12->m_ParentObject = this;
            }
            else
            {
              FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
              KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
              v15 = -1073741738;
            }
            KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v17);
            if ( v15 >= 0 )
            {
              v22 = v12->m_Globals;
              v12->m_ObjectFlags |= 8u;
              if ( v22->FxVerifierOn )
                FxObject::Vf_VerifyLeakDetectionConsiderObject(v12, v21);
              v15 = 0;
              goto LABEL_29;
            }
          }
        }
        else
        {
          FxObject::TraceDroppedEvent(v12, FxObjectDroppedEventAssignParentObject);
          KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v17);
          v15 = -1073741738;
        }
        p_m_Globals = v34;
      }
      else
      {
        v15 = -1073741816;
      }
      v27 = 16;
    }
    v30 = this->m_ObjectSize;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v29 = v30 == 0;
    ObjectType = v15;
  }
  if ( v29 )
    v28 = 0LL;
  WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, v27, WPP_FxDeviceBase_cpp_Traceguids, v28, ObjectType);
  FxObject::DeleteFromFailedCreate(v12);
  v12 = 0LL;
LABEL_29:
  *Target = v12;
  return (unsigned int)v15;
}
