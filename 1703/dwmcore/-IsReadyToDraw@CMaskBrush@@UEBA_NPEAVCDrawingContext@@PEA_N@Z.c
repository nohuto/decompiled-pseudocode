/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D30 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v3; // di
  float *v5; // rcx
  _BOOL8 (__fastcall *v8)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  __int64 v9; // rcx
  _BOOL8 (__fastcall *v10)(__int64, int); // rax
  CSurfaceBrush *v11; // rcx
  _BOOL8 (__fastcall *v12)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  bool v13; // al
  __int64 v14; // rcx
  _BOOL8 (__fastcall *v15)(__int64, int); // rax
  bool IsReadyToDraw; // al
  char v18; // al
  __int64 v19; // r14
  char v20; // al
  char v21; // al
  bool v22; // [rsp+50h] [rbp+8h] BYREF
  bool v23; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v5 = (float *)*((_QWORD *)this + 11);
  v22 = 0;
  v23 = 0;
  if ( !v5 )
    goto LABEL_13;
  v8 = *(_BOOL8 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v5 + 224LL);
  if ( (char *)v8 == (char *)CColorBrush::IsReadyToDraw )
  {
    v22 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[23]) & _xmm) < 0.0000011920929;
  }
  else
  {
    if ( v8 == CSurfaceBrush::IsReadyToDraw )
      IsReadyToDraw = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v5, a2, &v22);
    else
      IsReadyToDraw = v8((CSurfaceBrush *)v5, a2, &v22);
    if ( !IsReadyToDraw )
      goto LABEL_11;
  }
  v9 = *((_QWORD *)this + 11);
  v10 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 48LL);
  if ( (char *)v10 == (char *)&CColorBrush::IsOfType
    || ((char *)v10 != (char *)CLinearGradientBrush::IsOfType
      ? (v10 != CSurfaceBrush::IsOfType
       ? (v18 = v10(v9, 88))
       : (v18 = CSurfaceBrush::IsOfType(v9, 88)))
      : (v18 = CLinearGradientBrush::IsOfType(v9, 88LL)),
        !v18
     || (v19 = *(_QWORD *)(*((_QWORD *)this + 11) + 80LL),
         v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 82LL),
         v20 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 84LL))) )
  {
    v11 = (CSurfaceBrush *)*((_QWORD *)this + 10);
    if ( !v11
      || ((v12 = *(_BOOL8 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v11 + 224LL),
           v12 != CSurfaceBrush::IsReadyToDraw)
        ? (v13 = v12(v11, a2, &v23))
        : (v13 = CSurfaceBrush::IsReadyToDraw(v11, a2, &v23)),
          v13
       && ((v14 = *((_QWORD *)this + 10),
            v15 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 48LL),
            v15 == CSurfaceBrush::IsOfType)
        || !v15(v14, 88)
        || (v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 10) + 80LL) + 48LL))(
                    *(_QWORD *)(*((_QWORD *)this + 10) + 80LL),
                    84LL)) != 0)) )
    {
      v3 = 1;
    }
  }
LABEL_11:
  if ( !v22 && !v23 )
  {
LABEL_13:
    *a3 = 0;
    return v3;
  }
  *a3 = 1;
  return v3;
}
