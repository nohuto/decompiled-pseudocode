/*
 * XREFs of ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006ACC0
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054190 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6030 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v6; // rsi
  __int64 result; // rax
  float v8[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 92) = 0;
    v6 = 0LL;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 84) = 0;
    for ( *(_DWORD *)(a1 + 80) = 0; (unsigned int)v6 < *(_DWORD *)(a1 + 64); v6 = (unsigned int)(v6 + 1) )
    {
      CAtlasedRectsMesh::GetBounds(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v6), v8);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 80), v8);
    }
    *(_BYTE *)(a1 + 96) = 0;
  }
  result = 0LL;
  *a4 = *(_OWORD *)(a1 + 80);
  return result;
}
