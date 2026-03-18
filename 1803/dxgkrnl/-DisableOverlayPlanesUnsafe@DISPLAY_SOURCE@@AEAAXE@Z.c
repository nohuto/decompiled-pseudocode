/*
 * XREFs of ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00E2514
 * Callers:
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E1990 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C010CA28 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C010DCD8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C010DD10 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C010DD80 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C010DEE4 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C01525F0 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(DISPLAY_SOURCE *this, char a2)
{
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v7; // rax
  struct tagRECT v8; // [rsp+70h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+80h] [rbp-18h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 8869LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)this + 3744) || a2 )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    for ( i = a2 == 0; i < *((_DWORD *)this + 934); ++i )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal )
      {
        if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          *(_QWORD *)&v8.left = 0LL;
          *(_QWORD *)&v8.right = 0LL;
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            this,
            i,
            0LL,
            0,
            0,
            &v8,
            &v8,
            &v8,
            D3DDDI_ROTATION_IDENTITY,
            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
            0,
            D3DDDIFMT_UNKNOWN,
            0);
        }
      }
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      *(_QWORD *)&v9.left = 0LL;
      *(_QWORD *)&v9.right = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v9, &v9);
    }
    *((_BYTE *)this + 3744) = 0;
  }
}
