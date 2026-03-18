/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C009F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C007CD84 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgFdo::DeleteSymbolicLinkOverload(FxPkgFdo *this, unsigned __int8 GracefulRemove)
{
  FxDevice::DeleteSymbolicLink(this->m_Device);
}
