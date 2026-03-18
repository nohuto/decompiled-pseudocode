/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180092770
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(_DWORD *a1, __int64 a2, CShape *a3, __int64 a4, char *a5, char *a6)
{
  unsigned int v6; // edi
  char v7; // si
  char v8; // r12
  unsigned int v12; // eax
  int v13; // ecx
  __m128i v14; // xmm0
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v24; // [rsp+30h] [rbp-48h] BYREF
  float v25; // [rsp+34h] [rbp-44h]
  float v26; // [rsp+38h] [rbp-40h]
  float v27; // [rsp+3Ch] [rbp-3Ch]

  v6 = 0;
  *(_DWORD *)a4 = 0;
  v7 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v8 = 0;
  if ( a2 )
  {
    v12 = 0;
    v13 = a1[174] - a1[172];
    if ( v13 >= 0 )
      v12 = v13;
    v14 = _mm_cvtsi32_si128(v12);
    v15 = 0;
    *(_DWORD *)(a4 + 8) = _mm_cvtepi32_ps(v14).m128_u32[0];
    if ( a1[175] - a1[173] >= 0 )
      v15 = a1[175] - a1[173];
    v16 = (float)v15;
  }
  else
  {
    *(_DWORD *)(a4 + 8) = 0;
    v16 = 0.0;
  }
  *(float *)(a4 + 12) = v16;
  if ( !a3 )
    goto LABEL_24;
  v17 = (*(__int64 (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, &v24, 0LL);
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x653u);
    return v6;
  }
  v18 = v27;
  v19 = v26;
  v20 = v25;
  if ( *(float *)a4 > v24 || v26 > *(float *)(a4 + 8) || *(float *)(a4 + 4) > v25 || v27 > *(float *)(a4 + 12) )
    v8 = 1;
  if ( v24 > *(float *)a4 )
    *(float *)a4 = v24;
  if ( v20 > *(float *)(a4 + 4) )
    *(float *)(a4 + 4) = v20;
  v21 = *(float *)(a4 + 8);
  if ( v21 > v19 )
  {
    *(float *)(a4 + 8) = v19;
    v21 = v19;
  }
  v22 = *(float *)(a4 + 12);
  if ( v22 > v18 )
  {
    *(float *)(a4 + 12) = v18;
    v22 = v18;
    v21 = *(float *)(a4 + 8);
  }
  if ( v21 <= *(float *)a4 || v22 <= *(float *)(a4 + 4) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
  }
  if ( CShape::IsAxisAlignedRectangle(a3) )
LABEL_24:
    v7 = 1;
  if ( a5 )
    *a5 = v7;
  if ( a6 )
    *a6 = v8;
  return v6;
}
