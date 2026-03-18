/*
 * XREFs of ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AF6D0
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180087A80 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0370 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  float *v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  float v9[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    v6 = (float *)(a1 + 136);
    v7 = 0LL;
    *(_DWORD *)(a1 + 148) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 140) = 0;
    for ( *(_DWORD *)(a1 + 136) = 0; (unsigned int)v7 < *(_DWORD *)(a1 + 72); v7 = (unsigned int)(v7 + 1) )
    {
      CAtlasedRectsMesh::GetBounds(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v7), v9);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, v9);
    }
    *(_BYTE *)(a1 + 152) = 0;
  }
  result = 0LL;
  *a4 = *(_OWORD *)(a1 + 136);
  return result;
}
