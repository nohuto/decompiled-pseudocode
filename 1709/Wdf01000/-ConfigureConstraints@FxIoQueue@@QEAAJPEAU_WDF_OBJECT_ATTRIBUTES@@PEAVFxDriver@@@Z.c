/*
 * XREFs of ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C001AE2C
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001B040 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDDd @ 0x1C00781CC (WPP_IFR_SF_qDDd.c)
 */

__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r14
  _WDF_EXECUTION_LEVEL v7; // r10d
  _WDF_EXECUTION_LEVEL globals; // r8d
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCallbackLock *m_CallbackLockPtr; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  const void *v15; // rcx
  int v16; // [rsp+40h] [rbp-38h]
  _WDF_EXECUTION_LEVEL ParentLevel; // [rsp+80h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE ParentScope; // [rsp+88h] [rbp+10h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &ParentLevel, &ParentScope);
  v7 = ParentLevel;
  if ( this->m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
    this->m_ExecutionLevel = ParentLevel;
  if ( this->m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    this->m_SynchronizationScope = ParentScope;
  globals = this->m_ExecutionLevel;
  this->m_CallbackLockObjectPtr = this;
  if ( globals == WdfExecutionLevelPassive )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
    this->m_CallbackLockPtr = &this->m_CallbackMutexLock;
  }
  else
  {
    this->m_CallbackLockPtr = p_m_CallbackSpinLock;
  }
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope != WdfSynchronizationScopeDevice )
  {
    if ( m_SynchronizationScope != WdfSynchronizationScopeQueue )
    {
      this->m_IoDefault.m_CallbackLock = 0LL;
      this->m_IoStop.m_CallbackLock = 0LL;
      this->m_IoResume.m_CallbackLock = 0LL;
      this->m_IoRead.m_CallbackLock = 0LL;
      this->m_IoWrite.m_CallbackLock = 0LL;
      this->m_IoDeviceControl.m_CallbackLock = 0LL;
      this->m_IoInternalDeviceControl.m_CallbackLock = 0LL;
      this->m_PurgeComplete.m_CallbackLock = 0LL;
      this->m_ReadyNotify.m_CallbackLock = 0LL;
      this->m_IoCanceledOnQueue.m_CallbackLock = 0LL;
      this->m_IoCancelCallbackLockPtr = 0LL;
      return 0LL;
    }
LABEL_18:
    m_CallbackLockPtr = this->m_CallbackLockPtr;
    this->m_IoDefault.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoStop.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoResume.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoRead.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoWrite.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoDeviceControl.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoInternalDeviceControl.m_CallbackLock = m_CallbackLockPtr;
    this->m_PurgeComplete.m_CallbackLock = m_CallbackLockPtr;
    this->m_ReadyNotify.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoCanceledOnQueue.m_CallbackLock = m_CallbackLockPtr;
    this->m_IoCancelCallbackLockPtr = m_CallbackLockPtr;
    return 0LL;
  }
  if ( Caller && (m_Globals = this->m_Globals, Caller != m_Globals->Driver) )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741811);
  }
  else
  {
    if ( v7 == globals )
    {
      this->m_CallbackLockPtr = (FxCallbackLock *)((__int64 (__fastcall *)(IFxHasCallbacks *))this->m_DeviceBase->GetCallbackLockPtr)(&this->m_DeviceBase->IFxHasCallbacks);
      goto LABEL_18;
    }
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qDDd(this->m_Globals, (_BYTE)this + 16, 0xDu, 0x15u, WPP_FxIoQueue_cpp_Traceguids, v15, v7, globals, v16);
  }
  return 3221225485LL;
}
