/*
 * XREFs of ?NotifyInvalidResource@CFlipChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180163F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipChain::NotifyInvalidResource(CFlipChain *this, const struct IDeviceResource *a2)
{
  CFlipChain::ReleaseDeviceResources((CFlipChain *)((char *)this - 88));
}
