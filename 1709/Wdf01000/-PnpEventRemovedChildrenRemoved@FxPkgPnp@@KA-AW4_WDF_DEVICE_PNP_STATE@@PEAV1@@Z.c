/*
 * XREFs of ?PnpEventRemovedChildrenRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00996E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovedChildrenRemoved(FxPkgPnp *This)
{
  return ((__int64 (__fastcall *)(FxPkgPnp *))This->PnpGetPostRemoveState)(This);
}
