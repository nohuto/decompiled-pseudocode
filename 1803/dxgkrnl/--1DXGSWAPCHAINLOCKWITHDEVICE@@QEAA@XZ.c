/*
 * XREFs of ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01DD6A4
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01DFEC4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C01E02F0 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C01E0790 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C01E1E70 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C01E20F0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C01DF55C (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
  COREACCESS::~COREACCESS((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
  if ( *((_BYTE *)this + 32) )
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
}
