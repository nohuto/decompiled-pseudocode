/*
 * XREFs of ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18008B970
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CColorBrush::AddOcclusionInformation(
        CColorBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v4; // xmm2_4
  bool v5; // zf
  float width; // xmm0_4
  float height; // xmm1_4
  int v8; // ebx
  int v9; // eax
  void *v10; // rcx
  int v11; // eax
  __m128 v12; // xmm0
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  float *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // eax
  unsigned int v29; // [rsp+30h] [rbp-50h]
  __m128 v30; // [rsp+38h] [rbp-48h] BYREF
  __m128 v31; // [rsp+48h] [rbp-38h] BYREF
  __m128 v32; // [rsp+58h] [rbp-28h] BYREF
  int v33; // [rsp+68h] [rbp-18h]

  if ( !a3 )
    return 0LL;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 23) - 1.0)) & _xmm);
  if ( v4 >= 0.0000011920929 )
    return 0LL;
  v30.m128_u64[0] = 0LL;
  v5 = *((_DWORD *)a2 + 237) == 0;
  width = a3->width;
  height = a3->height;
  v30.m128_i32[2] = LODWORD(a3->width);
  v30.m128_f32[3] = height;
  if ( !v5 )
    return 0LL;
  v8 = 0;
  if ( width <= 0.0 || height <= 0.0 )
    goto LABEL_43;
  v33 = 0;
  v9 = *((_DWORD *)a2 + 2);
  if ( v9 )
    v10 = (void *)(*((_QWORD *)a2 + 3) + 68LL * (unsigned int)(v9 - 1));
  else
    v10 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v10, &v30, &v31);
  v11 = *((_DWORD *)a2 + 30);
  if ( v11 )
  {
    v12 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 17) + 16LL * (unsigned int)(v11 - 1)));
    v30 = v12;
    v30.m128_i32[0] = v12.m128_i32[0];
    v13 = v12.m128_f32[0];
    if ( v31.m128_f32[0] > v12.m128_f32[0] )
    {
      v30.m128_i32[0] = v31.m128_i32[0];
      v13 = v31.m128_f32[0];
      v12 = v30;
    }
    v14 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
    v30.m128_f32[1] = v14;
    if ( v31.m128_f32[1] > v14 )
    {
      v30.m128_i32[1] = v31.m128_i32[1];
      v14 = v31.m128_f32[1];
      v12 = v30;
    }
    v15 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
    v30.m128_f32[2] = v15;
    if ( v15 > v31.m128_f32[2] )
    {
      v15 = v31.m128_f32[2];
      v30.m128_i32[2] = v31.m128_i32[2];
      v12 = v30;
    }
    v16 = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
    if ( v16 > v31.m128_f32[3] )
    {
      v16 = v31.m128_f32[3];
      v30.m128_i32[3] = v31.m128_i32[3];
      v12 = v30;
    }
    if ( v15 <= v13 || v16 <= v14 )
    {
      v30 = 0uLL;
      v12 = 0uLL;
    }
  }
  else
  {
    v12 = v31;
  }
  v17 = *((_DWORD *)a2 + 246);
  v18 = -1;
  v31 = v12;
  v32 = v12;
  if ( v17 )
    v18 = *(_DWORD *)(*((_QWORD *)a2 + 125) + 4LL * (unsigned int)(v17 - 1));
  v19 = *((_DWORD *)a2 + 138);
  v20 = 0;
  if ( !v19 )
  {
LABEL_33:
    if ( v8 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4C9u);
LABEL_43:
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x64u);
    return 0LL;
  }
  v21 = (float *)((char *)a2 + 684);
  while ( ((v18 >> v20) & 1) == 0
       || (float)((float)(v12.m128_f32[3] - v12.m128_f32[1]) * (float)(v12.m128_f32[2] - v12.m128_f32[0])) <= (float)(*v21 * 0.25) )
  {
    ++v20;
    ++v21;
    if ( v20 >= v19 )
      goto LABEL_33;
  }
  v22 = *((unsigned int *)a2 + 84);
  v23 = v29;
  v24 = v22 + 1;
  if ( (int)v22 + 1 >= (unsigned int)v22 )
    v23 = v22 + 1;
  v8 = v24 < (unsigned int)v22 ? 0x80070216 : 0;
  if ( v24 < (unsigned int)v22 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v23 > *((_DWORD *)a2 + 83) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 312, 0x14u, 1, &v32);
    v8 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
  }
  else
  {
    v25 = 5 * v22;
    v26 = *((_QWORD *)a2 + 39);
    *(__m128 *)(v26 + 4 * v25) = v32;
    *(_DWORD *)(v26 + 4 * v25 + 16) = v33;
    *((_DWORD *)a2 + 84) = v23;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x73Eu);
    goto LABEL_33;
  }
  return 0LL;
}
