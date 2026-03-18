/*
 * XREFs of ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C002899C
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002C21C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C009E8B0 (-_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C009E8D0 (-_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetS0IdleState(FxPkgPnp *this, unsigned __int8 State, unsigned __int8 a3)
{
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled = State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 1;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0IdlePolicyChanged, a3);
}
