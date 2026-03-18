/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C0032E40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003331C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  _WDF_COMMON_BUFFER_CONFIG *v6; // r13
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  FxDmaEnabler *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  WDFCOMMONBUFFER__ **v12; // r12
  _WDF_OBJECT_ATTRIBUTES *v13; // rsi
  __int64 result; // rax
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v16; // ebx
  ULONG Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxCommonBuffer *v20; // rax
  _FX_DRIVER_GLOBALS *ParentObject; // rdx
  FxCommonBuffer *v22; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSize; // r8
  FxDmaEnabler *v25; // r14
  _LIST_ENTRY *p_m_ChildEntry; // r15
  _FX_DRIVER_GLOBALS *v27; // rax
  unsigned __int64 m_CommonBufferAlignment; // rax
  FxObject *Driver; // r14
  FxDmaEnabler *v30; // rbp
  KIRQL v31; // bp
  KIRQL v32; // al
  bool v33; // zf
  _LIST_ENTRY *Blink; // rcx
  int CommonBuffer; // ebp
  unsigned __int16 m_ObjectSize; // ax
  char *v37; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int64 v40; // rdx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v42; // rax
  KIRQL v43; // [rsp+40h] [rbp-58h]
  void *PPObject; // [rsp+48h] [rbp-50h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 Size; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+B0h] [rbp+18h]
  _WDF_COMMON_BUFFER_CONFIG *v49; // [rsp+B8h] [rbp+20h]

  v49 = Config;
  v48 = Length;
  v6 = Config;
  v7 = Length;
  if ( !DmaEnabler )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1400uLL);
  v8 = 0LL;
  v9 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (DmaEnabler & 1) != 0 )
  {
    v10 = LOWORD(v9->__vftable);
    v9 = (FxDmaEnabler *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 5120 )
  {
    pDmaEnabler = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, v10);
    v9 = pDmaEnabler;
    v7 = v48;
  }
  m_Globals = v9->m_Globals;
  if ( !v6 )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( v6->Size != 8 )
  {
    WPP_IFR_SF_DDd(m_Globals, DmaEnabler, 0xFu, 0xCu, WPP_FxCommonBufferAPI_cpp_Traceguids, v6->Size, 8, -1073741820);
    return 3221225476LL;
  }
  v12 = CommonBufferHandle;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
  }
  if ( !v7 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xDu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  v13 = Attributes;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1, v7);
  if ( (int)result >= 0 )
  {
    ContextSizeOverride = 0LL;
    v16 = ExDefaultNonPagedPoolType;
    Tag = m_Globals->Tag;
    if ( v13 )
    {
      ContextTypeInfo = v13->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = v13->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0xB8u, 0, ContextSizeOverride, &Size) < 0 )
      goto LABEL_88;
    if ( m_Globals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v20 = (FxCommonBuffer *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v16, Size, Tag, Caller);
    v22 = v20;
    if ( v20 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v20, 0, 0x30uLL);
        LODWORD(v22->m_ChildListHead.Flink) = 1146058822;
        v22 = (FxCommonBuffer *)((char *)v22 + 48);
      }
      memset(&v22[1].m_Type, 0, 0x30uLL);
      *(_QWORD *)&v22[1].m_Type = v22;
      if ( v13 )
      {
        v23 = v13->ContextTypeInfo;
        if ( v23 )
        {
          ContextSize = v13->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v23->ContextSize;
          memset(&v22[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v22[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v13->ContextTypeInfo;
      }
    }
    if ( !v22 )
    {
LABEL_88:
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xEu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741670);
      return 3221225626LL;
    }
    v25 = pDmaEnabler;
    v22->__vftable = (FxCommonBuffer_vtbl *)&FxObject::`vftable';
    v22->m_Globals = m_Globals;
    *(_DWORD *)&v22->m_Type = 12588034;
    v22->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v22->m_SpinLock.m_Lock = 0LL;
    v22->m_Refcnt = 1;
    p_m_ChildEntry = &v22->m_ChildEntry;
    *(_DWORD *)&v22->m_ObjectFlags = 0x10000;
    v22->m_ParentObject = 0LL;
    v22->m_ChildListHead.Blink = &v22->m_ChildListHead;
    v22->m_ChildListHead.Flink = &v22->m_ChildListHead;
    v22->m_ChildEntry.Blink = &v22->m_ChildEntry;
    v22->m_ChildEntry.Flink = &v22->m_ChildEntry;
    v27 = v22->m_Globals;
    v22->m_DisposeSingleEntry.Next = 0LL;
    v22->m_DeviceBase = 0LL;
    if ( v27->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v22, ParentObject, 0);
    v22->__vftable = (FxCommonBuffer_vtbl *)FxNonPagedObject::`vftable';
    v22->m_NPLock.m_Lock = 0LL;
    v22->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
    {
      ParentObject = v22->m_Globals;
      if ( ParentObject->FxVerifierLock )
      {
        Size = 0LL;
        FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&Size, ParentObject, v22);
        v22[-1].m_BufferRawLA.QuadPart = Size;
      }
    }
    v22->m_DmaEnabler = v25;
    v22->__vftable = (FxCommonBuffer_vtbl *)FxCommonBuffer::`vftable';
    v22->m_ObjectFlags |= 0x800u;
    v22->m_BufferRawVA = 0LL;
    v22->m_BufferAlignedVA = 0LL;
    v22->m_BufferAlignedLA.QuadPart = 0LL;
    v22->m_BufferRawLA.QuadPart = 0LL;
    v22->m_Length = 0LL;
    v22->m_RawLength = 0LL;
    m_CommonBufferAlignment = v25->m_CommonBufferAlignment;
    Driver = 0LL;
    v22->m_Alignment = m_CommonBufferAlignment;
    v30 = pDmaEnabler;
    PPObject = 0LL;
    if ( v22->m_ObjectSize )
    {
      if ( v13 && v13->ExecutionLevel == WdfExecutionLevelPassive )
      {
        FxObject::MarkPassiveCallbacks(v22, ObjectLock);
        Driver = (FxObject *)PPObject;
      }
      if ( v30 )
      {
        Driver = v30;
        PPObject = v30;
      }
      else if ( v13 && (ParentObject = (_FX_DRIVER_GLOBALS *)v13->ParentObject) != 0LL )
      {
        FxObjectHandleGetPtr(v22->m_Globals, (unsigned __int64)ParentObject, 0x1000u, &PPObject);
        Driver = (FxObject *)PPObject;
      }
      else if ( !v22->m_ParentObject )
      {
        v42 = v22->m_Globals;
        if ( (FxCommonBuffer *)v42->Driver != v22 )
          Driver = v42->Driver;
        PPObject = Driver;
      }
      if ( Driver )
      {
        v31 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
        v43 = v31;
        if ( v22->m_ObjectState != 1 )
        {
          FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAssignParentObject);
          KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v31);
          CommonBuffer = -1073741738;
          goto LABEL_75;
        }
        if ( v22->m_ParentObject )
        {
          KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v31);
          CommonBuffer = -1071644147;
          goto LABEL_75;
        }
        v32 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
        v33 = Driver->m_ObjectState == 1;
        LOBYTE(Size) = v32;
        if ( v33 )
        {
          Blink = Driver->m_ChildListHead.Blink;
          if ( Blink->Flink != &Driver->m_ChildListHead )
            __fastfail(3u);
          p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
          v22->m_ChildEntry.Blink = Blink;
          Blink->Flink = p_m_ChildEntry;
          Driver->m_ChildListHead.Blink = p_m_ChildEntry;
          if ( !v22->m_DeviceBase )
            v22->m_DeviceBase = Driver->m_DeviceBase;
          KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v32);
          CommonBuffer = 0;
          v22->m_ParentObject = Driver;
        }
        else
        {
          FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, Size);
          CommonBuffer = -1073741738;
        }
        KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v43);
        if ( CommonBuffer < 0 )
          goto LABEL_75;
        v6 = v49;
      }
      if ( v13 )
      {
        m_ObjectSize = v22->m_ObjectSize;
        if ( m_ObjectSize )
          v37 = (char *)v22 + m_ObjectSize;
        else
          v37 = 0LL;
        EvtDestroyCallback = v13->EvtDestroyCallback;
        if ( EvtDestroyCallback )
          *((_QWORD *)v37 + 3) = EvtDestroyCallback;
        EvtCleanupCallback = v13->EvtCleanupCallback;
        if ( EvtCleanupCallback )
        {
          *((_QWORD *)v37 + 2) = EvtCleanupCallback;
          v22->m_ObjectFlags |= 0x400u;
        }
      }
      v22->m_ObjectFlags |= 8u;
      if ( v22->m_ObjectSize )
        v8 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( v22->m_Globals->FxVerifierOn )
        FxObject::Vf_VerifyLeakDetectionConsiderObject(v22, ParentObject);
      v40 = v48;
      v22->m_Alignment = v6->AlignmentRequirement;
      CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v22, v40);
      if ( CommonBuffer >= 0 )
      {
        *v12 = (WDFCOMMONBUFFER__ *)v8;
        return (unsigned int)CommonBuffer;
      }
    }
    else
    {
      CommonBuffer = -1073741816;
    }
LABEL_75:
    FxObject::DeleteFromFailedCreate(v22);
    return (unsigned int)CommonBuffer;
  }
  return result;
}
