/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00182E4
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x1C0018240 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035AC0 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001FE44 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  void **v5; // r14
  _POOL_TYPE v7; // ebx
  ULONG Tag; // edi
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  int v17; // ebx
  unsigned __int64 ContextSizeOverride; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (void **)LockHandle;
  v7 = ExDefaultNonPagedPoolType;
  *LockHandle = 0LL;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x90u, 0, ContextSize, (unsigned __int64 *)&LockHandle) < 0 )
    goto LABEL_16;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v14 = FxPoolAllocator(
          FxDriverGlobals,
          &FxDriverGlobals->FxPoolFrameworks,
          v7,
          (unsigned __int64)LockHandle,
          Tag,
          Caller);
  v15 = v14;
  if ( v14 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v14, 0, 0x30uLL);
      *((_DWORD *)v15 + 8) = 1146058822;
      v15 += 6;
    }
    memset(v15 + 18, 0, 0x30uLL);
    v15[18] = v15;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(v15 + 24, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v15[22] = Attributes->ContextTypeInfo;
    }
  }
  if ( v15 )
  {
    *((_DWORD *)v15 + 2) = 9441315;
    *v15 = &FxObject::`vftable';
    v15[2] = FxDriverGlobals;
    v15[7] = 0LL;
    *((_BYTE *)v15 + 48) = 1;
    FxObject::Construct((FxObject *)v15, 0);
    *((_BYTE *)v15 + 128) = 0;
    KeInitializeEvent((PRKEVENT)(v15 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v15 + 128) = 1;
    v15[17] = 0LL;
    *v15 = &FxObject::`vftable';
  }
  else
  {
LABEL_16:
    v15 = 0LL;
  }
  if ( v15 )
  {
    KeInitializeEvent((PRKEVENT)(v15 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v15 + 128) = 1;
    v17 = FxObject::Commit((FxObject *)v15, Attributes, v5, ParentObject, AssignDriverAsDefaultParent);
    if ( v17 < 0 )
      FxObject::DeleteFromFailedCreate((FxObject *)v15);
  }
  else
  {
    v17 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)v17;
}
