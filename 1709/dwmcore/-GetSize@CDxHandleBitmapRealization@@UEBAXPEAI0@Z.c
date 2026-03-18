/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x18004D0E0
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D8A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleBitmapRealization::GetSize(
        CDxHandleBitmapRealization *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  CD2DBitmap *v4; // rcx
  void (__fastcall *v5)(CD2DBitmap *, unsigned int *, unsigned int *); // rax

  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    v4 = (CD2DBitmap *)(v3 + 104);
    v5 = *(void (__fastcall **)(CD2DBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 72LL);
    if ( v5 == CD2DBitmap::GetSize )
      CD2DBitmap::GetSize(v4, a2, a3);
    else
      v5(v4, a2, a3);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
}
