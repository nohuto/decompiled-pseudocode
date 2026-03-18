/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x180079B40
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800765A0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18007AF68 (-ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
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
  void (__fastcall *v5)(CD2DBitmap *__hidden, unsigned int *, unsigned int *); // rax

  v3 = *((_QWORD *)this + 38);
  if ( v3 )
  {
    v4 = (CD2DBitmap *)(v3 + 104);
    v5 = *(void (__fastcall **)(CD2DBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 48LL);
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
