/*
 * XREFs of ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009B650
 * Callers:
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B5F0 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B630 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C000F860 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00347F0 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0063354 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0063414 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00634D0 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0065660 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedNP(FxPkgPnp *this)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  POWER_STATE _a4; // esi
  char v4; // al
  FxDeviceBase *m_DeviceBase; // rdx
  bool v6; // bl
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v8; // rdx
  int v9; // eax
  int v10; // r8d
  FxDeviceBase *v11; // rax
  const void *_a2; // rdx
  int v13; // eax
  FxDeviceBase *v14; // rdx
  unsigned __int16 v15; // ax
  WDFDEVICE__ *v16; // rdx
  __int64 v18; // rdx

  CurrentStackLocation = this->m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
  _a4.SystemState = PowerSystemHibernate;
  if ( CurrentStackLocation->Parameters.Create.EaLength - 4 > 2 )
    _a4.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( this->m_SystemPowerState == 5 && this->m_SpecialFileCount[1] )
    _a4.SystemState = PowerSystemShutdown;
  v4 = FxPkgPnp::PowerDmaPowerDown(this);
  m_DeviceBase = this->m_DeviceBase;
  v6 = v4 == 0;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v8 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v8 = 0LL;
  FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
    (FxPnpDeviceRelationsQuery *)&this->m_DeviceD0ExitPreInterruptsDisabled,
    v8,
    _a4.SystemState);
  v10 = v9;
  if ( v9 < 0 )
  {
    v6 = 1;
    v11 = this->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x15u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v11->m_DeviceObject.m_DeviceObject,
      _a4.SystemState,
      v10);
  }
  v13 = FxPkgPnp::NotifyResourceObjectsDx(this, 1);
  v14 = this->m_DeviceBase;
  if ( v13 < 0 )
    v6 = 1;
  v15 = v14->m_ObjectSize;
  v16 = (WDFDEVICE__ *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4.SystemState;
  if ( !v15 )
    v16 = 0LL;
  this->m_DeviceD0Exit.m_Device = v16;
  if ( (int)FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v6 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    v6 = 1;
  }
  if ( v6 )
  {
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  else
  {
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
    LOBYTE(v18) = 1;
    this->PowerReleasePendingDeviceIrp(this, v18);
    return 1;
  }
}
