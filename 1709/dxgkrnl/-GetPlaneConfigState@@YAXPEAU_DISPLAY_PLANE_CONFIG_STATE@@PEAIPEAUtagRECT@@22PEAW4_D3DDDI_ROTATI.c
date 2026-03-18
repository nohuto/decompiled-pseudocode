/*
 * XREFs of ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C01755C0
 * Callers:
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0174ED8 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C0175494 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
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
  unsigned int v9; // eax

  *a2 = 0;
  v9 = *a2;
  if ( (*((_BYTE *)a1 + 8) & 0x10) != 0 )
    v9 = 1;
  *a2 = v9;
  if ( (*((_DWORD *)a1 + 2) & 0x20) != 0 )
    *a2 |= 2u;
  *a3 = *(struct tagRECT *)((char *)a1 + 12);
  *a4 = *(struct tagRECT *)((char *)a1 + 28);
  *a5 = *(struct tagRECT *)((char *)a1 + 44);
  *a6 = *((enum _D3DDDI_ROTATION *)a1 + 15);
  *a7 = (*((_DWORD *)a1 + 2) >> 2) & 1;
  *a8 = *((enum D3DDDI_COLOR_SPACE_TYPE *)a1 + 16);
  *a9 = *((_DWORD *)a1 + 17);
}
