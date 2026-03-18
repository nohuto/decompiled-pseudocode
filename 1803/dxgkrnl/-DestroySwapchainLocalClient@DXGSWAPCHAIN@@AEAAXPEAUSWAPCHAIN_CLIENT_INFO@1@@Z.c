/*
 * XREFs of ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01DE3BC
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01DE090 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C01DF0B0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01DF34C (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE1B0 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySwapchainLocalClient(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v4; // rcx
  __int64 i; // rdi

  v4 = (void *)*((_QWORD *)a2 + 4);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)v4, *((unsigned int *)a2 + 7), *((_QWORD *)this + 7) + 96 * i);
  *((_QWORD *)a2 + 2) = 0LL;
}
