/*
 * XREFs of ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0170090 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C01711DC (-GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAVDXGALLOCATION@@0PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0171324 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVE.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0171718 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0171868 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0171A1C (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0171BF0 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C0171DEC (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 * Callees:
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00A6E44 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

struct _DISPLAY_PLANE_CONFIG *__fastcall DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
        DISPLAY_SOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  char *v6; // rsi

  if ( (unsigned int)a2 >= *((_DWORD *)this + 798) )
    return 0LL;
  v5 = 168LL * (unsigned int)a2;
  v6 = (char *)this + v5;
  if ( IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + v5 + 1080), a2, a3, a4) )
    return 0LL;
  else
    return (DISPLAY_SOURCE *)((char *)this + 80 * *((int *)v6 + 270) + v5 + 1088);
}
