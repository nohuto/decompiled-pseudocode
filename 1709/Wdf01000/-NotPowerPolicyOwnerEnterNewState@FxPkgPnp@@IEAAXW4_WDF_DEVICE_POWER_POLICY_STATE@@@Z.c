/*
 * XREFs of ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C002C790
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002CB30 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C009A644 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::NotPowerPolicyOwnerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_STATE NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // ebx
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // esi
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerPolicyStateCallback *v10; // rcx
  __int64 v11; // rdx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *v12; // rcx
  int CurrentTargetState; // eax
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPowerPolicyStateCallback *v15; // rcx
  FxDeviceBase *v16; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v18; // r9
  FxDeviceBase *v19; // r9
  unsigned __int16 v20; // ax
  WDFDEVICE__ *v21; // r9
  FxDeviceBase *v22; // r9
  unsigned __int16 v23; // ax
  WDFDEVICE__ *v24; // r9
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA data; // [rsp+50h] [rbp-48h] BYREF

  if ( NewState != WdfDevStatePwrPolNull )
  {
    _a3 = NewState;
    _a4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    do
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( m_DeviceBase->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xAu,
        WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
        _a1,
        _a2,
        _a3,
        _a4);
      m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
      if ( m_PowerPolicyStateCallbacks )
      {
        v16 = this->m_DeviceBase;
        data.Type = StateNotificationLeaveState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        m_ObjectSize = v16->m_ObjectSize;
        v18 = (WDFDEVICE__ *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v18 = 0LL;
        FxPowerPolicyStateCallback::Invoke(m_PowerPolicyStateCallbacks, _a4, StateNotificationLeaveState, v18, &data);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
      v10 = this->m_PowerPolicyStateCallbacks;
      if ( v10 )
      {
        v19 = this->m_DeviceBase;
        data.Type = StateNotificationEnterState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        v20 = v19->m_ObjectSize;
        v21 = (WDFDEVICE__ *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20 )
          v21 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v10, _a3, StateNotificationEnterState, v21, &data);
      }
      _a4 = _a3;
      v11 = 0LL;
      v12 = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
      CurrentTargetState = 1280;
      while ( CurrentTargetState != _a3 )
      {
        v11 = (unsigned int)(v11 + 1);
        v12 = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[(unsigned int)v11];
        CurrentTargetState = v12->CurrentTargetState;
        if ( v12->CurrentTargetState == WdfDevStatePwrPolNull )
        {
          v12 = 0LL;
          break;
        }
      }
      StateFunc = v12->StateFunc;
      if ( StateFunc )
        _a3 = ((unsigned int (__fastcall *)(FxPkgPnp *, __int64))StateFunc)(this, v11);
      else
        _a3 = WdfDevStatePwrPolNull;
      v15 = this->m_PowerPolicyStateCallbacks;
      if ( v15 )
      {
        v22 = this->m_DeviceBase;
        data.Type = StateNotificationPostProcessState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        v23 = v22->m_ObjectSize;
        v24 = (WDFDEVICE__ *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v23 )
          v24 = 0LL;
        FxPowerPolicyStateCallback::Invoke(v15, _a4, StateNotificationPostProcessState, v24, &data);
      }
    }
    while ( _a3 != WdfDevStatePwrPolNull );
  }
}
