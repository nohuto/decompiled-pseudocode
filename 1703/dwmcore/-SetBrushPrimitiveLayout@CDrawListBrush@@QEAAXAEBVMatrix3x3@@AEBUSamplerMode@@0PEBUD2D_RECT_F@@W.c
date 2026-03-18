/*
 * XREFs of ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     CopyIfNeeded_Matrix3x3_ @ 0x1800C0018 (CopyIfNeeded_Matrix3x3_.c)
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
  __int64 v8; // r10
  __int64 v9; // r10
  _OWORD *result; // rax
  _OWORD *v11; // r10

  *(_DWORD *)(a1 + 24) = 0;
  CopyIfNeeded_Matrix3x3_(a1 + 28);
  if ( v8 + 64 != v7 )
  {
    *(_WORD *)(v8 + 64) = *(_WORD *)v7;
    *(_BYTE *)(v8 + 66) = *(_BYTE *)(v7 + 2);
  }
  *(_DWORD *)(v8 + 24) = 2;
  CopyIfNeeded_Matrix3x3_(v8 + 68);
  *(_BYTE *)(v9 + 140) = a5 != 0LL;
  if ( a5 )
  {
    if ( (_OWORD *)(v9 + 104) != a5 )
      *(_OWORD *)(v9 + 104) = *a5;
    *(_DWORD *)(v9 + 120) = a6;
  }
  result = a7;
  if ( a7 )
  {
    v11 = (_OWORD *)(v9 + 124);
    if ( v11 != a7 )
      *v11 = *a7;
  }
  else
  {
    *(_OWORD *)(v9 + 124) = _xmm;
  }
  return result;
}
