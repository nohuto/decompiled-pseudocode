/*
 * XREFs of ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D7EA0
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800D7758 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::DeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 81) )
    CD3DResourceManager::DestroyDelayedResources((CD3DDeviceLevel1 *)((char *)this + 896));
}
