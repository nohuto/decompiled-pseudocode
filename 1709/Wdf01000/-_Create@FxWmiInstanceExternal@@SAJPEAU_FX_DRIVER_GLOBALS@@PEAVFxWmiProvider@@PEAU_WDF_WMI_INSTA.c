/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00313E0
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0031160 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_iid @ 0x1C0071FD0 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C00720BC (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C00722E4 (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0073AB8 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  __int64 result; // rax
  char *v11; // rdx
  signed int v12; // esi
  __int64 v13; // r8
  signed int v14; // ebx
  ULONG v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r15
  void *Caller; // rax
  FxWmiInstanceExternal *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxWmiInstanceExternal *v21; // rbx
  _LIST_ENTRY *p_m_ChildEntry; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v24; // edx
  unsigned __int8 v25; // al
  KIRQL v26; // r13
  KIRQL v27; // r12
  _LIST_ENTRY *Blink; // rcx
  _FX_DRIVER_GLOBALS *v29; // rdx
  WDFWMIINSTANCE__ *v30; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v34; // rax
  unsigned __int64 v35; // r8
  unsigned __int16 m_ObjectSize; // ax
  char *v37; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int8 UseContextForQuery; // al
  const void *v41; // rbp
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  char *ContextSize; // r15
  unsigned __int64 ContextSizeOverride; // r9
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 m_MinInstanceBufferSize; // rcx
  unsigned __int16 v49; // ax
  const void *v50; // rbp
  bool v51; // cf
  _FX_DRIVER_GLOBALS *v52; // rdx
  FxTagTracker *v53; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  int level; // [rsp+40h] [rbp-58h]
  int v56; // [rsp+58h] [rbp-40h]
  char *v57; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+A8h] [rbp+10h] BYREF

  v57 = 0LL;
  *Instance = 0LL;
  *WmiInstance = 0LL;
  if ( (Provider->m_Flags & 1) != 0 )
  {
    UseContextForQuery = WmiInstanceConfig->UseContextForQuery;
    if ( UseContextForQuery
      || WmiInstanceConfig->EvtWmiInstanceQueryInstance
      || WmiInstanceConfig->EvtWmiInstanceSetInstance
      || WmiInstanceConfig->EvtWmiInstanceSetItem
      || WmiInstanceConfig->EvtWmiInstanceExecuteMethod )
    {
      v41 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Provider->m_ObjectSize )
        v41 = 0LL;
      WPP_IFR_SF_qdqqqqd(
        FxDriverGlobals,
        (unsigned __int8)Provider,
        (unsigned int)WmiInstanceConfig,
        (unsigned __int16)InstanceAttributes,
        Tag,
        v41,
        UseContextForQuery,
        WmiInstanceConfig->EvtWmiInstanceQueryInstance,
        WmiInstanceConfig->EvtWmiInstanceSetInstance,
        WmiInstanceConfig->EvtWmiInstanceSetItem,
        WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
        v56);
      return 3221225485LL;
    }
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1, (unsigned __int16)InstanceAttributes);
  v12 = result;
  if ( (int)result < 0 )
    return result;
  v13 = -1LL;
  v14 = -1073741675;
  if ( !WmiInstanceConfig->UseContextForQuery )
    goto LABEL_4;
  EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
  if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
  {
    WPP_IFR_SF_qid(
      FxDriverGlobals,
      2u,
      0x12u,
      0xCu,
      WPP_FxWmiInstance_cpp_Traceguids,
      EvtWmiInstanceSetInstance,
      (__int64)WmiInstanceConfig->EvtWmiInstanceSetItem,
      -1073741811);
    return 3221225485LL;
  }
  if ( !InstanceAttributes || (ContextTypeInfo = InstanceAttributes->ContextTypeInfo) == 0LL )
  {
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, -1073741811);
    return 3221225485LL;
  }
  ContextSize = (char *)ContextTypeInfo->ContextSize;
  ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
  v57 = ContextSize;
  if ( ContextSizeOverride )
  {
    v11 = &ContextSize[ContextSizeOverride];
    v46 = ContextTypeInfo->ContextSize;
    v47 = -1LL;
    if ( &ContextSize[ContextSizeOverride] >= ContextSize )
      v47 = (__int64)&ContextSize[ContextSizeOverride];
    ContextSize = (char *)v47;
    v57 = (char *)v47;
    v12 = (unsigned __int64)v11 < v46 ? 0xC0000095 : 0;
    if ( (unsigned __int64)v11 < v46 )
    {
      WPP_IFR_SF_iid(
        FxDriverGlobals,
        (unsigned __int8)v11,
        0xFFFFFFFF,
        ContextSizeOverride,
        Tag,
        v47,
        ContextSizeOverride,
        (unsigned __int64)v11 < v46 ? 0xC0000095 : 0);
      return (unsigned int)v12;
    }
  }
  if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
  {
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)v11,
      0x12u,
      0xFu,
      WPP_FxWmiInstance_cpp_Traceguids,
      ContextSize,
      0xFFFFFFFF,
      0xC0000095);
    return 3221225621LL;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  if ( (unsigned __int64)ContextSize >= m_MinInstanceBufferSize )
  {
LABEL_4:
    v15 = FxDriverGlobals->Tag;
    v16 = 0LL;
    LODWORD(VerifierLock) = v15;
    if ( InstanceAttributes )
    {
      v31 = InstanceAttributes->ContextTypeInfo;
      if ( v31 )
      {
        v16 = InstanceAttributes->ContextSizeOverride;
        if ( !v16 )
          v16 = v31->ContextSize;
      }
    }
    v17 = 240LL;
    if ( v16 )
    {
      v32 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v32 < v16 )
        goto LABEL_104;
      v33 = v32 + 240;
      if ( v33 < 0xF0 )
      {
LABEL_88:
        WPP_IFR_SF_DDxd(FxDriverGlobals, v16, v13, 0, Tag, 0xB8u, 0, v16, v14);
        goto LABEL_104;
      }
      v17 = v33;
    }
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      if ( v17 + 48 >= v17 )
        v13 = v17 + 48;
      v51 = v17 + 48 < v17;
      v15 = (unsigned int)VerifierLock;
      v17 = v13;
      v14 = v51 ? 0xC0000095 : 0;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 >= 0 )
    {
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v19 = (FxWmiInstanceExternal *)FxPoolAllocator(
                                       FxDriverGlobals,
                                       &FxDriverGlobals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       v17,
                                       v15,
                                       Caller);
      v21 = v19;
      if ( v19 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v19, 0, 0x30uLL);
          LODWORD(v21->m_ChildListHead.Flink) = 1146058822;
          v21 = (FxWmiInstanceExternal *)((char *)v21 + 48);
        }
        memset(&v21[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v21[1].m_Type = v21;
        if ( InstanceAttributes )
        {
          v34 = InstanceAttributes->ContextTypeInfo;
          if ( v34 )
          {
            v35 = InstanceAttributes->ContextSizeOverride;
            if ( !v35 )
              v35 = v34->ContextSize;
            memset(&v21[1].m_SpinLock.m_Lock, 0, (v35 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v21[1].m_ChildListHead.Blink = (_LIST_ENTRY *)InstanceAttributes->ContextTypeInfo;
        }
      }
      if ( v21 )
      {
        v21->m_Globals = FxDriverGlobals;
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)&FxObject::`vftable';
        p_m_ChildEntry = &v21->m_ChildEntry;
        *(_DWORD *)&v21->m_Type = 12587060;
        v21->m_SpinLock.m_DbgFlagIsInitialized = 1;
        v21->m_SpinLock.m_Lock = 0LL;
        v21->m_Refcnt = 1;
        *(_DWORD *)&v21->m_ObjectFlags = 0x10000;
        v21->m_ParentObject = 0LL;
        v21->m_ChildListHead.Blink = &v21->m_ChildListHead;
        v21->m_ChildListHead.Flink = &v21->m_ChildListHead;
        v21->m_ChildEntry.Blink = &v21->m_ChildEntry;
        v21->m_ChildEntry.Flink = &v21->m_ChildEntry;
        m_Globals = v21->m_Globals;
        v21->m_DisposeSingleEntry.Next = 0LL;
        v21->m_DeviceBase = 0LL;
        if ( m_Globals->FxVerifierOn )
          FxObject::Vf_VerifyConstruct(v21, v20, 0);
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)FxNonPagedObject::`vftable';
        v21->m_NPLock.m_Lock = 0LL;
        v21->m_NPLock.m_DbgFlagIsInitialized = 1;
        if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
        {
          v52 = v21->m_Globals;
          if ( v52->FxVerifierLock )
          {
            VerifierLock = 0LL;
            FxVerifierLock::CreateAndInitialize(&VerifierLock, v52, v21);
            v21[-1].m_QueryInstanceCallback.m_Method = (int (__fastcall *)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *))VerifierLock;
          }
        }
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstance::`vftable';
        v21->m_ListEntry.Blink = &v21->m_ListEntry;
        v21->m_ListEntry.Flink = &v21->m_ListEntry;
        v21->m_Provider = Provider;
        v24 = _InterlockedIncrement(&Provider->m_Refcnt);
        if ( SLOBYTE(Provider->m_ObjectFlags) < 0 )
        {
          v53 = *(FxTagTracker **)&Provider[-1].m_Guid.Data1;
          if ( v53 )
            FxTagTracker::UpdateTagHistory(
              v53,
              v21,
              37,
              "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp",
              TagAddRef,
              v24);
        }
        v21->m_ObjectFlags |= 0x800u;
        v21->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstanceExternal::`vftable';
        v21->m_QueryInstanceCallback.m_Method = 0LL;
        v21->m_SetInstanceCallback.m_Method = 0LL;
        v21->m_SetItemCallback.m_Method = 0LL;
        v21->m_ExecuteMethodCallback.m_Method = 0LL;
        v21->m_ContextLength = 0;
        v25 = WmiInstanceConfig->UseContextForQuery;
        v21->m_UseContextForQuery = v25;
        if ( !v25 )
          v21->m_QueryInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceQueryInstance;
        v21->m_SetInstanceCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetInstance;
        v21->m_SetItemCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceSetItem;
        v21->m_ExecuteMethodCallback.m_Method = WmiInstanceConfig->EvtWmiInstanceExecuteMethod;
        if ( v57 )
          v21->m_ContextLength = (unsigned int)v57;
        if ( v12 >= 0 )
        {
          if ( v21->m_ObjectSize )
          {
            if ( InstanceAttributes && InstanceAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              FxObject::MarkPassiveCallbacks(v21, ObjectLock);
            v26 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
            if ( v21->m_ObjectState == 1 )
            {
              if ( v21->m_ParentObject )
              {
                KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v26);
                v12 = -1071644147;
              }
              else
              {
                v27 = KeAcquireSpinLockRaiseToDpc(&Provider->m_SpinLock.m_Lock);
                if ( Provider->m_ObjectState == 1 )
                {
                  Blink = Provider->m_ChildListHead.Blink;
                  if ( Blink->Flink != &Provider->m_ChildListHead )
                    __fastfail(3u);
                  p_m_ChildEntry->Flink = &Provider->m_ChildListHead;
                  v21->m_ChildEntry.Blink = Blink;
                  Blink->Flink = p_m_ChildEntry;
                  Provider->m_ChildListHead.Blink = p_m_ChildEntry;
                  if ( !v21->m_DeviceBase )
                    v21->m_DeviceBase = Provider->m_DeviceBase;
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v27);
                  v12 = 0;
                  v21->m_ParentObject = Provider;
                }
                else
                {
                  FxObject::TraceDroppedEvent(Provider, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&Provider->m_SpinLock.m_Lock, v27);
                  v12 = -1073741738;
                }
                KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v26);
                if ( v12 >= 0 )
                {
                  if ( InstanceAttributes )
                  {
                    m_ObjectSize = v21->m_ObjectSize;
                    if ( m_ObjectSize )
                      v37 = (char *)v21 + m_ObjectSize;
                    else
                      v37 = 0LL;
                    EvtDestroyCallback = InstanceAttributes->EvtDestroyCallback;
                    if ( EvtDestroyCallback )
                      *((_QWORD *)v37 + 3) = EvtDestroyCallback;
                    EvtCleanupCallback = InstanceAttributes->EvtCleanupCallback;
                    if ( EvtCleanupCallback )
                    {
                      *((_QWORD *)v37 + 2) = EvtCleanupCallback;
                      v21->m_ObjectFlags |= 0x400u;
                    }
                  }
                  v21->m_ObjectFlags |= 8u;
                  if ( v21->m_ObjectSize )
                    v30 = (WDFWMIINSTANCE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v30 = 0LL;
                  if ( v21->m_Globals->FxVerifierOn )
                    FxObject::Vf_VerifyLeakDetectionConsiderObject(v21, v29);
                  v12 = 0;
                  *WmiInstance = v30;
                  *Instance = v21;
                  return (unsigned int)v12;
                }
              }
            }
            else
            {
              FxObject::TraceDroppedEvent(v21, FxObjectDroppedEventAssignParentObject);
              KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v26);
              v12 = -1073741738;
            }
          }
          else
          {
            v12 = -1073741816;
          }
        }
        FxObject::DeleteFromFailedCreate(v21);
        return (unsigned int)v12;
      }
LABEL_104:
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
    goto LABEL_88;
  }
  v49 = Provider->m_ObjectSize;
  v50 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v49 )
    v50 = 0LL;
  WPP_IFR_SF_iqdd(
    FxDriverGlobals,
    (unsigned __int8)v11,
    0xFFFFFFFF,
    ContextSizeOverride,
    Tag,
    (__int64)ContextSize,
    v50,
    m_MinInstanceBufferSize,
    level);
  return 3221225507LL;
}
