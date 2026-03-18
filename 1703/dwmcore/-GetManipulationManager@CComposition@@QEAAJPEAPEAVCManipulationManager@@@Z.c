/*
 * XREFs of ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588
 * Callers:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18004B218 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18004B768 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x180086A24 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180086A4C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x18012F724 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x18012F7C0 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x180166EF0 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801673C0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x180168AD4 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z @ 0x180168BDC (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEAI@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x180168D1C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x18017BED0 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801914B0 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetManipulationManager(CComposition *this, struct CManipulationManager **a2)
{
  CBitmapOfDeviceBitmaps *v4; // rcx
  void (*v5)(void); // rax

  v4 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CHolographicClient::AddRef )
      CHolographicClient::AddRef(v4);
    else
      v5();
    *a2 = (struct CManipulationManager *)*((_QWORD *)this + 8);
  }
  else
  {
    *a2 = 0LL;
  }
  return *((_QWORD *)this + 8) == 0LL ? 0x80004005 : 0;
}
