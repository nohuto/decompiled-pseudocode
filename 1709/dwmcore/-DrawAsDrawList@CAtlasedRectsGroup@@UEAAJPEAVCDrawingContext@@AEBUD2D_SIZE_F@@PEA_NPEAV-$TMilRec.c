/*
 * XREFs of ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18006ABC0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180146EC0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 */

__int64 __fastcall CAtlasedRectsGroup::DrawAsDrawList(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
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
  __m128 v17; // [rsp+30h] [rbp-68h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

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
          v17 = *(__m128 *)(*(_QWORD *)(v13 + 88) + 16LL * v15);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v14, v17.m128_f32);
        }
        *(_BYTE *)(v13 + 128) = 0;
      }
      v18 = *(_OWORD *)(v13 + 112);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 20, (float *)&v18);
    }
    *((_BYTE *)this + 96) = 0;
  }
  v17 = (__m128)_mm_loadu_si128((const __m128i *)this + 5);
  if ( _mm_shuffle_ps(v17, v17, 170).m128_f32[0] <= v17.m128_f32[0]
    || v17.m128_f32[3] <= v17.m128_f32[1]
    || !*((_QWORD *)this + 7) )
  {
    return 0LL;
  }
  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7LL,
      *((unsigned int *)a2 + 1690));
  v10 = CContent::DrawAsDrawList(this, (const struct CVisualTree **)a2, a3, a4, a5, a6);
  if ( !*((_BYTE *)a2 + 3136) && !*((_QWORD *)a2 + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7LL,
      *((unsigned int *)a2 + 1690));
  return v10;
}
