/*
 * XREFs of ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x18002C8B0
 * Callers:
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002C980 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801AB210 (-DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextSt.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003692C (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::AddBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  float *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  __m128i v13; // [rsp+20h] [rbp-20h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a2, a2, a3, a1);
  if ( (_BYTE)result )
  {
    if ( !*(_DWORD *)v5 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(v5 + 4));
      v8 = *v4;
      v13 = v7;
      v13.m128i_i32[0] = v7.m128i_i32[0];
      if ( v8 > *(float *)v7.m128i_i32 )
      {
        *(float *)v13.m128i_i32 = v8;
        *(float *)v7.m128i_i32 = v8;
      }
      v9 = v4[1];
      v10 = *(float *)&v13.m128i_i32[1];
      if ( v9 > *(float *)&v13.m128i_i32[1] )
      {
        v13.m128i_i32[1] = (__int32)v4[1];
        v10 = v9;
      }
      v11 = *(float *)&v13.m128i_i32[2];
      if ( *(float *)&v13.m128i_i32[2] > v4[2] )
      {
        v11 = v4[2];
        *(float *)&v13.m128i_i32[2] = v11;
      }
      v12 = *(float *)&v13.m128i_i32[3];
      if ( *(float *)&v13.m128i_i32[3] > v4[3] )
      {
        v12 = v4[3];
        *(float *)&v13.m128i_i32[3] = v12;
      }
      if ( v11 <= *(float *)v7.m128i_i32 || v12 <= v10 )
        v13 = 0uLL;
      v4 = (float *)&v13;
    }
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6 + 52, v4);
  }
  return result;
}
