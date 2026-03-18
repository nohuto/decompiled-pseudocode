/*
 * XREFs of ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BF80
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C000F860 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0019C10 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002FBFC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C0063494 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoNP(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v4; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine
    && (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
  {
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33582 : 33634;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)1);
  FxPkgPnp::PowerSendPowerUpEvents(This);
  LOBYTE(v4) = 1;
  This->PowerReleasePendingDeviceIrp(This, v4);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 33546 : 33544;
}
