/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004A7F0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800570B0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18008FE20 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(CWindowNode *this, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  bool (__fastcall *v7)(CWindowNode *__hidden); // rax
  bool ShouldHitTest; // al
  __int64 v9; // rax
  __m128 v10; // xmm0
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  char *v15; // r8
  __int64 (__fastcall *v16)(__int64, __int64, char *, _QWORD *); // rax
  int v17; // eax
  int v18; // edx
  int *v19; // rcx
  _DWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 31);
  if ( v6 )
  {
    v15 = (char *)this + 132;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD *))(*(_QWORD *)v6 + 168LL);
    v17 = (char *)v16 == (char *)CRenderData::GetBounds ? CRenderData::GetBounds(v6, a2, v15, a3) : v16(v6, a2, v15, a3);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD46u);
  }
  v7 = *(bool (__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)this + 248LL);
  if ( v7 == CWindowNode::ShouldHitTest )
    ShouldHitTest = CWindowNode::ShouldHitTest(this);
  else
    ShouldHitTest = v7(this);
  if ( ShouldHitTest )
  {
    v9 = *((_QWORD *)this + 27);
    if ( (*(_BYTE *)(v9 + 4) & 0x20) != 0 )
    {
      v18 = *(_DWORD *)(v9 + 12);
      v19 = (int *)(v9 + 12);
      if ( (v18 & 0x7F000000) != 0x1B000000 )
      {
        do
        {
          v19 = (int *)((char *)v19 + (v18 & 0xFFFFFF) + 4);
          v18 = *v19;
        }
        while ( (*v19 & 0x7F000000) != 0x1B000000 );
      }
      v10 = *(__m128 *)(v19 + 1);
      LODWORD(v11) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      LODWORD(v13) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
    }
    else
    {
      v10.m128_i32[0] = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v11 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v12 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v13 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    *(float *)&v20[3] = v13;
    *(float *)&v20[2] = v12;
    *(float *)&v20[1] = v11;
    v20[0] = v10.m128_i32[0];
    if ( v12 > v10.m128_f32[0] && v13 > v11 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v20);
  }
  return v3;
}
