/*
 * XREFs of ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x1800CDFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMOffScreenSwapChain::ReleaseD3DResourcesInternal(CDWMOffScreenSwapChain *this)
{
  ReleaseInterface<IBitmapLock>((char *)this + 296);
}
