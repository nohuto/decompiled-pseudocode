/*
 * XREFs of ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0026110
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026258 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureConstraints(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v5; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  int v7; // r8d
  __int32 v8; // r10d
  _LIST_ENTRY *i; // rcx
  _WDF_EXECUTION_LEVEL Flink; // eax
  _WDF_SYNCHRONIZATION_SCOPE _a4; // r8d
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  unsigned int v13; // edi
  FxCallbackLock *v15; // rax
  _LIST_ENTRY *v16; // rcx
  FxDeviceBase *m_DeviceBase; // r9
  _LIST_ENTRY *Blink; // rcx
  const void *_a3; // r10
  unsigned __int64 m_Driver; // rcx
  unsigned __int16 v21; // ax
  const void *_a2; // rcx
  FxDeviceBase *v23; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v25; // rcx
  _WDF_EXECUTION_LEVEL parentExecLevel; // [rsp+70h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentSynchScope; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &parentExecLevel, &parentSynchScope);
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu);
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  v8 = v7 - 9;
  this->m_ExecutionLevel = 3 - IsVersionGreaterThanOrEqualTo;
  for ( i = FileObjInfoList->Blink; i != FileObjInfoList; i = i->Blink )
  {
    if ( LODWORD(i[5].Blink) )
    {
      Flink = (_WDF_EXECUTION_LEVEL)i[7].Flink;
      if ( Flink == WdfExecutionLevelInheritFromParent )
        Flink = parentExecLevel;
      if ( Flink == v8 )
        this->m_ExecutionLevel = v8;
      _a4 = HIDWORD(i[7].Flink);
      if ( _a4 == WdfSynchronizationScopeInheritFromParent )
        _a4 = parentSynchScope;
      if ( BYTE4(i[9].Flink) )
      {
        if ( _a4 != WdfSynchronizationScopeNone )
        {
          v13 = -1073741808;
          m_DeviceBase = this->m_DeviceBase;
          Blink = i[9].Blink;
          _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_DeviceBase->m_ObjectSize )
            _a3 = 0LL;
          if ( Blink )
            m_Driver = (unsigned __int64)Blink[1].Flink;
          else
            m_Driver = (unsigned __int64)m_DeviceBase->m_Driver;
          v21 = *(_WORD *)(m_Driver + 10);
          _a2 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v21 )
            _a2 = 0LL;
          WPP_IFR_SF_qqLd(m_Globals, 0x10u, 0x12u, 0xCu, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, -1073741808);
          FxVerifierDbgBreakPoint(m_Globals);
          return v13;
        }
      }
      else
      {
        this->m_SynchronizationScope = _a4;
      }
    }
  }
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope == WdfSynchronizationScopeQueue )
  {
    v13 = -1073741808;
    WPP_IFR_SF_d(m_Globals, v8, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, -1073741808);
    return v13;
  }
  if ( this->m_ExecutionLevel == v8 )
    this->m_ObjectFlags |= 0x11u;
  if ( m_SynchronizationScope == WdfSynchronizationScopeNone || m_SynchronizationScope != v8 )
    return 0;
  if ( parentExecLevel == v8 )
  {
    v15 = this->m_DeviceBase->GetCallbackLockPtr(&this->m_DeviceBase->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
    this->m_CallbackLockPtr = v15;
    v16 = FileObjInfoList->Flink;
    if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(v16[9].Flink) )
    {
      v16[1].Flink = (_LIST_ENTRY *)v15;
      v16[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      v16[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
    }
    return 0;
  }
  v13 = -1073741808;
  v23 = this->m_DeviceBase;
  m_ObjectSize = v23->m_ObjectSize;
  v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v25 = 0LL;
  WPP_IFR_SF_qd(m_Globals, v8, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, v25, -1073741808);
  return v13;
}
