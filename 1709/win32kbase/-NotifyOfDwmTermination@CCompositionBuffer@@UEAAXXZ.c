/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1C0152CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003A804 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CRegion **this)
{
  CRegion::SetFullRegion(this[31]);
}
