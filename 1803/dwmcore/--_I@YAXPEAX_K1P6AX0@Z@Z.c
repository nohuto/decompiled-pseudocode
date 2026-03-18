/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4
 * Callers:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800D7B10 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1800D7C14 (--1CSwapChainBase@@MEAA@XZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800D7F68 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800D9784 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68 (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180193288 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x180198F84 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1801A5D70 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x1801EB370 (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x1801EBCD0 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801FB978 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484 (-_Tidy@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x180218C10 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?_Change_array@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXQEAVCVisualDepthGeometry@@_K1@Z @ 0x18021FB3C (-_Change_array@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@A.c)
 * Callees:
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CD6B0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(
        char *a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(KeyframeSequence::Keyframe *__hidden this))
{
  __int64 v5; // rdi
  KeyframeSequence::Keyframe *v7; // rbx

  if ( a3 )
  {
    v5 = a3;
    v7 = (KeyframeSequence::Keyframe *)&a1[a3 * a2];
    do
    {
      v7 = (KeyframeSequence::Keyframe *)((char *)v7 - a2);
      --v5;
      if ( a4 == KeyframeSequence::Keyframe::~Keyframe )
        KeyframeSequence::Keyframe::~Keyframe(v7);
      else
        a4(v7);
    }
    while ( v5 );
  }
}
