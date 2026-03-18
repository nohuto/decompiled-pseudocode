/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800115E8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180016EA8 (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARG.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007F530 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18007F5DC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x18007F7D0 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800BE1D4 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x180127D88 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180128660 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180128B60 (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007F028 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CMILRefCountBase::Release(this);
}
