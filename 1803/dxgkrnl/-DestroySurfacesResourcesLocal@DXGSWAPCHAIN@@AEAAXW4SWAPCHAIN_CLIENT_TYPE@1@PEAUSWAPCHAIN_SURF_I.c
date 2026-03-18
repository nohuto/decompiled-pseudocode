/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE1B0
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1C01DDF64 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01DE3BC (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01DECC8 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C01DF9A4 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rcx
  unsigned int v6; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // rsi
  char *v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rsi
  int v12; // edx
  struct DXGSYNCOBJECT *v13; // rsi
  __int64 v14; // rcx
  PERESOURCE *Global; // rax

  v4 = 32LL * (int)a2;
  v5 = *(void **)(v4 + a3 + 56);
  if ( v5 )
  {
    ObCloseHandle(v5, 1);
    *(_QWORD *)(v4 + a3 + 56) = 0LL;
    *(_QWORD *)(v4 + a3 + 48) = 0LL;
  }
  v6 = *(_DWORD *)(v4 + a3 + 40);
  if ( v6 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v5, a2);
    v8 = Current;
    if ( Current )
    {
      v9 = (char *)Current + 208;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v10 = (v6 >> 6) & 0xFFFFFF;
      if ( v10 < *((_DWORD *)v8 + 62)
        && (v11 = *((_QWORD *)v8 + 29), v12 = *(_DWORD *)(v11 + 16LL * v10 + 8), ((v6 >> 25) & 0x60) == (v12 & 0x60))
        && (v12 & 0x2000) == 0
        && (v12 & 0x1F) == 8 )
      {
        v13 = *(struct DXGSYNCOBJECT **)(v11 + 16LL * v10);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx(v9, 0LL);
      KeLeaveCriticalRegion();
      if ( v13 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14);
        DXGGLOBAL::DestroySyncObject(Global, v13, v6);
      }
    }
    *(_DWORD *)(v4 + a3 + 40) = 0;
  }
}
