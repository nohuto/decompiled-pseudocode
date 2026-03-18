/*
 * XREFs of ?InitializeMachine@FxSelfManagedIoMachine@@QEAAXPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C002FB68
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0028A80 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxSelfManagedIoMachine::InitializeMachine(
        FxSelfManagedIoMachine *this,
        _WDF_PNPPOWER_EVENT_CALLBACKS *Callbacks)
{
  FxPkgPnp *m_PkgPnp; // r8
  FxPkgPnp *v5; // r8
  FxPkgPnp *v6; // rdx
  FxPkgPnp *v7; // rcx
  FxPkgPnp *v8; // rcx

  m_PkgPnp = this->m_PkgPnp;
  this->m_DeviceSelfManagedIoCleanup.m_Method = Callbacks->EvtDeviceSelfManagedIoCleanup;
  this->m_DeviceSelfManagedIoCleanup.m_PkgPnp = m_PkgPnp;
  this->m_DeviceSelfManagedIoCleanup.m_CallbackType = FxCxCallbackSmIoCleanup;
  v5 = this->m_PkgPnp;
  this->m_DeviceSelfManagedIoFlush.m_Method = Callbacks->EvtDeviceSelfManagedIoFlush;
  this->m_DeviceSelfManagedIoFlush.m_PkgPnp = v5;
  this->m_DeviceSelfManagedIoFlush.m_CallbackType = FxCxCallbackSmIoFlush;
  v6 = this->m_PkgPnp;
  this->m_DeviceSelfManagedIoInit.m_Method = Callbacks->EvtDeviceSelfManagedIoInit;
  this->m_DeviceSelfManagedIoInit.m_PkgPnp = v6;
  this->m_DeviceSelfManagedIoInit.m_CallbackType = FxCxCallbackSmIoInit;
  v7 = this->m_PkgPnp;
  this->m_DeviceSelfManagedIoSuspend.m_Method = Callbacks->EvtDeviceSelfManagedIoSuspend;
  this->m_DeviceSelfManagedIoSuspend.m_PkgPnp = v7;
  this->m_DeviceSelfManagedIoSuspend.m_CallbackType = FxCxCallbackSmIoSuspend;
  v8 = this->m_PkgPnp;
  this->m_DeviceSelfManagedIoRestart.m_Method = Callbacks->EvtDeviceSelfManagedIoRestart;
  this->m_DeviceSelfManagedIoRestart.m_PkgPnp = v8;
  this->m_DeviceSelfManagedIoRestart.m_CallbackType = FxCxCallbackSmIoRestart;
}
