/*
 * XREFs of imp_WdfObjectCreate @ 0x1C001F010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbp
  void **v4; // r13
  unsigned __int16 v6; // r9
  unsigned __int64 ParentObject; // rdi
  __int64 v8; // rcx
  FxObject *flags; // rbx
  FxObject_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  __int64 result; // rax
  _POOL_TYPE v14; // ebx
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // edi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxObject *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxObject *v21; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSize; // r8
  FxObject *Driver; // rdi
  _LIST_ENTRY *p_m_ChildEntry; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v27; // al
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  KIRQL v30; // al
  bool v31; // zf
  KIRQL v32; // r14
  KIRQL v33; // al
  _LIST_ENTRY *Blink; // rcx
  int v35; // r14d
  unsigned __int16 m_ObjectSize; // ax
  char *v37; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v40; // rax
  void *v41; // r15
  _FX_DRIVER_GLOBALS *v42; // rax
  unsigned __int64 *Total; // [rsp+20h] [rbp-88h]
  void *PPObject; // [rsp+50h] [rbp-58h] BYREF
  __int16 v45; // [rsp+58h] [rbp-50h]
  __int16 v46; // [rsp+5Ah] [rbp-4Eh]
  FxObject *pParent; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 Size; // [rsp+B0h] [rbp+8h] BYREF
  void **v50; // [rsp+C0h] [rbp+18h]
  KIRQL v51; // [rsp+C8h] [rbp+20h]

  v50 = Object;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v4 = Object;
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    ParentObject = (unsigned __int64)Attributes->ParentObject;
    if ( !ParentObject )
      FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
    LOWORD(v8) = 0;
    flags = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (ParentObject & 1) != 0 )
    {
      v8 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v8);
    }
    if ( flags->m_Type == 4096 )
    {
      pParent = flags;
    }
    else
    {
      pParent = 0LL;
      PPObject = &pParent;
      v10 = flags->__vftable;
      v46 = v8;
      v45 = 4096;
      if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&PPObject) < 0 )
      {
        WPP_IFR_SF_qDqD(
          flags->m_Globals,
          v11,
          v12,
          v6,
          (const _GUID *)Total,
          (const void *)ParentObject,
          0x1000u,
          flags,
          flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
      }
      flags = pParent;
    }
    DriverName = flags->m_Globals;
  }
  if ( !v4 )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, Attributes, 2, v6);
  if ( (int)result >= 0 )
  {
    v14 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    Tag = DriverName->Tag;
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
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x78u, 0, ContextSizeOverride, &Size) < 0 )
      goto LABEL_85;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v19 = (FxObject *)FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v14, Size, Tag, Caller);
    v21 = v19;
    if ( v19 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v19, 0, 0x30uLL);
        LODWORD(v21->m_ChildListHead.Flink) = 1146058822;
        v21 = (FxObject *)((char *)v21 + 48);
      }
      memset(&v21[1].24, 0, 0x30uLL);
      *(_QWORD *)&v21[1].m_ObjectFlags = v21;
      if ( Attributes )
      {
        v22 = Attributes->ContextTypeInfo;
        if ( v22 )
        {
          ContextSize = Attributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v22->ContextSize;
          memset(&v21[1].m_ChildEntry, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v21[1].m_SpinLock.m_Lock = (unsigned __int64)Attributes->ContextTypeInfo;
      }
    }
    if ( v21 )
    {
      v21->m_Globals = DriverName;
      v21->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
      Driver = 0LL;
      *(_DWORD *)&v21->m_Type = 8392716;
      v21->m_SpinLock.m_Lock = 0LL;
      v21->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v21->m_Refcnt = 1;
      v21->m_ParentObject = 0LL;
      p_m_ChildEntry = &v21->m_ChildEntry;
      *(_DWORD *)&v21->m_ObjectFlags = 0x10000;
      v21->m_ChildListHead.Blink = &v21->m_ChildListHead;
      v21->m_ChildListHead.Flink = &v21->m_ChildListHead;
      v21->m_ChildEntry.Blink = &v21->m_ChildEntry;
      v21->m_ChildEntry.Flink = &v21->m_ChildEntry;
      m_Globals = v21->m_Globals;
      v21->m_DisposeSingleEntry.Next = 0LL;
      v21->m_DeviceBase = 0LL;
      if ( m_Globals->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v21, v20, 0);
      v21->__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
      *(_QWORD *)&v21[1].m_Type = 0LL;
      LOBYTE(v21[1].__vftable) = 1;
      if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
      {
        v20 = v21->m_Globals;
        if ( v20->FxVerifierLock )
        {
          Size = 0LL;
          FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&Size, v20, v21);
          v21[-1].m_ParentObject = (FxObject *)Size;
        }
      }
      PPObject = 0LL;
      v21->__vftable = (FxObject_vtbl *)FxUserObject::`vftable';
      if ( v21->m_ObjectSize )
      {
        if ( !Attributes )
          goto LABEL_88;
        if ( Attributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          v27 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
          v21->m_ObjectFlags |= 0x11u;
          KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v27);
          Driver = (FxObject *)PPObject;
        }
        v28 = (unsigned __int64)Attributes->ParentObject;
        if ( v28 )
        {
          LOWORD(v29) = 0;
          Driver = (FxObject *)(~v28 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v28 & 1) != 0 )
          {
            v29 = LOWORD(Driver->__vftable);
            Driver = (FxObject *)((char *)Driver - v29);
          }
          if ( Driver->m_Type == 4096 )
          {
            PPObject = Driver;
          }
          else
          {
            FxObjectHandleGetPtrQI(Driver, &PPObject, (void *)v28, 0x1000u, v29);
            Driver = (FxObject *)PPObject;
          }
        }
        else
        {
LABEL_88:
          if ( !v21->m_ParentObject )
          {
            v42 = v21->m_Globals;
            if ( v42->Driver != v21 )
            {
              Driver = v42->Driver;
              PPObject = Driver;
            }
          }
        }
        if ( !Driver )
          goto LABEL_50;
        v30 = KeAcquireSpinLockRaiseToDpc(&v21->m_SpinLock.m_Lock);
        v31 = v21->m_ObjectState == 1;
        v32 = v30;
        v51 = v30;
        if ( v31 )
        {
          if ( v21->m_ParentObject )
          {
            KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v30);
            v35 = -1071644147;
          }
          else
          {
            v33 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
            v31 = Driver->m_ObjectState == 1;
            LOBYTE(Size) = v33;
            if ( v31 )
            {
              Blink = Driver->m_ChildListHead.Blink;
              if ( Blink->Flink != &Driver->m_ChildListHead )
                __fastfail(3u);
              p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
              v21->m_ChildEntry.Blink = Blink;
              Blink->Flink = p_m_ChildEntry;
              Driver->m_ChildListHead.Blink = p_m_ChildEntry;
              if ( !v21->m_DeviceBase )
                v21->m_DeviceBase = Driver->m_DeviceBase;
              KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v33);
              v21->m_ParentObject = Driver;
              v35 = 0;
            }
            else
            {
              FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
              KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, Size);
              v35 = -1073741738;
            }
            KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v51);
            if ( v35 >= 0 )
            {
              v4 = v50;
LABEL_50:
              if ( Attributes )
              {
                m_ObjectSize = v21->m_ObjectSize;
                if ( m_ObjectSize )
                  v37 = (char *)v21 + m_ObjectSize;
                else
                  v37 = 0LL;
                EvtDestroyCallback = Attributes->EvtDestroyCallback;
                if ( EvtDestroyCallback )
                  *((_QWORD *)v37 + 3) = EvtDestroyCallback;
                EvtCleanupCallback = Attributes->EvtCleanupCallback;
                if ( EvtCleanupCallback )
                {
                  *((_QWORD *)v37 + 2) = EvtCleanupCallback;
                  v21->m_ObjectFlags |= 0x400u;
                }
              }
              v40 = v21->m_Globals;
              v21->m_ObjectFlags |= 8u;
              if ( v40->FxVerifierOn )
                FxObject::Vf_VerifyLeakDetectionConsiderObject(v21, v20);
              v35 = 0;
              if ( v21->m_ObjectSize )
                v41 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v41 = 0LL;
              *v4 = v41;
              if ( DriverName->FxVerboseOn )
                WPP_IFR_SF_q(DriverName, 5u, 0x13u, 0xAu, WPP_FxUserObjectApi_cpp_Traceguids, v41);
              return (unsigned int)v35;
            }
          }
        }
        else
        {
          FxObject::TraceDroppedEvent(v21, FxObjectDroppedEventAssignParentObject);
          KeReleaseSpinLock(&v21->m_SpinLock.m_Lock, v32);
          v35 = -1073741738;
        }
      }
      else
      {
        v35 = -1073741816;
      }
      WPP_IFR_SF_d(DriverName, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, v35);
      FxObject::DeleteFromFailedCreate(v21);
    }
    else
    {
LABEL_85:
      WPP_IFR_SF_(DriverName, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return (unsigned int)v35;
  }
  return result;
}
