/*
 * XREFs of ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C0154ED8
 * Callers:
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0154720 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C0154DAC (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 * Callees:
 *     <none>
 */

void __fastcall GetPlaneConfigState(
        struct _DISPLAY_PLANE_CONFIG_STATE *a1,
        unsigned int *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum _D3DDDI_ROTATION *a6,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *a7,
        enum D3DDDI_COLOR_SPACE_TYPE *a8,
        unsigned int *a9)
{
  int v9; // eax
  int v11; // ecx

  v9 = 0;
  *a2 = 0;
  v11 = *((_DWORD *)a1 + 2);
  if ( (v11 & 0x10) != 0 )
  {
    *a2 = 1;
    v9 = 1;
    v11 = *((_DWORD *)a1 + 2);
  }
  if ( (v11 & 0x20) != 0 )
    *a2 = v9 | 2;
  *a3 = *(struct tagRECT *)((char *)a1 + 12);
  *a4 = *(struct tagRECT *)((char *)a1 + 28);
  *a5 = *(struct tagRECT *)((char *)a1 + 44);
  *a6 = *((enum _D3DDDI_ROTATION *)a1 + 15);
  *a7 = (*((_DWORD *)a1 + 2) >> 2) & 1;
  *a8 = *((enum D3DDDI_COLOR_SPACE_TYPE *)a1 + 16);
  *a9 = *((_DWORD *)a1 + 17);
}
