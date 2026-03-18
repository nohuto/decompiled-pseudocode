/*
 * XREFs of ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001D258
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 * Callees:
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxDriver::FxDriver(
        FxDriver *this,
        _FX_DRIVER_GLOBALS *ArgDriverObject,
        _WDF_DRIVER_CONFIG *DriverConfig,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  size_t Size; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxVerifierLock *VerifierLock; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)&this->m_Type = 24121345;
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxObject::`vftable';
  this->m_Globals = FxDriverGlobals;
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
    FxObject::Vf_VerifyConstruct(this, ArgDriverObject, 0);
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v10 = this->m_Globals;
    if ( v10->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v10, this);
      this[-1].m_Config.EvtDriverDeviceAdd = (int (__fastcall *)(WDFDRIVER__ *, WDFDEVICE_INIT *))VerifierLock;
    }
  }
  this->FxNonPagedObject::FxObject::__vftable = (FxDriver_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedLock.m_Lock;
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead;
  this->m_DriverObject.m_DriverObject = (_DRIVER_OBJECT *)ArgDriverObject;
  this->m_DriverDeviceAdd.m_CallbackLock = 0LL;
  this->m_DriverDeviceAdd.Method = 0LL;
  this->m_CallbackMutexLock.m_Globals = FxDriverGlobals;
  this->m_CallbackMutexLock.m_OwnerThread = 0LL;
  this->m_CallbackMutexLock.m_RecursionCount = 0;
  this->m_CallbackMutexLock.m_Verifier = 0LL;
  this->m_CallbackMutexLock.__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 0;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_DriverUnload.Method = 0LL;
  RtlInitUnicodeString(&this->m_RegistryPath, 0LL);
  this->m_ExecutionLevel = WdfExecutionLevelDispatch;
  Size = 32LL;
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DisposeList = 0LL;
  memset(&this->m_Config, 0, sizeof(this->m_Config));
  this->m_Config.Size = 32;
  this->m_Config.EvtDriverDeviceAdd = 0LL;
  if ( DriverConfig->Size <= 0x20 )
    Size = DriverConfig->Size;
  memmove(&this->m_Config, DriverConfig, Size);
  this->m_DebuggerConnected = 0;
}
