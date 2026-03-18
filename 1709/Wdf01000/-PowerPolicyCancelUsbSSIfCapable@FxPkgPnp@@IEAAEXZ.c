/*
 * XREFs of ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C000F754
 * Callers:
 *     ?PowerPolWaitingArmedIoPresentCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F120 (-PowerPolWaitingArmedIoPresentCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0460 (-PowerPolCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingUsbSSForSystemSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A04B0 (-PowerPolCancelingUsbSSForSystemSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0E40 (-PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingD0CancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0ED0 (-PowerPolStoppingD0CancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableCleanup@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1410 (-PowerPolTimerExpiredWakeCapableCleanup@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableDxAllocFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1460 (-PowerPolTimerExpiredWakeCapableDxAllocFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A14D0 (-PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_ST.c)
 *     ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A16C0 (-PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1700 (-PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolWaitingArmedWakeSucceededCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1760 (-PowerPolWaitingArmedWakeSucceededCancelUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A17C0 (-PowerPolWakeFailedUsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1860 (-PowerPolWokeFromS0UsbSS@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rcx

  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  if ( !m_UsbIdle || m_UsbIdle->m_EventDropped )
    return 0;
  IoCancelIrp(m_UsbIdle->m_IdleIrp.m_Irp);
  return 1;
}
