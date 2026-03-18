/*
 * XREFs of ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18011B3D8
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18011DB78 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::DeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 81) )
    CD3DResourceManager::DestroyDelayedResources((CD3DDeviceLevel1 *)((char *)this + 896));
}
