/*
 * XREFs of ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004F664 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800746D0 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800913BC (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x180091628 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1800C0AD0 (-s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801698BC (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x180169958 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x180169B90 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18016A040 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x180171594 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x180171694 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801717D8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x180198D00 (-s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x180198D70 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x18019FB80 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180009FE0 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(
        CDxHandleYUVBitmapRealization **a1)
{
  unsigned int result; // eax
  CDxHandleYUVBitmapRealization *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CDxHandleYUVBitmapRealization::Release )
      return CDxHandleYUVBitmapRealization::Release(v3);
    else
      return v4();
  }
  return result;
}
