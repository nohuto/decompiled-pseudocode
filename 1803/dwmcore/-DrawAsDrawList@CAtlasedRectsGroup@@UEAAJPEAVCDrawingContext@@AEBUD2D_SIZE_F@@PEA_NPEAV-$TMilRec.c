/*
 * XREFs of ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B34B0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EF90 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall CAtlasedRectsGroup::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  unsigned int v10; // ebx
  unsigned int v12; // r11d
  __int64 v13; // r10
  float *v14; // rcx
  unsigned int v15; // esi
  int v16; // r11d
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  struct D2D_RECT_F v18; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_BYTE *)this + 96) )
  {
    *((_QWORD *)this + 11) = 0LL;
    v12 = 0;
    for ( *((_QWORD *)this + 10) = 0LL; v12 < *((_DWORD *)this + 16); v12 = v16 + 1 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v12);
      if ( *(_BYTE *)(v13 + 128) )
      {
        v14 = (float *)(v13 + 112);
        v15 = 0;
        *(_QWORD *)(v13 + 120) = 0LL;
        for ( *(_QWORD *)(v13 + 112) = 0LL; v15 < *(_DWORD *)(v13 + 60); ++v15 )
        {
          v17 = *(_OWORD *)(*(_QWORD *)(v13 + 88) + 16LL * v15);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v14, (float *)&v17);
        }
        *(_BYTE *)(v13 + 128) = 0;
      }
      v18 = *(struct D2D_RECT_F *)(v13 + 112);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 20, &v18.left);
    }
    *((_BYTE *)this + 96) = 0;
  }
  v18 = (struct D2D_RECT_F)*((_OWORD *)this + 5);
  if ( IsEmpty(&v18) || !*((_QWORD *)this + 7) )
    return 0LL;
  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7LL,
      *((unsigned int *)a2 + 1690));
  v10 = CContent::DrawAsDrawList((CComposition **)this, (const struct CVisualTree **)a2, a3, a4, a5, a6);
  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7LL,
      *((unsigned int *)a2 + 1690));
  return v10;
}
