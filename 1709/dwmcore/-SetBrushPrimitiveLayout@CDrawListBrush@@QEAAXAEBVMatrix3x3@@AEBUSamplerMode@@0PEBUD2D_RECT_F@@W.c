/*
 * XREFs of ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x180070E28
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180183300 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     CopyIfNeeded_Matrix3x3_ @ 0x180070F0C (CopyIfNeeded_Matrix3x3_.c)
 */

_OWORD *__fastcall CDrawListBrush::SetBrushPrimitiveLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        _OWORD *a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r10
  _OWORD *result; // rax
  _OWORD *v12; // r10

  *(_DWORD *)(a1 + 24) = 0;
  CopyIfNeeded_Matrix3x3_(a1 + 28, a2);
  if ( v9 + 64 != v7 )
  {
    *(_WORD *)(v9 + 64) = *(_WORD *)v7;
    *(_BYTE *)(v9 + 66) = *(_BYTE *)(v7 + 2);
  }
  *(_DWORD *)(v9 + 24) = 2;
  CopyIfNeeded_Matrix3x3_(v9 + 68, v8);
  *(_BYTE *)(v10 + 140) = a5 != 0LL;
  if ( a5 )
  {
    if ( (_OWORD *)(v10 + 104) != a5 )
      *(_OWORD *)(v10 + 104) = *a5;
    *(_DWORD *)(v10 + 120) = a6;
  }
  result = a7;
  if ( a7 )
  {
    v12 = (_OWORD *)(v10 + 124);
    if ( v12 != a7 )
      *v12 = *a7;
  }
  else
  {
    *(_OWORD *)(v10 + 124) = _xmm;
  }
  return result;
}
