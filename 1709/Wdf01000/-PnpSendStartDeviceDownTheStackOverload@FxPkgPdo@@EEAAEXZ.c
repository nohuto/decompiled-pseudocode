/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgPdo@@EEAAEXZ @ 0x1C0002FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPkgPdo::PnpSendStartDeviceDownTheStackOverload(FxPkgPdo *this)
{
  this->m_PendingPnPIrp->IoStatus.Status = 0;
  return 1;
}
