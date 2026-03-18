/*
 * XREFs of ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0171868
 * Callers:
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0189710 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        enum _D3DDDI_ROTATION *a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *a8,
        enum D3DDDI_COLOR_SPACE_TYPE *a9)
{
  unsigned int v11; // edi
  __int64 v13; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  enum D3DDDI_COLOR_SPACE_TYPE v15; // ecx

  v11 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 7717LL;
    WdLogEvent5_WdAssertion(v13);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v11, (__int64)a3, (__int64)a4);
  v15 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
  {
    *a3 = *((_DWORD *)LatestPlaneConfigInternal + 2);
    *a4 = *((struct tagRECT *)LatestPlaneConfigInternal + 1);
    *a5 = *((struct tagRECT *)LatestPlaneConfigInternal + 2);
    *a6 = *((struct tagRECT *)LatestPlaneConfigInternal + 3);
    *a7 = *((enum _D3DDDI_ROTATION *)LatestPlaneConfigInternal + 16);
    *a8 = *((enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)LatestPlaneConfigInternal + 17);
    v15 = *((_DWORD *)LatestPlaneConfigInternal + 18);
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
    *a5 = 0LL;
    *a6 = 0LL;
    *a7 = D3DDDI_ROTATION_IDENTITY;
    *a8 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
  }
  *a9 = v15;
}
