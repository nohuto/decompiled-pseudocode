/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180099930
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180098DA0 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180007CE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047720 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800972A0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CCompositionSurfaceBitmap *v4; // rcx
  __int64 (__fastcall *v5)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  int v6; // eax
  void *v7; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r9
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) )
  {
    v12 = 0LL;
    v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 11);
    v5 = **(__int64 (__fastcall ***)(CPrimitiveGroup *, const struct _GUID *, void **))v4;
    if ( v5 == CCompositionSurfaceBitmap::QueryInterface )
    {
      v6 = CCompositionSurfaceBitmap::QueryInterface(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v12);
    }
    else if ( v5 == CPrimitiveGroup::QueryInterface )
    {
      v6 = CPrimitiveGroup::QueryInterface(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v12);
    }
    else
    {
      v6 = v5(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v12);
    }
    if ( v6 >= 0 )
    {
      LOBYTE(v9) = CDrawingContext::IsNormalDesktopRender(a2);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v10 + 176))(v11, 0LL, v9);
    }
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return 0LL;
}
