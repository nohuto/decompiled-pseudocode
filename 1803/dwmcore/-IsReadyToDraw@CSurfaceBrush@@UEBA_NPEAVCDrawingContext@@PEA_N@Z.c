/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0
 * Callers:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800975E0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // di
  bool v5; // bp
  _QWORD *v8; // rcx
  bool (__fastcall *v9)(__int64, int); // rax
  bool (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // rbx
  bool v13; // al
  bool v14; // al
  bool (__fastcall *v15)(__int64, int); // rax
  bool v16; // al
  CPrimitiveGroup *v17; // rcx
  __int64 (*v18)(void); // rax
  char IsEmptyDrawing; // al
  CCompositionSurfaceInfo *v20; // rcx
  __int64 v21; // rax
  struct D2D_RECT_F *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-44h] BYREF
  struct D2D_RECT_F v25; // [rsp+28h] [rbp-40h] BYREF

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 11);
    v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( v9 != CCompositionSurfaceBitmap::IsOfType )
    {
      if ( v9 == CPrimitiveGroup::IsOfType )
      {
        v13 = CPrimitiveGroup::IsOfType((__int64)v8, 15);
      }
      else
      {
        v13 = v9((__int64)v8, 15);
        v3 = *((_QWORD *)this + 11);
      }
      v8 = (_QWORD *)v3;
      if ( v13 )
      {
        v22 = (struct D2D_RECT_F *)(v3 - 16);
        if ( !v3 )
          v22 = 0LL;
        v25 = v22[9];
        CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)v22, &v23, &v24);
        if ( !v23 || !v24 || IsEmpty(&v25) )
        {
          v4 = 0;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
    }
    v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( v10 == CCompositionSurfaceBitmap::IsOfType
      || (v10 != CPrimitiveGroup::IsOfType ? (v14 = v10(v3, 37)) : (v14 = CPrimitiveGroup::IsOfType(v3, 37)),
          v8 = (_QWORD *)*((_QWORD *)this + 11),
          v14) )
    {
      v11 = v8[11];
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 120)
          || !*(_BYTE *)(v11 + 400)
          && (v20 = (CCompositionSurfaceInfo *)v8[11],
              *(_BYTE *)(v11 + 400) = 1,
              CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v20),
              v21 = *(_QWORD *)(v11 + 120),
              *(_BYTE *)(v11 + 400) = 0,
              v21) )
        {
LABEL_6:
          v4 = 1;
        }
      }
    }
    else
    {
      v15 = *(bool (__fastcall **)(__int64, int))(*v8 + 48LL);
      if ( v15 == CPrimitiveGroup::IsOfType )
        v16 = CPrimitiveGroup::IsOfType((__int64)v8, 106);
      else
        v16 = v15((__int64)v8, 106);
      if ( v16 )
      {
        v17 = (CPrimitiveGroup *)*((_QWORD *)this + 11);
        v4 = 1;
        v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 192LL);
        if ( (char *)v18 == (char *)CPrimitiveGroup::IsEmptyDrawing )
          IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v17);
        else
          IsEmptyDrawing = v18();
        v5 = IsEmptyDrawing;
      }
    }
  }
LABEL_7:
  *a3 = v5;
  return v4;
}
