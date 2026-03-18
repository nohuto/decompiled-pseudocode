/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800829C0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180027E70 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180028230 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x18004BB0C (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008DC1C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  char IsEmptyDrawing; // si
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char v14; // al
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  char v17; // al
  CPrimitiveGroup *v18; // rcx
  __int64 (*v19)(void); // rax
  __int64 v21; // rax
  CCachedVisualImage *v22; // rcx
  CCompositionSurfaceInfo *v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+24h] [rbp-44h] BYREF
  __int128 v26; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 12);
  IsEmptyDrawing = 0;
  if ( v5 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL);
    if ( v8 != CCompositionSurfaceBitmap::IsOfType )
    {
      if ( v8 == CPrimitiveGroup::IsOfType ? CPrimitiveGroup::IsOfType(v5, 15LL) : (unsigned __int8)v8(v5, 15LL) )
      {
        v21 = *((_QWORD *)this + 12);
        v22 = (CCachedVisualImage *)(v21 - 16);
        if ( !v21 )
          v22 = 0LL;
        v26 = *((_OWORD *)v22 + 9);
        CCachedVisualImage::GetCurrentSize(v22, &v24, &v25);
        if ( !v24 || !v25 || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v26) )
        {
          v4 = 0;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
    }
    v9 = *((_QWORD *)this + 12);
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL);
    if ( v10 == CCompositionSurfaceBitmap::IsOfType
      || (v10 != CPrimitiveGroup::IsOfType ? (v14 = v10(v9, 35LL)) : (v14 = CPrimitiveGroup::IsOfType(v9, 35LL)), v14) )
    {
      v11 = *((_QWORD *)this + 12);
      v12 = *(_QWORD *)(v11 + 88);
      if ( v12 )
      {
        if ( *(_QWORD *)(v12 + 120) )
          goto LABEL_6;
        if ( !*(_BYTE *)(v12 + 384) )
        {
          v23 = *(CCompositionSurfaceInfo **)(v11 + 88);
          *(_BYTE *)(v12 + 384) = 1;
          CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v23);
          *(_BYTE *)(v12 + 384) = 0;
        }
        if ( *(_QWORD *)(v12 + 120) )
LABEL_6:
          v4 = 1;
      }
    }
    else
    {
      v15 = *((_QWORD *)this + 12);
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL);
      if ( v16 == CPrimitiveGroup::IsOfType )
        v17 = CPrimitiveGroup::IsOfType(v15, 98LL);
      else
        v17 = v16(v15, 98LL);
      if ( v17 )
      {
        v18 = (CPrimitiveGroup *)*((_QWORD *)this + 12);
        v4 = 1;
        v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 192LL);
        if ( (char *)v19 == (char *)CPrimitiveGroup::IsEmptyDrawing )
          IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v18);
        else
          IsEmptyDrawing = v19();
      }
    }
  }
LABEL_7:
  *a3 = IsEmptyDrawing;
  return v4;
}
