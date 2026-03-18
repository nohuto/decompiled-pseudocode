/*
 * XREFs of ?PowerRequiredDx@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x1C000EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxDevicePwrRequirementMachine::PowerRequiredDx(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(This->m_PoxInterface->m_PkgPnp, PwrPolDevicePowerRequired, 0);
  return 8LL;
}
