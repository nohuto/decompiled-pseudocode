/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AEEA0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(__int64 a1, struct ID2DContext **a2)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  struct CAtlasedRectsGroup *v5; // r9
  int v6; // eax
  float *v8; // r10
  unsigned int v9; // edi
  __int64 v10; // r11
  float *v11; // rcx
  unsigned int v12; // esi
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 152) )
  {
    v8 = (float *)(a1 + 136);
    v9 = 0;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( *(_DWORD *)(a1 + 72) )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * v9);
        if ( *(_BYTE *)(v10 + 128) )
        {
          v11 = (float *)(v10 + 112);
          v12 = 0;
          *(_QWORD *)(v10 + 120) = 0LL;
          for ( *(_QWORD *)(v10 + 112) = 0LL; v12 < *(_DWORD *)(v10 + 60); ++v12 )
          {
            v13 = *(_OWORD *)(*(_QWORD *)(v10 + 88) + 16LL * v12);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, (float *)&v13);
          }
          *(_BYTE *)(v10 + 128) = 0;
        }
        v14 = *(_OWORD *)(v10 + 112);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, (float *)&v14);
        ++v9;
      }
      while ( v9 < *(_DWORD *)(v3 + 72) );
    }
    *(_BYTE *)(v3 + 152) = 0;
  }
  v14 = *(_OWORD *)(v3 + 136);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v14) )
  {
    if ( *((_QWORD *)v5 + 8) )
    {
      v6 = CDrawingContext::DrawAtlasedRects(a2, v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1Fu);
    }
  }
  return v4;
}
