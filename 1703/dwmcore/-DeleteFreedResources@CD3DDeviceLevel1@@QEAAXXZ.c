/*
 * XREFs of ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800CDE20
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18004D24C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceLevel1::DeleteFreedResources(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 80) )
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DDeviceLevel1 *)((char *)this + 928));
}
