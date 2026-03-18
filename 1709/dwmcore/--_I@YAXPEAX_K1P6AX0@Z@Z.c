/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180046CB0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x18007509C (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18011B864 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x180155D80 (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180164970 (--1CDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016A868 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801702B8 (--1CManipulation@@UEAA@XZ.c)
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180176650 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1801B270C (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858 (-GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801BED2C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x180048640 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800BB1E0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ??1?$ComPtr@UID3D11SamplerState@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE430 (--1-$ComPtr@UID3D11SamplerState@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(
        char *a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(CDrawListBitmap *))
{
  __int64 v5; // rdi
  CDrawListBitmap *v7; // rbx

  if ( a3 )
  {
    v5 = a3;
    v7 = (CDrawListBitmap *)&a1[a3 * a2];
    do
    {
      v7 = (CDrawListBitmap *)((char *)v7 - a2);
      --v5;
      if ( a4 == CDrawListBitmap::~CDrawListBitmap )
      {
        CDrawListBitmap::~CDrawListBitmap(v7);
      }
      else if ( a4 == KeyframeSequence::Keyframe::~Keyframe )
      {
        KeyframeSequence::Keyframe::~Keyframe(v7);
      }
      else if ( (char *)a4 == (char *)Microsoft::WRL::ComPtr<ID3D11SamplerState>::~ComPtr<ID3D11SamplerState> )
      {
        Microsoft::WRL::ComPtr<ID3D11SamplerState>::~ComPtr<ID3D11SamplerState>(v7);
      }
      else
      {
        a4(v7);
      }
    }
    while ( v5 );
  }
}
