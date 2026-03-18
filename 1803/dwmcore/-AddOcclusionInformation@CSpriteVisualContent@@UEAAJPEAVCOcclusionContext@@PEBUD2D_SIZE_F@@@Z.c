/*
 * XREFs of ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18009D390
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004A730 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180003B50 (-IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOpaqueRect@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180098E30 (-IsOpaqueRect@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18009AC90 (-IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::AddOcclusionInformation(
        CSpriteVisualContent *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v3; // ebx
  char (__fastcall *v5)(CNineGridBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  char IsOpaqueRect; // al
  int v8; // eax
  CMILMatrix *v9; // rcx
  int v10; // eax
  __m128 v11; // xmm0
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  float *v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __m128 v26; // [rsp+30h] [rbp-50h]
  __m128 v27; // [rsp+40h] [rbp-40h]
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-30h] BYREF
  __m128 v29; // [rsp+60h] [rbp-20h] BYREF
  int v30; // [rsp+70h] [rbp-10h]

  v3 = 0;
  if ( !a3 )
    return (unsigned int)v3;
  v5 = *(char (__fastcall **)(CNineGridBrush *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)this + 280LL);
  if ( v5 == CMaskBrush::IsOpaqueRect )
  {
    IsOpaqueRect = CMaskBrush::IsOpaqueRect(this, a3, &v28);
  }
  else if ( (char *)v5 == (char *)CColorBrush::IsOpaqueRect )
  {
    IsOpaqueRect = CColorBrush::IsOpaqueRect(this, a3, &v28);
  }
  else
  {
    IsOpaqueRect = v5 == CNineGridBrush::IsOpaqueRect
                 ? CNineGridBrush::IsOpaqueRect(this, a3, &v28)
                 : v5(this, a3, &v28);
  }
  if ( !IsOpaqueRect )
    return (unsigned int)v3;
  if ( *((_DWORD *)a2 + 259) || v28.right <= v28.left || v28.bottom <= v28.top )
  {
LABEL_48:
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x39u);
    return (unsigned int)v3;
  }
  v30 = 0;
  v8 = *((_DWORD *)a2 + 2);
  if ( v8 )
    v9 = (CMILMatrix *)(*((_QWORD *)a2 + 3) + 68LL * (unsigned int)(v8 - 1));
  else
    v9 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v9);
  v10 = *((_DWORD *)a2 + 30);
  if ( v10 )
  {
    v11 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 17) + 16LL * (unsigned int)(v10 - 1)));
    v26 = v11;
    v26.m128_i32[0] = v11.m128_i32[0];
    v12 = v11.m128_f32[0];
    if ( v27.m128_f32[0] > v11.m128_f32[0] )
    {
      v26.m128_i32[0] = v27.m128_i32[0];
      v12 = v27.m128_f32[0];
      v11 = v26;
    }
    v13 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    if ( v27.m128_f32[1] > v13 )
    {
      v26.m128_i32[1] = v27.m128_i32[1];
      v13 = v27.m128_f32[1];
      v11 = v26;
    }
    v14 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    if ( v14 > v27.m128_f32[2] )
    {
      v26.m128_i32[2] = v27.m128_i32[2];
      v14 = v27.m128_f32[2];
      v11 = v26;
    }
    v15 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
    if ( v15 > v27.m128_f32[3] )
    {
      v26.m128_i32[3] = v27.m128_i32[3];
      v15 = v27.m128_f32[3];
      v11 = v26;
    }
    if ( v14 <= v12 || v15 <= v13 )
      v11 = 0uLL;
  }
  else
  {
    v11 = v27;
  }
  v16 = *((_DWORD *)a2 + 270);
  v17 = -1;
  v29 = v11;
  if ( v16 )
    v17 = *(_DWORD *)(*((_QWORD *)a2 + 137) + 4LL * (unsigned int)(v16 - 1));
  v18 = *((_DWORD *)a2 + 160);
  v19 = 0;
  if ( !v18 )
  {
LABEL_38:
    if ( v3 >= 0 )
      return (unsigned int)v3;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4BFu);
    goto LABEL_48;
  }
  v20 = (float *)((char *)a2 + 772);
  while ( ((v17 >> v19) & 1) == 0
       || (float)((float)(v11.m128_f32[3] - v11.m128_f32[1]) * (float)(v11.m128_f32[2] - v11.m128_f32[0])) <= (float)(*v20 * 0.25) )
  {
    ++v19;
    ++v20;
    if ( v19 >= v18 )
      goto LABEL_38;
  }
  v21 = *((unsigned int *)a2 + 106);
  v22 = v21 + 1;
  v3 = (int)v21 + 1 < (unsigned int)v21 ? 0x80070216 : 0;
  if ( (int)v21 + 1 < (unsigned int)v21 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v22 > *((_DWORD *)a2 + 105) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 400, 0x14u, 1, &v29);
    v3 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
  }
  else
  {
    v23 = *((_QWORD *)a2 + 50);
    v24 = 5 * v21;
    *(__m128 *)(v23 + 4 * v24) = v29;
    *(_DWORD *)(v23 + 4 * v24 + 16) = v30;
    *((_DWORD *)a2 + 106) = v22;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x746u);
    goto LABEL_38;
  }
  return (unsigned int)v3;
}
