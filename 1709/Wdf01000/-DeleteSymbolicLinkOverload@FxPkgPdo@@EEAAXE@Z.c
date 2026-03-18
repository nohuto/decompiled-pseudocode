/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0098480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C006F790 (-IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C007CD84 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::DeleteSymbolicLinkOverload(FxPkgPdo *this, unsigned __int8 GracefulRemove)
{
  if ( !GracefulRemove && FxDeviceDescriptionEntry::IsDeviceReportedMissing(this->m_Description) )
    FxDevice::DeleteSymbolicLink(this->m_Device);
}
