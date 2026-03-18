/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00290D0
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002E6C0 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C000E098 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C000F8AC (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0039750 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0039788 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C009A488 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C009A680 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  FxPostProcessInfo *v2; // r13
  unsigned __int64 *p_m_Lock; // r12
  const POWER_STATE_TABLE *v5; // rsi
  KIRQL v6; // r8
  signed int v7; // r14d
  int m_SingularEventsPresent; // ecx
  __int64 v9; // rdx
  _WDF_DEVICE_POWER_STATE _a3; // edi
  FxDeviceBase *v11; // rax
  _WDF_DEVICE_POWER_STATE _a4; // r15d
  FxDeviceBase *v13; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  __int64 v18; // rdx
  FxPowerStateCallback *v19; // rcx
  __int64 v20; // rsi
  int v21; // r14d
  FxPowerStateCallback *v22; // rcx
  unsigned __int8 m_QueueFlags; // al
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerEvent PowerEvent; // eax
  __int64 v26; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int globals; // r8d
  FxDeviceBase *v29; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v31; // r9
  FxDeviceBase *v32; // r9
  unsigned __int16 v33; // ax
  WDFDEVICE__ *v34; // r9
  _LARGE_INTEGER v35; // rdx
  FxDeviceBase *v36; // r9
  unsigned __int16 v37; // ax
  WDFDEVICE__ *v38; // r9
  FxDeviceBase *m_DeviceBase; // r8
  const void *v40; // rdx
  FxDeviceBase *v41; // rdx
  const void *v42; // rcx
  MxTimer TimerContext; // [rsp+60h] [rbp-A0h] BYREF
  FxPkgPnp *v45; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  _WDF_DEVICE_POWER_NOTIFICATION_DATA NotificationData; // [rsp+110h] [rbp+10h] BYREF

  v2 = Info;
  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  while ( 1 )
  {
    v5 = &FxPkgPnp::m_WdfPowerStates[(HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF)
                                   - 768];
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    if ( this->m_PowerMachine.m_QueueHead == this->m_PowerMachine.m_QueueTail )
      break;
    v7 = this->m_PowerMachine.m_Queue.Events[this->m_PowerMachine.m_QueueHead];
    if ( (v7 & 0x3900) == 0 && (*(_DWORD *)&v5->StateInfo.Bits & 1) == 0 )
      goto LABEL_26;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & v7) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)v7;
    this->m_PowerMachine.m_QueueHead = ((unsigned int)this->m_PowerMachine.m_QueueHead + 1)
                                     % this->m_PowerMachine.m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v6);
    if ( v5->FirstTargetState.PowerEvent == v7 )
    {
      _a3 = v5->FirstTargetState.TargetState;
      goto LABEL_9;
    }
    OtherTargetStates = v5->OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerEvent = OtherTargetStates->PowerEvent, v9 = 0LL, OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_37:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v40 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          v40 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v40,
          m_DeviceBase->m_DeviceObject.m_DeviceObject,
          HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
          v7);
      }
      globals = *(_DWORD *)&v5->StateInfo.Bits >> 1;
      if ( (globals & v7) == 0 )
      {
        v41 = this->m_DeviceBase;
        v42 = (const void *)((unsigned __int64)v41 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v41->m_ObjectSize )
          v42 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          v42,
          v41->m_DeviceObject.m_DeviceObject,
          HIDWORD(v41[1].FxNonPagedObject::FxObject::__vftable),
          v7,
          globals);
      }
      if ( v7 <= 32 && v7 > 0 )
      {
        if ( v7 <= 2 )
        {
          LOBYTE(v9) = 1;
          this->PowerReleasePendingDeviceIrp(this, v9);
        }
        else if ( v7 == 8 || v7 == 16 || v7 == 32 )
        {
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
        }
      }
    }
    else
    {
      v26 = 0LL;
      while ( PowerEvent != v7 )
      {
        v9 = (unsigned int)(v9 + 1);
        v26 = (unsigned int)v9;
        PowerEvent = OtherTargetStates[v9].PowerEvent;
        if ( PowerEvent == PowerEventMaximum )
          goto LABEL_37;
      }
      _a3 = OtherTargetStates[v26].TargetState;
LABEL_9:
      if ( _a3 == WdfDevStatePowerNull )
        goto LABEL_37;
      v11 = this->m_DeviceBase;
      v45 = this;
      TimerContext.m_Timer.m_TimerContext = 0LL;
      TimerContext.m_Timer.m_TimerCallback = 0LL;
      TimerContext.m_Timer.m_Period = 0;
      TimerContext.m_Timer.m_KernelExTimer = 0LL;
      _a4 = HIDWORD(v11[1].FxNonPagedObject::FxObject::__vftable);
      do
      {
        v13 = this->m_DeviceBase;
        _a2 = v13->m_DeviceObject.m_DeviceObject;
        if ( v13->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x15u, 0xEu, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3, _a4);
        m_PowerStateCallbacks = this->m_PowerStateCallbacks;
        if ( m_PowerStateCallbacks )
        {
          v29 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          m_ObjectSize = v29->m_ObjectSize;
          v31 = (WDFDEVICE__ *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v31 = 0LL;
          FxPowerStateCallback::Invoke(m_PowerStateCallbacks, _a4, StateNotificationLeaveState, v31, &NotificationData);
        }
        m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
        v18 = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
        this->m_PowerMachine.m_HistoryIndex = v18;
        this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
        v19 = this->m_PowerStateCallbacks;
        if ( v19 )
        {
          v32 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v33 = v32->m_ObjectSize;
          v34 = (WDFDEVICE__ *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v33 )
            v34 = 0LL;
          FxPowerStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v34, &NotificationData);
        }
        _a4 = _a3;
        v20 = (_a3 & 0xFFFF7FFF) - 768;
        HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        if ( FxPkgPnp::m_WdfPowerStates[v20].StateFunc )
        {
          v21 = _a3 & 0x8000;
          if ( (_a3 & 0x8000) != 0 )
          {
            MxTimer::Initialize(&TimerContext, &TimerContext, FxWatchdog::_WatchdogDpc, 0);
            CurrentThread = KeGetCurrentThread();
            v35.QuadPart = -864000000000LL;
            if ( !v45->m_SharedPower.m_ExtendWatchDogTimer )
              v35.QuadPart = -6000000000LL;
            MxTimer::Start(&TimerContext, v35, 0);
          }
          _a3 = FxPkgPnp::m_WdfPowerStates[v20].StateFunc(this);
          if ( v21 )
            MxTimer::Stop(&TimerContext);
        }
        else
        {
          _a3 = WdfDevStatePowerNull;
        }
        v22 = this->m_PowerStateCallbacks;
        if ( v22 )
        {
          v36 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v37 = v36->m_ObjectSize;
          v38 = (WDFDEVICE__ *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v37 )
            v38 = 0LL;
          FxPowerStateCallback::Invoke(v22, _a4, StateNotificationPostProcessState, v38, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePowerNull );
      p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
      v2 = Info;
      if ( TimerContext.m_Timer.m_IsExtTimer )
      {
        if ( TimerContext.m_Timer.m_KernelExTimer )
        {
          LOBYTE(v18) = 1;
          ExDeleteTimer(TimerContext.m_Timer.m_KernelExTimer, v18, 0LL, 0LL);
        }
      }
    }
  }
  m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0 && !this->m_PowerMachine.m_WorkItemRunningCount )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      v2->m_DeleteObject = 1;
    }
    if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
    {
      v2->m_Event = this->m_PowerMachine.m_WorkItemFinished;
      this->m_PowerMachine.m_WorkItemFinished = 0LL;
    }
  }
LABEL_26:
  KeReleaseSpinLock(p_m_Lock, v6);
}
