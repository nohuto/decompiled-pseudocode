/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C00203C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  unsigned __int16 v6; // r9
  int id; // ebx
  unsigned __int64 ParentObject; // rbx
  __int64 v9; // rcx
  FxObject *flags; // rdi
  FxObject_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  __int64 result; // rax
  __int64 v15; // r9
  _POOL_TYPE v16; // r15d
  unsigned __int16 v17; // bp
  unsigned __int64 ContextSizeOverride; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  void *Caller; // rax
  FxObject *v24; // rax
  _FX_DRIVER_GLOBALS *v25; // rdx
  FxObject *v26; // rbx
  FxObject **v27; // r14
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v28; // rax
  unsigned __int64 ContextSize; // r8
  _LIST_ENTRY *p_m_ChildEntry; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxObject *Driver; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  FxObject_vtbl *v35; // rax
  unsigned int v36; // r8d
  unsigned __int16 v37; // r9
  KIRQL v38; // al
  bool v39; // zf
  KIRQL v40; // bp
  KIRQL v41; // r12
  _LIST_ENTRY *Blink; // rcx
  int v43; // ebp
  unsigned __int16 m_ObjectSize; // ax
  char *v45; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  WDFSPINLOCK__ *v48; // rdi
  _FX_DRIVER_GLOBALS *v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  const _GUID *Taga; // [rsp+20h] [rbp-78h]
  FxObject **p_pParent; // [rsp+50h] [rbp-48h] BYREF
  __int16 v55; // [rsp+58h] [rbp-40h]
  __int16 v56; // [rsp+5Ah] [rbp-3Eh]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxObject *v59; // [rsp+B8h] [rbp+20h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  id = 0;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         SpinLockAttributes,
         0) >= 0 )
  {
    ParentObject = (unsigned __int64)SpinLockAttributes->ParentObject;
    if ( !ParentObject )
      FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
    LOWORD(v9) = 0;
    flags = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (ParentObject & 1) != 0 )
    {
      v9 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v9);
    }
    if ( flags->m_Type == 4096 )
    {
      pParent = flags;
    }
    else
    {
      pParent = 0LL;
      p_pParent = &pParent;
      v11 = flags->__vftable;
      v56 = v9;
      v55 = 4096;
      if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pParent) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v6, Tag, (const void *)ParentObject, 0x1000u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
      }
      flags = pParent;
    }
    DriverName = flags->m_Globals;
    id = 0;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, SpinLockAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    v16 = ExDefaultNonPagedPoolType;
    v17 = 0;
    if ( DriverName->FxVerifierLock )
      v17 = 256;
    *SpinLock = 0LL;
    ContextSizeOverride = 0LL;
    if ( SpinLockAttributes )
    {
      ContextTypeInfo = SpinLockAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = SpinLockAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v20 = (unsigned int)v17 + 128 + 48LL;
    if ( v20 < (unsigned int)v17 + 128 )
    {
      id = -1073741675;
    }
    else
    {
      v15 = -1LL;
      if ( ContextSizeOverride )
      {
        v21 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 < ContextSizeOverride )
          return 3221225626LL;
        v22 = v21 + v20;
        Caller = 0LL;
        if ( v22 < v20 )
        {
          v20 = -1LL;
          id = -1073741675;
        }
        else
        {
          v20 = v22;
          id = 0;
        }
      }
      else
      {
        Caller = 0LL;
      }
      if ( id >= 0 )
      {
        if ( DriverName->FxVerifierHandle )
        {
          v50 = v20 + 48;
          v51 = v20;
          if ( v20 + 48 >= v20 )
            v15 = v20 + 48;
          v20 = v15;
          id = v50 < v51 ? 0xC0000095 : 0;
          Caller = 0LL;
        }
        if ( id >= 0 )
        {
          if ( DriverName->FxPoolTrackingOn )
            Caller = retaddr;
          v24 = (FxObject *)FxPoolAllocator(
                              DriverName,
                              &DriverName->FxPoolFrameworks,
                              v16,
                              v20,
                              DriverName->Tag,
                              Caller);
          v26 = v24;
          if ( v24 )
          {
            if ( DriverName->FxVerifierHandle )
            {
              memset(v24, 0, 0x30uLL);
              LODWORD(v26->m_ChildListHead.Flink) = 1146058822;
              v26 = (FxObject *)((char *)v26 + 48);
            }
            v27 = (FxObject **)((char *)v26 + (unsigned __int16)(v17 + 128));
            memset(v27, 0, 0x30uLL);
            *v27 = v26;
            if ( SpinLockAttributes )
            {
              v28 = SpinLockAttributes->ContextTypeInfo;
              if ( v28 )
              {
                ContextSize = SpinLockAttributes->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v28->ContextSize;
                memset(v27 + 6, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v27[4] = (FxObject *)SpinLockAttributes->ContextTypeInfo;
            }
          }
          if ( v26 )
          {
            v26->m_Globals = DriverName;
            v26->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
            p_m_ChildEntry = &v26->m_ChildEntry;
            v26->m_Type = 4132;
            v26->m_ObjectSize = v17 + 128;
            v26->m_SpinLock.m_Lock = 0LL;
            v26->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v26->m_Refcnt = 1;
            *(_DWORD *)&v26->m_ObjectFlags = 0x10000;
            v26->m_ParentObject = 0LL;
            v26->m_ChildListHead.Blink = &v26->m_ChildListHead;
            v26->m_ChildListHead.Flink = &v26->m_ChildListHead;
            v26->m_ChildEntry.Blink = &v26->m_ChildEntry;
            v26->m_ChildEntry.Flink = &v26->m_ChildEntry;
            m_Globals = v26->m_Globals;
            v26->m_DisposeSingleEntry.Next = 0LL;
            v26->m_DeviceBase = 0LL;
            if ( m_Globals->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v26, v25, 0);
            v26->__vftable = (FxObject_vtbl *)FxSpinLock::`vftable';
            *(_QWORD *)&v26[1].m_Type = 0LL;
            LOBYTE(v26[1].__vftable) = 1;
            LOWORD(v26[1].m_Globals) = 0;
            if ( v26->m_ObjectSize != 128 && v26 != (FxObject *)-128LL )
            {
              memset(&v26[1].24, 0, 0x100uLL);
              v26[1].m_ChildListHead.Flink = (_LIST_ENTRY *)&v26[1].m_ChildListHead.Blink;
            }
            Driver = 0LL;
            v59 = 0LL;
            if ( v26->m_ObjectSize )
            {
              if ( !SpinLockAttributes )
                goto LABEL_103;
              if ( SpinLockAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v26, ObjectLock);
                Driver = v59;
              }
              v33 = (unsigned __int64)SpinLockAttributes->ParentObject;
              if ( v33 )
              {
                LOWORD(v34) = 0;
                Driver = (FxObject *)(~v33 & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (v33 & 1) != 0 )
                {
                  v34 = LOWORD(Driver->__vftable);
                  Driver = (FxObject *)((char *)Driver - v34);
                }
                if ( Driver->m_Type == 4096 )
                {
                  v59 = Driver;
                }
                else
                {
                  v59 = 0LL;
                  p_pParent = &v59;
                  v35 = Driver->__vftable;
                  v56 = v34;
                  v55 = 4096;
                  if ( v35->QueryInterface(Driver, (FxQueryInterfaceParams *)&p_pParent) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      Driver->m_Globals,
                      (unsigned __int8)v25,
                      v36,
                      v37,
                      Taga,
                      (const void *)v33,
                      0x1000u,
                      Driver,
                      Driver->m_Type);
                    FxVerifierBugCheckWorker(Driver->m_Globals, WDF_INVALID_HANDLE, v33, 0x1000uLL);
                  }
                  Driver = v59;
                }
              }
              else
              {
LABEL_103:
                if ( !v26->m_ParentObject )
                {
                  v49 = v26->m_Globals;
                  if ( v49->Driver != v26 )
                  {
                    Driver = v49->Driver;
                    v59 = Driver;
                  }
                }
              }
              if ( !Driver )
                goto LABEL_59;
              v38 = KeAcquireSpinLockRaiseToDpc(&v26->m_SpinLock.m_Lock);
              v39 = v26->m_ObjectState == 1;
              v40 = v38;
              LOBYTE(pParent) = v38;
              if ( v39 )
              {
                if ( v26->m_ParentObject )
                {
                  KeReleaseSpinLock(&v26->m_SpinLock.m_Lock, v38);
                  v43 = -1071644147;
                }
                else
                {
                  v41 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                    v26->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v26->m_DeviceBase )
                      v26->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v41);
                    v26->m_ParentObject = Driver;
                    v43 = 0;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v41);
                    v43 = -1073741738;
                  }
                  KeReleaseSpinLock(&v26->m_SpinLock.m_Lock, (KIRQL)pParent);
                  if ( v43 >= 0 )
                  {
LABEL_59:
                    if ( SpinLockAttributes )
                    {
                      m_ObjectSize = v26->m_ObjectSize;
                      if ( m_ObjectSize )
                        v45 = (char *)v26 + m_ObjectSize;
                      else
                        v45 = 0LL;
                      EvtDestroyCallback = SpinLockAttributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v45 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = SpinLockAttributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v45 + 2) = EvtCleanupCallback;
                        v26->m_ObjectFlags |= 0x400u;
                      }
                    }
                    v26->m_ObjectFlags |= 8u;
                    if ( v26->m_ObjectSize )
                      v48 = (WDFSPINLOCK__ *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    else
                      v48 = 0LL;
                    if ( v26->m_Globals->FxVerifierOn )
                      FxObject::Vf_VerifyLeakDetectionConsiderObject(v26, v25);
                    v43 = 0;
                    *SpinLock = v48;
                    return (unsigned int)v43;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v26, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v26->m_SpinLock.m_Lock, v40);
                v43 = -1073741738;
              }
            }
            else
            {
              v43 = -1073741816;
            }
            FxObject::DeleteFromFailedCreate(v26);
            return (unsigned int)v43;
          }
          return 3221225626LL;
        }
      }
    }
    WPP_IFR_SF_DDxd(DriverName, ContextSizeOverride, v17, v15, Tag, 0x80u, v17, ContextSizeOverride, id);
    return 3221225626LL;
  }
  return result;
}
