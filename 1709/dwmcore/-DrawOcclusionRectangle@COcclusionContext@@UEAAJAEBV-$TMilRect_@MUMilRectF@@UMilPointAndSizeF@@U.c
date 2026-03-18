/*
 * XREFs of ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830
 * Callers:
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE@gsl@@@Z @ 0x18001DD7C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE@gsl@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180029790 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180070C30 (-AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180167420 (-AddOcclusionInformation@CGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180175DE0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawOcclusionRectangle(__int64 a1, float *a2, char a3)
{
  int v3; // ebx
  int v6; // eax
  void *v7; // rcx
  int v8; // eax
  __m128 v9; // xmm0
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  float *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // eax
  __m128 v26; // [rsp+30h] [rbp-50h]
  unsigned int v27; // [rsp+40h] [rbp-40h]
  __m128 v28; // [rsp+48h] [rbp-38h] BYREF
  __m128 v29; // [rsp+58h] [rbp-28h] BYREF
  int v30; // [rsp+68h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 1036) || a2[2] <= *a2 || a2[3] <= a2[1] )
    return (unsigned int)v3;
  v30 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
    v7 = (void *)(*(_QWORD *)(a1 + 24) + 68LL * (unsigned int)(v6 - 1));
  else
    v7 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v7, (__int64)a2, v28.m128_f32);
  v8 = *(_DWORD *)(a1 + 120);
  if ( v8 )
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 136) + 16LL * (unsigned int)(v8 - 1)));
    v26 = v9;
    v26.m128_i32[0] = v9.m128_i32[0];
    v10 = v9.m128_f32[0];
    if ( v28.m128_f32[0] > v9.m128_f32[0] )
    {
      v26.m128_i32[0] = v28.m128_i32[0];
      v10 = v28.m128_f32[0];
      v9 = v26;
    }
    v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    v26.m128_f32[1] = v11;
    if ( v28.m128_f32[1] > v11 )
    {
      v26.m128_i32[1] = v28.m128_i32[1];
      v11 = v28.m128_f32[1];
      v9 = v26;
    }
    v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v26.m128_f32[2] = v12;
    if ( v12 > v28.m128_f32[2] )
    {
      v12 = v28.m128_f32[2];
      v26.m128_i32[2] = v28.m128_i32[2];
      v9 = v26;
    }
    v13 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
    if ( v13 > v28.m128_f32[3] )
    {
      v13 = v28.m128_f32[3];
      v26.m128_i32[3] = v28.m128_i32[3];
      v9 = v26;
    }
    if ( v12 <= v10 || v13 <= v11 )
      v9 = 0u;
  }
  else
  {
    v9 = v28;
  }
  v28 = v9;
  v29 = v9;
  if ( !a3 )
  {
    v14 = *(_DWORD *)(a1 + 1080);
    v15 = -1;
    if ( v14 )
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4LL * (unsigned int)(v14 - 1));
    v16 = *(_DWORD *)(a1 + 640);
    v17 = 0;
    if ( !v16 )
      goto LABEL_34;
    v18 = (float *)(a1 + 772);
    while ( ((v15 >> v17) & 1) == 0
         || (float)((float)(v28.m128_f32[3] - v9.m128_f32[1]) * (float)(v9.m128_f32[2] - v9.m128_f32[0])) <= (float)(*v18 * 0.25) )
    {
      ++v17;
      ++v18;
      if ( v17 >= v16 )
        goto LABEL_34;
    }
  }
  v19 = *(unsigned int *)(a1 + 424);
  v20 = v27;
  v21 = v19 + 1;
  if ( (int)v19 + 1 >= (unsigned int)v19 )
    v20 = v19 + 1;
  v3 = v21 < (unsigned int)v19 ? 0x80070216 : 0;
  if ( v21 < (unsigned int)v19 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v20 > *(_DWORD *)(a1 + 420) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 400, 20LL, 1LL, &v29);
    v3 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
  }
  else
  {
    v22 = 5 * v19;
    v23 = *(_QWORD *)(a1 + 400);
    *(__m128 *)(v23 + 4 * v22) = v29;
    *(_DWORD *)(v23 + 4 * v22 + 16) = v30;
    *(_DWORD *)(a1 + 424) = v20;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x73Cu);
LABEL_34:
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4B5u);
  }
  return (unsigned int)v3;
}
