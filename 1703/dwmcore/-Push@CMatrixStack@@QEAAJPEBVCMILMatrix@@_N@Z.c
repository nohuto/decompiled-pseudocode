/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18009B3C8 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3984 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3B6C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18004ECE0 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18004ED34 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  int v4; // eax
  const struct CMILMatrix *v5; // r11
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  _BYTE v10[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+70h] [rbp-68h]
  _BYTE v12[64]; // [rsp+80h] [rbp-58h] BYREF
  int v13; // [rsp+C0h] [rbp-18h]

  if ( *(_DWORD *)this && a3 )
  {
    v11 = 0;
    v13 = 0;
    v4 = CWatermarkStack<CMILMatrix,8,2,8>::Top(this, v10);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3Du);
    }
    else
    {
      CMILMatrix::Multiply(v5, (const struct CMILMatrix *)v10, (struct CMILMatrix *)v12);
      v7 = CWatermarkStack<CMILMatrix,8,2,8>::Push(this, v12);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x45u);
    }
  }
  else
  {
    v9 = ((__int64 (*)(void))CWatermarkStack<CMILMatrix,8,2,8>::Push)();
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x36u);
  }
  return v6;
}
