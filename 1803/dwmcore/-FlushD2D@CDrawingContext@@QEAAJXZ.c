/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1800099C0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024660 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174960 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176560 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180095B90 (-Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  CD2DContext *v5; // rcx
  const struct ID2DContextOwner *v6; // rdx
  __int64 (__fastcall *v7)(CD2DContext *__hidden, const struct ID2DContextOwner *); // rax

  if ( !CDrawingContext::IsBounding(this) )
  {
    v3 = v2 + 8;
    v4 = v2;
    v5 = *(CD2DContext **)(v2 + 384);
    v6 = (const struct ID2DContextOwner *)(v3 & ((unsigned __int128)-(__int128)v4 >> 64));
    v7 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *))(*(_QWORD *)v5 + 48LL);
    if ( v7 == CD2DContext::Flush )
      return (unsigned int)CD2DContext::Flush(v5, v6);
    else
      return (unsigned int)v7(v5, v6);
  }
  return v1;
}
