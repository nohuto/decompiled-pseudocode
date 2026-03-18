/*
 * XREFs of ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C002FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxDevicePwrRequirementMachine::PowerNotRequiredD0(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PoxInterface->m_PkgPnp, PwrPolDevicePowerNotRequired, 0);
  return 8LL;
}
