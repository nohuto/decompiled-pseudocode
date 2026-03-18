/*
 * XREFs of ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0098B30
 * Callers:
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0098C80 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099830 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0019E1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C002991C (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002F930 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002FBFC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0072718 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C009B8D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C009D510 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpCleanupForRemove(FxPkgPnp *this, unsigned __int8 GracefulRemove)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  _SINGLE_LIST_ENTRY *Next; // rdi
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx

  FxWmiIrpHandler::Deregister((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject, GracefulRemove);
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, v4, 0LL);
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  while ( Next )
  {
    v6 = Next[-1].Next == 0LL;
    LOBYTE(Next[1].Next) = 0;
    if ( !v6 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)&Next[-2], 0);
    Next = Next->Next;
  }
  this->m_DeviceInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = GracefulRemove;
  this->DeleteSymbolicLinkOverload(this, v7);
  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 2, v8, v9);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventFlush, 0LL);
  FxPkgPnp::NotifyResourceobjectsToReleaseResources(this);
  FxPkgPnp::SaveState(this, 0);
  if ( this->m_SharedPower.m_WaitWakeOwner )
    FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741810);
}
