/*
 * XREFs of ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C002F1B8
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002C21C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C002F144 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdleTimeoutManagement::UpdateIdleTimeoutStatus(
        IdleTimeoutManagement *this,
        IdleTimeoutManagement::IdleTimeoutStatusFlag Flag)
{
  volatile int m_IdleTimeoutStatus; // r8d
  signed __int32 v3; // eax

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  if ( (this->m_IdleTimeoutStatus & Flag) != 0 )
    return 1LL;
  if ( (m_IdleTimeoutStatus & 1) != 0 )
    return 2LL;
  v3 = _InterlockedCompareExchange(&this->m_IdleTimeoutStatus, Flag | m_IdleTimeoutStatus, m_IdleTimeoutStatus);
  if ( m_IdleTimeoutStatus == v3 )
    return 0LL;
  else
    return ((v3 & 1) == 0) | 2u;
}
