/*
 * XREFs of ?PowerCheckParentOverload@FxPkgPdo@@EEAAJPEAE@Z @ 0x1C0021260
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C002C674 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 */

int __fastcall FxPkgPdo::PowerCheckParentOverload(FxPkgPdo *this, unsigned __int8 *ParentOn)
{
  return FxPkgPnp::PowerPolicyCanChildPowerUp(
           *(FxPkgPnp **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL),
           ParentOn);
}
