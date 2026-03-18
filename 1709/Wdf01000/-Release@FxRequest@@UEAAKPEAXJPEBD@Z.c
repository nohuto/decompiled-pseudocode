/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008E50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, FxObjectDebugLeakDetection *Tag, __int64 Line, const char *File)
{
  unsigned __int8 m_Reserved; // r15
  unsigned __int8 m_IrpAllocation; // r14
  unsigned __int8 m_CanComplete; // cl
  unsigned __int32 v8; // esi
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v11; // r13
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rdi
  void (__fastcall *v14)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  void (__fastcall *v15)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  unsigned __int16 v16; // ax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  void (__fastcall *v19)(FxRequestFromLookaside *); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rbp
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v26; // rbp
  __int64 v27; // rax
  _SLIST_ENTRY *v28; // rbp
  MxLock *p_m_SpinLock; // rdi
  void (__fastcall *v30)(FxObject *); // rdx
  void (__fastcall *v31)(FxObject *); // rax
  void *m_Lock; // rcx
  _QWORD *v33; // rcx
  FxRequest *v34; // rax
  FX_POOL_TRACKER *v35; // rdi
  _MDL *v36; // rcx
  FxRequestContext *v37; // rcx
  _IRP *v38; // rdi
  FxRequestTimer *v39; // rcx
  FxRequest *v40; // rcx
  _SLIST_ENTRY *m_InternalContext; // rbp
  _LIST_ENTRY *Blink; // rcx
  FxRequestContext *v43; // rcx
  _LIST_ENTRY *Flink; // rcx
  FX_POOL_HEADER *v45; // rax
  FxRequestContext *v46; // rcx
  _LIST_ENTRY *v47; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *v50; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v52; // r8
  unsigned __int8 PreviousIrql[56]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 v55; // [rsp+70h] [rbp+8h]

  m_Reserved = this->m_Reserved;
  m_IrpAllocation = this->m_IrpAllocation;
  m_CanComplete = this->m_CanComplete;
  v55 = m_CanComplete;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
    m_CanComplete = v55;
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v11 = this[-1].m_OwnerListEntry2.Blink;
        if ( v11 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_OwnerListEntry2.Blink);
      }
      else
      {
        v11 = 0LL;
      }
      m_ObjectSize = this->m_ObjectSize;
      if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v14 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))i[2];
          if ( v14 )
          {
            v14((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[2] = 0LL;
          }
          v15 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))i[3];
          if ( v15 )
          {
            v15((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[3] = 0LL;
          }
        }
        v16 = this->m_ObjectSize;
        LOBYTE(Tag) = 1;
        if ( v16 )
        {
          v17 = (FxRequest_vtbl **)((char *)&this->__vftable + v16);
          if ( v17 )
          {
            do
            {
              v18 = (_QWORD *)v17[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v17);
              LOBYTE(Tag) = 0;
              v17 = v18;
            }
            while ( v18 );
          }
        }
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(this[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( this->m_Type == 4098
            && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            Tag = this->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&Tag->LimitScaled, -Tag->Limit);
          }
        }
      }
      if ( v11 )
      {
        this[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v11, (unsigned int)Tag);
      }
      v19 = FxRequestFromLookaside::SelfDestruct;
      SelfDestruct = this->SelfDestruct;
      if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
      {
        m_AllocatedMdl = this->m_AllocatedMdl;
        m_DeviceBase = this->m_DeviceBase;
        this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        if ( m_AllocatedMdl )
        {
          if ( this->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
          else
            IoFreeMdl(m_AllocatedMdl);
        }
        m_RequestContext = this->m_RequestContext;
        m_Irp = this->m_Irp.m_Irp;
        if ( m_RequestContext )
        {
          if ( m_Irp )
            ((void (__fastcall *)(FxRequestContext *, FxRequest *, __int64, const char *))m_RequestContext->ReleaseAndRestore)(
              m_RequestContext,
              this,
              Line,
              File);
          v43 = this->m_RequestContext;
          if ( v43 )
            ((void (__fastcall *)(FxRequestContext *, __int64, __int64, const char *))v43->~FxRequestContext)(
              v43,
              1LL,
              Line,
              File);
        }
        if ( m_Irp && this->m_IrpAllocation == 1 )
          IoFreeIrp(this->m_Irp.m_Irp);
        m_Timer = this->m_Timer;
        if ( m_Timer )
          FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v19);
        this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        {
          Flink = this[-1].m_ForwardProgressList.Flink;
          if ( Flink )
          {
            FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Flink, (unsigned int)v19);
            this[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        this->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(this);
        if ( this->m_ForwardRequestToParent )
        {
          v45 = FxObject::_CleanupPointer(this->m_Globals, this);
          ExFreePoolWithTag(v45->Base, 0);
        }
        else
        {
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            v26 = (FxRequest *)((char *)this - 48);
          else
            v26 = this;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v26[-1].m_InternalContext);
          v27 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v27 && *(_WORD *)(v27 + 8) == 4354 && *(_BYTE *)(v27 + 1683) )
          {
            m_InternalContext = (_SLIST_ENTRY *)v26[-1].m_InternalContext;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
              m_CanComplete = v55;
              goto LABEL_3;
            }
            (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
          }
          else
          {
            v28 = (_SLIST_ENTRY *)v26[-1].m_InternalContext;
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v28);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v28);
            }
          }
        }
      }
      else
      {
        v30 = FxObject::SelfDestruct;
        if ( SelfDestruct == FxObject::SelfDestruct )
        {
          v31 = this->~FxObject;
          if ( (char *)v31 == (char *)FxRegKey::`scalar deleting destructor' )
          {
            this->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
            m_Lock = (void *)this->m_NPLock.m_Lock;
            if ( m_Lock )
            {
              ZwClose(m_Lock);
              this->m_NPLock.m_Lock = 0LL;
            }
            v33 = *(_QWORD **)&this->m_NPLock.m_DbgFlagIsInitialized;
            this->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
            if ( v33 )
            {
              FxPoolFree(v33);
              *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = 0LL;
            }
            FxObject::~FxObject(this);
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              v34 = (FxRequest *)((char *)this - 48);
            else
              v34 = this;
            if ( !v34 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          else
          {
            if ( (char *)v31 == (char *)FxRequest::`scalar deleting destructor' )
            {
              this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
              v36 = this->m_AllocatedMdl;
              if ( v36 )
              {
                if ( this->m_Globals->FxVerifierOn )
                  FxMdlFreeDebug(this->m_Globals, this->m_AllocatedMdl);
                else
                  IoFreeMdl(v36);
              }
              v37 = this->m_RequestContext;
              v38 = this->m_Irp.m_Irp;
              if ( v37 )
              {
                if ( v38 )
                  ((void (__fastcall *)(FxRequestContext *, FxRequest *, __int64, const char *))v37->ReleaseAndRestore)(
                    v37,
                    this,
                    Line,
                    File);
                v46 = this->m_RequestContext;
                if ( v46 )
                  ((void (__fastcall *)(FxRequestContext *, __int64, __int64, const char *))v46->~FxRequestContext)(
                    v46,
                    1LL,
                    Line,
                    File);
              }
              if ( v38 && this->m_IrpAllocation == 1 )
                IoFreeIrp(this->m_Irp.m_Irp);
              v39 = this->m_Timer;
              if ( v39 )
                FxRequestTimer::`scalar deleting destructor'(v39, (unsigned int)v30);
              this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              {
                v47 = this[-1].m_ForwardProgressList.Flink;
                if ( v47 )
                {
                  FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)v47, (unsigned int)v30);
                  this[-1].m_ForwardProgressList.Flink = 0LL;
                }
              }
              this->m_NPLock.m_DbgFlagIsInitialized = 0;
              FxObject::~FxObject(this);
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                v40 = (FxRequest *)((char *)this - 48);
              else
                v40 = this;
              FxPoolFree(v40);
              m_CanComplete = v55;
              goto LABEL_3;
            }
            if ( (char *)v31 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
            {
              ((void (__fastcall *)(FxRequest *, __int64, __int64, const char *))v31)(this, 1LL, Line, File);
              m_CanComplete = v55;
              goto LABEL_3;
            }
            this->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
            *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
            FxObject::~FxObject(this);
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              v34 = (FxRequest *)((char *)this - 48);
            else
              v34 = this;
            if ( !v34 )
              KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          }
          if ( ((unsigned __int16)v34 & 0xFFF) != 0 )
          {
            v35 = (FX_POOL_TRACKER *)v34[-1].m_InternalContext;
            if ( *(_BYTE *)(*(_QWORD *)&v34[-1].m_Presented + 264LL) )
            {
              if ( FxIsPagedPoolType(v35->PoolType) )
                FxPoolRemovePagedAllocateTracker(v35);
              else
                FxPoolRemoveNonPagedAllocateTracker(v35);
              memset(v35, 0, v35->Size + 64);
            }
            ExFreePoolWithTag(v35, 0);
            m_CanComplete = v55;
            goto LABEL_3;
          }
          ExFreePoolWithTag(v34, 0);
        }
        else
        {
          ((void (__fastcall *)(FxRequest *, void (__fastcall *)(FxObject *), __int64, const char *))SelfDestruct)(
            this,
            FxObject::SelfDestruct,
            Line,
            File);
        }
      }
    }
    m_CanComplete = v55;
  }
LABEL_3:
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v8 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          v50 = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(v50, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            FxNonPagedObject::Lock(m_IoQueue, PreviousIrql, v52);
            --m_IoQueue->m_TwoPhaseCompletions;
            --m_IoQueue->m_DriverIoCount;
            FxIoQueue::DispatchInternalEvents(m_IoQueue, PreviousIrql[0]);
          }
        }
      }
    }
  }
  return v8;
}
