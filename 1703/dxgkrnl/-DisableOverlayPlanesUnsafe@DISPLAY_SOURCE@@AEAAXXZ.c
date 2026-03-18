/*
 * XREFs of ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8
 * Callers:
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E68B0 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9224 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9330 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C0170598 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rax
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct tagRECT v10; // [rsp+60h] [rbp-28h] BYREF
  struct tagRECT v11; // [rsp+70h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, CurrentThread, a3, a4);
    *(_QWORD *)(v6 + 24) = 8050LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_BYTE *)this + 3200) )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    for ( i = 1; i < *((_DWORD *)this + 798); ++i )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
      {
        *(_QWORD *)&v10.left = 0LL;
        *(_QWORD *)&v10.right = 0LL;
        DISPLAY_SOURCE::CreateNewPlaneConfig(
          this,
          i,
          0LL,
          0,
          0,
          &v10,
          &v10,
          &v10,
          D3DDDI_ROTATION_IDENTITY,
          D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
          D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
      }
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal )
    {
      if ( *(_BYTE *)LatestPostCompositionConfigInternal )
      {
        *(_QWORD *)&v11.left = 0LL;
        *(_QWORD *)&v11.right = 0LL;
        DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v11, &v11);
      }
    }
    *((_BYTE *)this + 3200) = 0;
  }
}
