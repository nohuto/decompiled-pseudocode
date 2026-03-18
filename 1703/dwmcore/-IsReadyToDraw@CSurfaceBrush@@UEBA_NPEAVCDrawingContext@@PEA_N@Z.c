/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0
 * Callers:
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004765C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180076D24 (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool v4; // di
  __int64 v5; // rcx
  char v6; // si
  _BOOL8 (__fastcall *v9)(__int64, int); // rax
  __int64 v10; // rcx
  _BOOL8 (__fastcall *v11)(__int64, int); // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  CCompositionSurfaceInfo *v18; // rcx
  unsigned int v19[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 12);
  v6 = 0;
  if ( v5 )
  {
    v9 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL);
    if ( v9 == CCompositionSurfaceBitmap::IsOfType || !v9(v5, 61) )
    {
      v10 = *((_QWORD *)this + 12);
      v11 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 48LL);
      if ( v11 == CCompositionSurfaceBitmap::IsOfType || v11(v10, 97) )
      {
        v12 = *((_QWORD *)this + 12);
        v13 = *(_QWORD *)(v12 + 464);
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 120) )
            goto LABEL_6;
          if ( !*(_BYTE *)(v13 + 384) )
          {
            v18 = *(CCompositionSurfaceInfo **)(v12 + 464);
            *(_BYTE *)(v13 + 384) = 1;
            CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v18);
            *(_BYTE *)(v13 + 384) = 0;
          }
          if ( *(_QWORD *)(v13 + 120) )
LABEL_6:
            v4 = 1;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                  *((_QWORD *)this + 12),
                  102LL) )
      {
        v4 = 1;
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 176LL))(*((_QWORD *)this + 12));
      }
    }
    else
    {
      v15 = *((_QWORD *)this + 12);
      v16 = v15 - 16;
      if ( !v15 )
        v16 = 0LL;
      v21 = *(_OWORD *)(v16 + 88);
      CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)v16, &v20, v19);
      if ( v20
        && v19[0]
        && !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v21)
        && *(_QWORD *)(v16 + 136) )
      {
        if ( a2 )
        {
          *(_QWORD *)v19 = 0LL;
          DWORD2(v21) = 0;
          ID2DContextOwner::GetCurrentRenderTargetInfo(
            (struct CDrawingContext *)((char *)a2 + 8),
            (struct RenderTargetInfo *)&v21);
          v4 = (int)CCachedVisualImage::GetD2DBitmap((int)v16 + 80, (unsigned int)&v21, 0, 0, (__int64)v19) >= 0;
          Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v19);
          goto LABEL_7;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_7:
  *a3 = v6;
  return v4;
}
