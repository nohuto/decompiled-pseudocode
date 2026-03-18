/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0018820
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C00143F0 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0018ADC (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0018EB0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0039788 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

int __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int EffectiveLock; // edi
  unsigned int v11; // ecx
  FxObject *m_CallbackLockObject; // rax
  FxDeviceBase *v13; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // r15d
  unsigned int v15; // ecx
  FxTagTracker *m_Lock; // rax
  void **v17; // r8
  unsigned int m_TolerableDelay; // ecx
  unsigned __int8 m_UseHighResolutionTimer; // dl
  unsigned int m_Period; // eax
  __int64 v22; // r8
  struct _EX_TIMER *v23; // rax
  unsigned __int16 v24; // r9
  IFxHasCallbacks *pCallbacks; // [rsp+70h] [rbp+8h] BYREF

  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Period = Config->Period;
  if ( Config->Size > 0x18 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)Attributes, 0xDu) )
  {
    m_TolerableDelay = this->m_TolerableDelay;
    m_UseHighResolutionTimer = this->m_UseHighResolutionTimer;
    m_Period = this->m_Period;
    this->m_Timer.m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerExtCallbackThunk;
    this->m_Timer.m_Timer.m_TimerContext = this;
    this->m_Timer.m_Timer.m_Period = m_Period;
    if ( m_TolerableDelay )
    {
      v22 = 8LL;
    }
    else
    {
      v22 = 0LL;
      if ( m_UseHighResolutionTimer )
        v22 = 4LL;
    }
    v23 = (struct _EX_TIMER *)ExAllocateTimer(FxTimer::_FxTimerExtCallbackThunk, this, v22);
    this->m_Timer.m_Timer.m_KernelExTimer = v23;
    this->m_Timer.m_Timer.m_IsExtTimer = 1;
    EffectiveLock = v23 == 0LL ? 0xC000009A : 0;
  }
  else
  {
    EffectiveLock = MxTimer::Initialize(
                      &this->m_Timer,
                      this,
                      (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerDpcThunk,
                      this->m_Period);
  }
  if ( EffectiveLock < 0 )
  {
    v24 = 11;
    goto LABEL_29;
  }
  v11 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_CallbackLockObject = this[-1].m_CallbackLockObject;
  else
    m_CallbackLockObject = 0LL;
  if ( m_CallbackLockObject )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_CallbackLockObject,
      this,
      191,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
      TagAddRef,
      v11);
  v13 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v13;
  if ( !v13 )
    return -1073741808;
  ExecutionLevel = Attributes->ExecutionLevel;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    ExecutionLevel == WdfExecutionLevelPassive,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return EffectiveLock;
  }
  if ( ExecutionLevel == WdfExecutionLevelPassive )
  {
    EffectiveLock = FxSystemWorkItem::_Create(
                      m_Globals,
                      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                      &this->m_SystemWorkItem);
    if ( EffectiveLock < 0 )
    {
      v24 = 13;
LABEL_29:
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v24, WPP_FxTimer_cpp_Traceguids, EffectiveLock);
      return EffectiveLock;
    }
  }
  v15 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
  else
    m_Lock = 0LL;
  if ( m_Lock )
    FxTagTracker::UpdateTagHistory(
      m_Lock,
      this,
      299,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
      TagAddRef,
      v15);
  v17 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v17, ParentObject, 1u);
}
