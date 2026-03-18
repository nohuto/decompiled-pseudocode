/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0021240
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0021958 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryCapabilities(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryCapabilities(This, Irp);
}
