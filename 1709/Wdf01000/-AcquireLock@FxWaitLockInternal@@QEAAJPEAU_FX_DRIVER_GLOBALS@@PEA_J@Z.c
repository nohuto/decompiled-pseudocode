/*
 * XREFs of ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002F930
 * Callers:
 *     imp_WdfInterruptAcquireLock @ 0x1C0002080 (imp_WdfInterruptAcquireLock.c)
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C00213B0 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C002890C (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C002C914 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002F460 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002F670 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0030100 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0063680 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0064C1C (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0083CA0 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0090A3C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0091B28 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C0091CD0 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0092940 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0098B30 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C009D0A0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?TryToAcquireLock@FxInterrupt@@QEAAEXZ @ 0x1C00A20B4 (-TryToAcquireLock@FxInterrupt@@QEAAEXZ.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A31F8 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C00A3580 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWaitLockInternal::AcquireLock(
        FxWaitLockInternal *this,
        _FX_DRIVER_GLOBALS *Timeout,
        _LARGE_INTEGER *FxDriverGlobals)
{
  unsigned int v5; // ebx
  _LARGE_INTEGER li; // [rsp+48h] [rbp+10h] BYREF

  li.QuadPart = (__int64)Timeout;
  if ( FxDriverGlobals )
    li = *FxDriverGlobals;
  KeEnterCriticalRegion();
  v5 = KeWaitForSingleObject(
         this,
         Executive,
         0,
         0,
         (PLARGE_INTEGER)((unsigned __int64)&li & -(__int64)(FxDriverGlobals != 0LL)));
  if ( v5 == 258 )
    KeLeaveCriticalRegion();
  else
    this->m_OwningThread = KeGetCurrentThread();
  return v5;
}
