/*
 * XREFs of CopyIfNeeded_Matrix3x3_ @ 0x1800C0018
 * Callers:
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z @ 0x1800BFED4 (-SetNineGridLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@AEBVInsets@@2_N@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyIfNeeded_Matrix3x3_(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    result = *(unsigned int *)(a2 + 32);
    *(_DWORD *)(a1 + 32) = result;
  }
  return result;
}
