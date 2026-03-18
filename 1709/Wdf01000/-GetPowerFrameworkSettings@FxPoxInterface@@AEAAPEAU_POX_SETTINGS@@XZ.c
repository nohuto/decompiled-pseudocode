/*
 * XREFs of ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002EA30
 * Callers:
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C000E880 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C002EA68 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002ED0C (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0030020 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0CF0 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C00A3B40 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C00A3C80 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 * Callees:
 *     <none>
 */

_POX_SETTINGS *__fastcall FxPoxInterface::GetPowerFrameworkSettings(FxPoxInterface *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 4) != 0 )
    return this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings;
  return (_POX_SETTINGS *)v1;
}
