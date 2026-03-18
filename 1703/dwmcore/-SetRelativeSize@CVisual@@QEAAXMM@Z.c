/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18008804C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18002AD1C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180085FC4 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180085FE4 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180086BE0 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeSize(CVisual *this, double a2, double a3)
{
  float v4; // [rsp+88h] [rbp+20h] BYREF
  float v5; // [rsp+8Ch] [rbp+24h]

  CVisual::GetRelativeLayoutSizeInternal(this, (__int64)&v4);
  if ( v4 != *(float *)&a2 || v5 != *(float *)&a3 )
  {
    CVisual::SetRelativeLayoutSizeInternal(
      this,
      (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    v4 = *(float *)&a2;
    v5 = *(float *)&a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 28LL, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 28LL);
  }
}
