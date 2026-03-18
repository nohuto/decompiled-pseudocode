/*
 * XREFs of ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000F140
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C000F7B4 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B720 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C009E004 (-PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

int __fastcall FxPkgPdo::_DispatchQueryPower(FxPkgPnp *This, FxIrp *Irp)
{
  int Power; // r8d
  __int64 v5; // r9

  Power = 0;
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options
    && FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
  {
    Power = FxPkgPnp::PowerPolicyHandleSystemQueryPower(This, *(_SYSTEM_POWER_STATE *)(v5 + 24));
  }
  return FxPkgPnp::CompletePowerRequest(This, Irp, Power);
}
