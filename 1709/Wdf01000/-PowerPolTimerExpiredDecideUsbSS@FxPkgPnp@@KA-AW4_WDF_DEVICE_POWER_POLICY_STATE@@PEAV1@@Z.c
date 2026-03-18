/*
 * XREFs of ?PowerPolTimerExpiredDecideUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00300B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C002EE40 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredDecideUsbSS(FxPkgPnp *This)
{
  if ( (int)FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1413LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable != 0 ? 1333 : 1331;
}
