/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070F60 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180071470 (-IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800829C0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v3; // bl
  float *v5; // rcx
  bool (*v8)(CEffectBrush *__hidden, struct CDrawingContext *, bool *); // rax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  CSurfaceBrush *v11; // rcx
  bool (__fastcall *v12)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  bool v13; // al
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 result; // rax
  char IsReadyToDraw; // al
  char v18; // al
  __int64 v19; // r15
  char v20; // al
  char v21; // al
  bool v22; // [rsp+40h] [rbp+8h] BYREF
  bool v23; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = (float *)*((_QWORD *)this + 11);
  v22 = 0;
  v23 = 0;
  if ( !v5 )
    goto LABEL_13;
  v8 = *(bool (**)(CEffectBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v5 + 240LL);
  if ( (char *)v8 == (char *)CColorBrush::IsReadyToDraw )
  {
    v22 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[23]) & _xmm) < 0.0000011920929;
  }
  else
  {
    if ( (char *)v8 == (char *)CGradientBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CGradientBrush::IsReadyToDraw((CGradientBrush *)v5, a2, &v22);
    }
    else if ( v8 == CEffectBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v5, a2, &v22);
    }
    else
    {
      IsReadyToDraw = ((__int64 (__fastcall *)(float *, struct CDrawingContext *, bool *))v8)(v5, a2, &v22);
    }
    if ( !IsReadyToDraw )
      goto LABEL_11;
  }
  v9 = *((_QWORD *)this + 11);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL);
  if ( v10 == CColorBrush::IsOfType
    || (v10 != CLinearGradientBrush::IsOfType
      ? (v10 != CEffectBrush::IsOfType
       ? (v18 = v10(v9, 93LL))
       : (v18 = CEffectBrush::IsOfType(v9, 93LL)))
      : (v18 = CLinearGradientBrush::IsOfType(v9, 93LL)),
        !v18
     || (v19 = *(_QWORD *)(*((_QWORD *)this + 11) + 80LL),
         v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 16LL),
         v20 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, 124LL))) )
  {
    v11 = (CSurfaceBrush *)*((_QWORD *)this + 10);
    if ( !v11
      || ((v12 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v11
                                                                                                  + 240LL),
           v12 != CSurfaceBrush::IsReadyToDraw)
        ? (v13 = v12(v11, a2, &v23))
        : (v13 = CSurfaceBrush::IsReadyToDraw(v11, a2, &v23)),
          v13
       && ((v14 = *((_QWORD *)this + 10),
            v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL),
            v15 == CSurfaceBrush::IsOfType)
        || !(unsigned __int8)v15(v14, 93LL)
        || (v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 10) + 80LL) + 48LL))(
                    *(_QWORD *)(*((_QWORD *)this + 10) + 80LL),
                    124LL)) != 0)) )
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
  result = v3;
  *a3 = 1;
  return result;
}
