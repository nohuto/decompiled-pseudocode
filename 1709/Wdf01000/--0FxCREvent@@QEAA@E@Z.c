/*
 * XREFs of ??0FxCREvent@@QEAA@E@Z @ 0x1C00244A8
 * Callers:
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0023610 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00641E0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0072718 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C00746D0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0087EEC (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009CC3C (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009E0C4 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A28DC (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00A3990 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCREvent::FxCREvent(FxCREvent *this, unsigned __int8 InitialState)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 0);
  this->m_Event.m_DbgFlagIsInitialized = 1;
}
