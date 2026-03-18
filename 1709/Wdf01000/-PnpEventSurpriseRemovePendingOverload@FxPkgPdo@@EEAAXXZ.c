/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C00987C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C006F3A8 (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C0099AF0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PnpEventSurpriseRemovePendingOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
    FxDeviceDescriptionEntry::DeviceSurpriseRemoved(m_Description);
  FxPkgPnp::PnpEventSurpriseRemovePendingOverload(this);
}
