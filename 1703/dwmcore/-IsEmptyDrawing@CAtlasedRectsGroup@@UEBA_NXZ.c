/*
 * XREFs of ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800AEE10
 * Callers:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x180086200 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

bool __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  __int64 v1; // r9
  CAtlasedRectsGroup *v2; // r10
  float *v4; // r11
  unsigned int v5; // edi
  __int64 v6; // rbx
  float *v7; // rcx
  unsigned int v8; // esi
  __m128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = this;
  if ( *((_BYTE *)this + 152) )
  {
    v4 = (float *)((char *)this + 136);
    v5 = 0;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        v6 = *(_QWORD *)(*((_QWORD *)v2 + 10) + 8LL * v5);
        if ( *(_BYTE *)(v6 + 128) != (_BYTE)v1 )
        {
          v7 = (float *)(v6 + 112);
          v8 = v1;
          *(_QWORD *)(v6 + 120) = v1;
          for ( *(_QWORD *)(v6 + 112) = v1; v8 < *(_DWORD *)(v6 + 60); ++v8 )
          {
            v9 = *(__m128 *)(*(_QWORD *)(v6 + 88) + 16LL * v8);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v7, v9.m128_f32);
          }
          *(_BYTE *)(v6 + 128) = v1;
        }
        v10 = *(_OWORD *)(v6 + 112);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, (float *)&v10);
        ++v5;
      }
      while ( v5 < *((_DWORD *)v2 + 18) );
    }
    *((_BYTE *)v2 + 152) = v1;
  }
  v9 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v2 + 136));
  if ( _mm_shuffle_ps(v9, v9, 170).m128_f32[0] <= v9.m128_f32[0]
    || v9.m128_f32[3] <= v9.m128_f32[1]
    || *((_QWORD *)v2 + 8) == v1 )
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
