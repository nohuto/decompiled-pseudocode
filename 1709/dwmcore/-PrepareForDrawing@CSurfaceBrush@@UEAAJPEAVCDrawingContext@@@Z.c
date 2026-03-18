/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800256C0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024D00 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180082D30 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027AD0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028910 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18011ABE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(CSurfaceBrush *this, struct CDrawingContext *a2)
{
  CCompositionSurfaceBitmap *v3; // rcx
  int (*v4)(CPrimitiveGroup *__hidden, const struct _GUID *, void **); // rax
  int v5; // eax
  void *v6; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r9
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) )
  {
    v11 = 0LL;
    v3 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 12);
    v4 = **(int (***)(CPrimitiveGroup *__hidden, const struct _GUID *, void **))v3;
    if ( v4 == CCompositionSurfaceBitmap::QueryInterface )
    {
      v5 = CCompositionSurfaceBitmap::QueryInterface(v3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v11);
    }
    else if ( v4 == CPrimitiveGroup::QueryInterface )
    {
      v5 = CPrimitiveGroup::QueryInterface(v3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v11);
    }
    else
    {
      v5 = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, GUID *, void **))v4)(
             v3,
             &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
             &v11);
    }
    if ( v5 >= 0 )
    {
      LOBYTE(v8) = CDrawingContext::IsNormalDesktopRender(a2);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v9 + 176))(v10, 0LL, v8);
    }
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 0LL;
}
