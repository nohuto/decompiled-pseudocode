/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0019FB0
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0019080 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0027AB8 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001AD6C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001B040 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C001B310 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        __int64 Caller,
        FxObject **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  char *v6; // rbp
  WDFDRIVER__ *Driver; // rdx
  FxObject *v11; // rbx
  _POOL_TYPE v12; // ecx
  unsigned __int64 ContextSizeOverride; // rdx
  ULONG v14; // r8d
  unsigned __int64 v15; // r12
  signed int v16; // edi
  void *v17; // rax
  FxIoQueue *v18; // rax
  FxIoQueue *v19; // rdi
  FxIoQueue *v20; // rax
  FxObject *v21; // rdi
  int v22; // eax
  _FX_DRIVER_GLOBALS *p_m_ExecutionLevel; // rdx
  unsigned __int8 v24; // r8
  int v25; // r12d
  FxObject *v26; // r15
  FxObject *v27; // rdi
  KIRQL v28; // al
  bool v29; // zf
  KIRQL v30; // r12
  KIRQL v31; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  _FX_DRIVER_GLOBALS *v34; // rax
  __int64 v35; // rax
  _LIST_ENTRY *p_m_IoQueueListHead; // rdi
  char v37; // r14
  unsigned __int8 v38; // bp
  unsigned __int8 v39; // r8
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v41; // rdx
  _LIST_ENTRY *v42; // rax
  void *ParentObject; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v46; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v48; // rax
  KIRQL v49; // al
  unsigned __int16 v50; // ax
  void (__fastcall *EvtDestroyCallback)(void *); // rax
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  _LIST_ENTRY *v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 ContextSize; // r8
  const void *_a1; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a3; // rdx
  unsigned __int16 v60; // ax
  const void *_a2; // rcx
  bool v62; // cf
  _LIST_ENTRY *Flink; // rax
  _FX_DRIVER_GLOBALS *v64; // rax
  FxVerifierLock *v65; // rcx
  FxVerifierLock *v66; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-88h]
  FxObject *pParent; // [rsp+58h] [rbp-50h] BYREF
  FxDriver *pDriver; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+8h] BYREF
  void *PPObject; // [rsp+C0h] [rbp+18h] BYREF
  FxDriver *v73; // [rsp+C8h] [rbp+20h]

  v73 = (FxDriver *)Caller;
  m_Globals = this->m_Globals;
  v6 = 0LL;
  pParent = 0LL;
  pDriver = 0LL;
  if ( !QueueAttributes || (ParentObject = QueueAttributes->ParentObject) == 0LL )
  {
    pParent = this;
    goto LABEL_3;
  }
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  m_DeviceBase = pParent->m_DeviceBase;
  if ( m_DeviceBase )
  {
    v46 = this->m_DeviceBase;
    if ( m_DeviceBase != v46 )
    {
      m_ObjectSize = v46->m_ObjectSize;
      _a3 = (const void *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v29 = m_ObjectSize == 0;
      v60 = m_DeviceBase->m_ObjectSize;
      if ( v29 )
        _a3 = 0LL;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v60 )
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return 3221225488LL;
    }
LABEL_3:
    if ( Config->Size > 0x58 )
    {
      Driver = Config->Driver;
      if ( Driver )
        FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
    }
    v11 = 0LL;
    v12 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    v14 = m_Globals->Tag;
    PreviousIrql = this->m_PowerStateOn;
    LODWORD(PPObject) = ExDefaultNonPagedPoolType;
    if ( QueueAttributes )
    {
      ContextTypeInfo = QueueAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = QueueAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v15 = 992LL;
    if ( ContextSizeOverride )
    {
      v54 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v54 < ContextSizeOverride )
        goto LABEL_125;
      v55 = v54 + 992;
      if ( v55 < 0x3E0 )
      {
        v16 = -1073741675;
        goto LABEL_91;
      }
      v15 = v55;
    }
    if ( m_Globals->FxVerifierHandle )
    {
      Caller = -1LL;
      if ( v15 + 48 >= v15 )
        Caller = v15 + 48;
      v62 = v15 + 48 < v15;
      v12 = (int)PPObject;
      v15 = Caller;
      v16 = v62 ? 0xC0000095 : 0;
    }
    else
    {
      v16 = 0;
    }
    if ( v16 >= 0 )
    {
      if ( m_Globals->FxPoolTrackingOn )
        v17 = retaddr;
      else
        v17 = 0LL;
      v18 = (FxIoQueue *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v12, v15, v14, v17);
      v19 = v18;
      if ( v18 )
      {
        if ( m_Globals->FxVerifierHandle )
        {
          memset(v18, 0, 0x30uLL);
          LODWORD(v19->m_ChildListHead.Flink) = 1146058822;
          v19 = (FxIoQueue *)((char *)v19 + 48);
        }
        memset(&v19[1].FxNonPagedObject::FxObject::m_Type, 0, 0x30uLL);
        *(_QWORD *)&v19[1].FxNonPagedObject::FxObject::m_Type = v19;
        if ( QueueAttributes )
        {
          v48 = QueueAttributes->ContextTypeInfo;
          if ( v48 )
          {
            ContextSize = QueueAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v48->ContextSize;
            memset(&v19[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v19[1].m_ChildListHead.Blink = (_LIST_ENTRY *)QueueAttributes->ContextTypeInfo;
        }
      }
      if ( v19 )
      {
        FxIoQueue::FxIoQueue(v19, m_Globals, this);
        v21 = v20;
        if ( v20 )
        {
          v22 = FxIoQueue::Initialize(v20, Config, QueueAttributes, v73, PreviousIrql);
          v25 = v22;
          if ( v22 < 0 )
          {
            WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, v22);
            FxObject::DeleteFromFailedCreate(v21);
          }
          else
          {
            v11 = v21;
          }
          if ( v25 >= 0 )
          {
            if ( pDriver )
            {
              p_m_ExecutionLevel = (_FX_DRIVER_GLOBALS *)&this->m_DeviceBase[1].m_ExecutionLevel;
              Flink = p_m_ExecutionLevel->Linkage.Flink;
              if ( (_FX_DRIVER_GLOBALS *)p_m_ExecutionLevel->Linkage.Flink == p_m_ExecutionLevel )
              {
LABEL_100:
                Flink = 0LL;
              }
              else
              {
                while ( (FxDriver *)Flink[1].Flink != pDriver )
                {
                  Flink = Flink->Flink;
                  if ( Flink == (_LIST_ENTRY *)p_m_ExecutionLevel )
                    goto LABEL_100;
                }
              }
              *(_QWORD *)&v11[3].m_SpinLock.m_DbgFlagIsInitialized = Flink;
            }
            v26 = pParent;
            v27 = 0LL;
            PPObject = 0LL;
            if ( v11->m_ObjectSize )
            {
              if ( QueueAttributes && QueueAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                v49 = KeAcquireSpinLockRaiseToDpc(&v11->m_SpinLock.m_Lock);
                v11->m_ObjectFlags |= 0x11u;
                KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v49);
                v27 = (FxObject *)PPObject;
              }
              if ( v26 )
              {
                v27 = v26;
                PPObject = v26;
              }
              else if ( QueueAttributes
                     && (p_m_ExecutionLevel = (_FX_DRIVER_GLOBALS *)QueueAttributes->ParentObject) != 0LL )
              {
                FxObjectHandleGetPtr(v11->m_Globals, (unsigned __int64)p_m_ExecutionLevel, 0x1000u, &PPObject);
                v27 = (FxObject *)PPObject;
              }
              else if ( !v11->m_ParentObject )
              {
                v64 = v11->m_Globals;
                if ( v64->Driver != v11 )
                  v27 = v64->Driver;
                PPObject = v27;
              }
              if ( !v27 )
                goto LABEL_36;
              v28 = KeAcquireSpinLockRaiseToDpc(&v11->m_SpinLock.m_Lock);
              v29 = v11->m_ObjectState == 1;
              v30 = v28;
              PreviousIrql = v28;
              if ( v29 )
              {
                if ( v11->m_ParentObject )
                {
                  KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v28);
                  v25 = -1071644147;
                }
                else
                {
                  v31 = KeAcquireSpinLockRaiseToDpc(&v27->m_SpinLock.m_Lock);
                  if ( v27->m_ObjectState == 1 )
                  {
                    Blink = v27->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v11->m_ChildEntry;
                    if ( Blink->Flink != &v27->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &v27->m_ChildListHead;
                    v11->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    v27->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v11->m_DeviceBase )
                      v11->m_DeviceBase = v27->m_DeviceBase;
                    KeReleaseSpinLock(&v27->m_SpinLock.m_Lock, v31);
                    v25 = 0;
                    v11->m_ParentObject = v27;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(v27, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&v27->m_SpinLock.m_Lock, v31);
                    v25 = -1073741738;
                  }
                  KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, PreviousIrql);
                  if ( v25 >= 0 )
                  {
LABEL_36:
                    if ( QueueAttributes )
                    {
                      v50 = v11->m_ObjectSize;
                      if ( v50 )
                        v6 = (char *)v11 + v50;
                      EvtDestroyCallback = QueueAttributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v6 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = QueueAttributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v6 + 2) = EvtCleanupCallback;
                        v11->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v34 = v11->m_Globals;
                    v11->m_ObjectFlags |= 8u;
                    if ( v34->FxVerifierOn )
                      FxObject::Vf_VerifyLeakDetectionConsiderObject(v11, p_m_ExecutionLevel);
                    v35 = *(_QWORD *)&v11[3].m_SpinLock.m_DbgFlagIsInitialized;
                    p_m_IoQueueListHead = &this->m_IoQueueListHead;
                    if ( v35 )
                      v37 = *(_BYTE *)(v35 + 88);
                    else
                      v37 = 0;
                    if ( SLOBYTE(this->m_ObjectFlags) < 0
                      && (v65 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
                    {
                      FxVerifierLock::Lock(v65, &PreviousIrql, v24);
                      v38 = PreviousIrql;
                    }
                    else
                    {
                      v38 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
                    }
                    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
                    {
                      if ( LODWORD(i[1].Flink) == 1 )
                      {
                        v53 = i[-34].Flink;
                        if ( v53 )
                          LOBYTE(v53) = v53[5].Blink;
                        if ( (_BYTE)v53 == v37 || (char)v53 < v37 )
                          break;
                      }
                    }
                    v41 = i->Flink;
                    v42 = &v11[8].m_ChildEntry;
                    if ( i->Flink->Blink != i )
                      __fastfail(3u);
                    v42->Flink = v41;
                    v11[8].m_ChildEntry.Blink = i;
                    v41->Blink = v42;
                    i->Flink = v42;
                    if ( this->m_PowerStateOn )
                    {
                      if ( BYTE2(v11[1].m_ChildListHead.Flink) )
                        LODWORD(v11[1].m_ChildEntry.Flink) = 1;
                    }
                    else
                    {
                      if ( BYTE2(v11[1].m_ChildListHead.Flink) )
                        LODWORD(v11[1].m_ChildEntry.Flink) = 2;
                      if ( this->m_QueuesAreShuttingDown )
                        FxIoQueue::SetState((FxIoQueue *)v11, FxIoQueueSetShutdown|0x2);
                    }
                    if ( SLOBYTE(this->m_ObjectFlags) < 0
                      && (v66 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
                    {
                      FxVerifierLock::Unlock(v66, v38, v39);
                    }
                    else
                    {
                      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v38);
                    }
                    *ppQueue = v11;
                    return 0LL;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v11, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v30);
                v25 = -1073741738;
              }
            }
            else
            {
              v25 = -1073741816;
            }
            FxObject::DeleteFromFailedCreate(v11);
          }
          return (unsigned int)v25;
        }
      }
LABEL_125:
      v25 = -1073741670;
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, -1073741670);
      return (unsigned int)v25;
    }
LABEL_91:
    WPP_IFR_SF_DDxd(m_Globals, ContextSizeOverride, v14, Caller, Tag, 0x3A8u, 0, ContextSizeOverride, v16);
    goto LABEL_125;
  }
  _a1 = (const void *)((unsigned __int64)pParent ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !pParent->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(pParent->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
  WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
  return 3221225488LL;
}
