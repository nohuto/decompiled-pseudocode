/*
 * XREFs of ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x18006AD50
 * Callers:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800506D0 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

bool __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  __int64 v1; // r9
  CAtlasedRectsGroup *v2; // r10
  unsigned int v4; // edi
  __int64 v5; // rbx
  float *v6; // rcx
  unsigned int v7; // esi
  __m128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = this;
  if ( *((_BYTE *)this + 96) )
  {
    *((_QWORD *)this + 11) = 0LL;
    v4 = 0;
    *((_QWORD *)this + 10) = 0LL;
    if ( *((_DWORD *)this + 16) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)v2 + 9) + 8LL * v4);
        if ( *(_BYTE *)(v5 + 128) != (_BYTE)v1 )
        {
          v6 = (float *)(v5 + 112);
          v7 = v1;
          *(_QWORD *)(v5 + 120) = v1;
          for ( *(_QWORD *)(v5 + 112) = v1; v7 < *(_DWORD *)(v5 + 60); ++v7 )
          {
            v8 = *(__m128 *)(*(_QWORD *)(v5 + 88) + 16LL * v7);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, v8.m128_f32);
          }
          *(_BYTE *)(v5 + 128) = v1;
        }
        v9 = *(_OWORD *)(v5 + 112);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v2 + 20, (float *)&v9);
        ++v4;
      }
      while ( v4 < *((_DWORD *)v2 + 16) );
    }
    *((_BYTE *)v2 + 96) = v1;
  }
  v8 = (__m128)_mm_loadu_si128((const __m128i *)v2 + 5);
  if ( _mm_shuffle_ps(v8, v8, 170).m128_f32[0] <= v8.m128_f32[0]
    || v8.m128_f32[3] <= v8.m128_f32[1]
    || *((_QWORD *)v2 + 7) == v1 )
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
