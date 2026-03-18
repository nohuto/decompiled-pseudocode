/*
 * XREFs of ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0005200
 * Callers:
 *     imp_WdfRequestCreate @ 0x1C0006A00 (imp_WdfRequestCreate.c)
 *     ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C0037F44 (--0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0063EB0 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00641E0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxRequestBase::FxRequestBase(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        _IRP *Irp,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxObjectType ObjectType)
{
  unsigned __int8 v10; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx
  KIRQL v14; // al
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxVerifierLock *VerifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable';
  this->m_Type = 4104;
  v10 = ObjectType == FxObjectTypeEmbedded;
  this->m_ObjectSize = (ObjectSize + 15) & 0xFFF0;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, v10);
  this->__vftable = (FxRequestBase_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v15 = this->m_Globals;
    if ( v15->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v15, this);
      *(_QWORD *)&this[-1].m_IrpCompletionReferenceCount = VerifierLock;
    }
  }
  v10 = Caller == FxRequestConstructorCallerIsDriver;
  this->__vftable = (FxRequestBase_vtbl *)FxRequestBase::`vftable';
  this->m_Irp.m_Irp = Irp;
  this->m_CancelRoutine.m_Cancel = 0LL;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_CanComplete = 0;
  if ( v10 )
  {
    if ( Ownership == FxRequestOwnsIrp )
      this->m_IrpAllocation = 1;
    else
      this->m_IrpAllocation = 2;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      this->m_ObjectFlags |= 0x800u;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
    }
  }
  else if ( Ownership == FxRequestOwnsIrp )
  {
    this->m_IrpAllocation = 1;
  }
  else
  {
    this->m_IrpAllocation = 0;
    this->m_CanComplete = 1;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_Completed = this->m_Irp.m_Irp == 0LL;
  this->m_Canceled = 0;
  this->m_PriorityBoost = 0;
  this->m_RequestContext = 0LL;
  this->m_Timer = 0LL;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
  this->m_DrainSingleEntry.Next = 0LL;
  *(_QWORD *)&this->m_SystemBufferOffset = 0LL;
  this->m_IrpQueue = 0LL;
  *(_DWORD *)&this->m_OutputBufferOffset = 0;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_AllocatedMdl = 0LL;
  this->m_CompletionState = 0;
}
