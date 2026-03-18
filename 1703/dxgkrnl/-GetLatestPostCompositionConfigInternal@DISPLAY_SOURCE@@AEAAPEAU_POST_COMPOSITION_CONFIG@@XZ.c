/*
 * XREFs of ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960
 * Callers:
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ @ 0x1C00E90F8 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXXZ.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0170090 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAVDXGALLOCATION@@0PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0171324 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVE.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0172EE0 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C00A6EBC (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 */

struct _POST_COMPOSITION_CONFIG *__fastcall DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(
        DISPLAY_SOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int *v4; // rdi

  v4 = (int *)((char *)this + 2424);
  if ( IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2424), a2, a3, a4) )
    return 0LL;
  else
    return (DISPLAY_SOURCE *)((char *)this + 36 * *v4 + 2432);
}
