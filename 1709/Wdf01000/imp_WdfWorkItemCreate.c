/*
 * XREFs of imp_WdfWorkItemCreate @ 0x1C001F470
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001FA50 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int result; // eax
  unsigned __int16 v9; // r9
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  FxObject *flags; // rbx
  FxObject_vtbl *v14; // rax
  unsigned int v15; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v17; // r8
  unsigned __int16 v18; // r9
  unsigned __int64 ContextSizeOverride; // rdx
  ULONG v20; // r12d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  signed int id; // ebp
  void *Caller; // rax
  FxWorkItem *v27; // rax
  _FX_DRIVER_GLOBALS *v28; // rdx
  FxWorkItem *v29; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v30; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v32; // rax
  FxObject *v33; // r9
  int v34; // edi
  bool v35; // cf
  _FX_DRIVER_GLOBALS *v36; // rdx
  const _GUID *Tag; // [rsp+20h] [rbp-78h]
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp-48h] BYREF
  FxObject *ParentObject; // [rsp+58h] [rbp-40h] BYREF
  __int16 v40; // [rsp+60h] [rbp-38h]
  __int16 v41; // [rsp+62h] [rbp-36h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributesForParentHandle(
             (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
             Attributes,
             0x18u);
  if ( result >= 0 )
  {
    v10 = (unsigned __int64)Attributes->ParentObject;
    if ( !v10 )
      FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
    v11 = 0;
    LOWORD(v12) = 0;
    flags = (FxObject *)(~v10 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v10 & 1) != 0 )
    {
      v12 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v12);
    }
    if ( flags->m_Type == 4096 )
    {
      pParent = flags;
    }
    else
    {
      pParent = 0LL;
      ParentObject = (FxObject *)&pParent;
      v14 = flags->__vftable;
      v41 = v12;
      v40 = 4096;
      if ( v14->QueryInterface(flags, (FxQueryInterfaceParams *)&ParentObject) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v11, v15, v9, Tag, (const void *)v10, 0x1000u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, v10, 0x1000uLL);
      }
      flags = pParent;
    }
    m_Globals = flags->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(flags->m_Globals, retaddr);
    if ( !WorkItem )
      FxVerifierNullBugCheck(flags->m_Globals, retaddr);
    if ( Config->Size != 24 )
    {
      WPP_IFR_SF_DDd(m_Globals, v11, 0x12u, 0xAu, WPP_FxWorkItemApi_cpp_Traceguids, Config->Size, 24, -1073741820);
      return -1073741820;
    }
    if ( !Config->EvtWorkItemFunc )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxWorkItemApi_cpp_Traceguids, -1073741811);
      return -1073741811;
    }
    result = FxValidateObjectAttributes(flags->m_Globals, Attributes, 0, v9);
    if ( result >= 0 )
    {
      ContextSizeOverride = 0LL;
      v20 = m_Globals->Tag;
      ParentObject = pParent;
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
      v22 = 256LL;
      if ( ContextSizeOverride )
      {
        v23 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v23 < ContextSizeOverride )
          return -1073741670;
        v24 = v23 + 256;
        if ( v24 < 0x100 )
        {
          id = -1073741675;
          goto LABEL_49;
        }
        v22 = v24;
      }
      if ( m_Globals->FxVerifierHandle )
      {
        v17 = -1LL;
        if ( v22 + 48 >= v22 )
          v17 = v22 + 48;
        v35 = v22 + 48 < v22;
        v22 = v17;
        id = v35 ? 0xC0000095 : 0;
      }
      else
      {
        id = 0;
      }
      if ( id >= 0 )
      {
        if ( m_Globals->FxPoolTrackingOn )
          Caller = retaddr;
        else
          Caller = 0LL;
        v27 = (FxWorkItem *)FxPoolAllocator(
                              m_Globals,
                              &m_Globals->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              v22,
                              v20,
                              Caller);
        v29 = v27;
        if ( v27 )
        {
          if ( m_Globals->FxVerifierHandle )
          {
            memset(v27, 0, 0x30uLL);
            LODWORD(v29->m_ChildListHead.Flink) = 1146058822;
            v29 = (FxWorkItem *)((char *)v29 + 48);
          }
          memset(&v29[1], 0, 0x30uLL);
          v29[1].__vftable = (FxWorkItem_vtbl *)v29;
          v30 = Attributes->ContextTypeInfo;
          if ( v30 )
          {
            ContextSize = Attributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v30->ContextSize;
            memset(&v29[1].m_SpinLock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v29[1].m_ChildListHead.Flink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
        }
        if ( v29 )
        {
          v29->m_Globals = m_Globals;
          v29->__vftable = (FxWorkItem_vtbl *)&FxObject::`vftable';
          *(_DWORD *)&v29->m_Type = 13635621;
          v29->m_SpinLock.m_Lock = 0LL;
          v29->m_SpinLock.m_DbgFlagIsInitialized = 1;
          v29->m_Refcnt = 1;
          *(_DWORD *)&v29->m_ObjectFlags = 0x10000;
          v29->m_ParentObject = 0LL;
          v29->m_ChildListHead.Blink = &v29->m_ChildListHead;
          v29->m_ChildListHead.Flink = &v29->m_ChildListHead;
          v29->m_ChildEntry.Blink = &v29->m_ChildEntry;
          v29->m_ChildEntry.Flink = &v29->m_ChildEntry;
          v32 = v29->m_Globals;
          v29->m_DisposeSingleEntry.Next = 0LL;
          v29->m_DeviceBase = 0LL;
          if ( v32->FxVerifierOn )
            FxObject::Vf_VerifyConstruct(v29, v28, 0);
          v29->__vftable = (FxWorkItem_vtbl *)FxNonPagedObject::`vftable';
          v29->m_NPLock.m_Lock = 0LL;
          v29->m_NPLock.m_DbgFlagIsInitialized = 1;
          if ( SLOBYTE(v29->m_ObjectFlags) < 0 )
          {
            v36 = v29->m_Globals;
            if ( v36->FxVerifierLock )
            {
              VerifierLock = 0LL;
              FxVerifierLock::CreateAndInitialize(&VerifierLock, v36, v29);
              *(_QWORD *)&v29[-1].m_WorkItemCompleted.m_Event.m_Event.Header.Lock = VerifierLock;
            }
          }
          v29->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
          v29->m_WorkItem.m_WorkItem = 0LL;
          v29->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
          KeInitializeEvent(&v29->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
          v33 = ParentObject;
          v29->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
          v29->m_ObjectFlags |= 0x811u;
          v29->m_Object = 0LL;
          v29->m_Callback = 0LL;
          v29->m_CallbackLock = 0LL;
          v29->m_CallbackLockObject = 0LL;
          *(_WORD *)&v29->m_RunningDown = 0;
          v29->m_WorkItemThread = 0LL;
          v29->m_WorkItemRunningCount = 0;
          v34 = FxWorkItem::Initialize(v29, Attributes, Config, v33, WorkItem);
          if ( v34 < 0 )
            FxObject::DeleteFromFailedCreate(v29);
          return v34;
        }
        return -1073741670;
      }
LABEL_49:
      WPP_IFR_SF_DDxd(m_Globals, ContextSizeOverride, v17, v18, Tag, 0xD0u, 0, ContextSizeOverride, id);
      return -1073741670;
    }
  }
  return result;
}
