/*
 * XREFs of ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A9470
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180007A70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800566A8 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@IV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180097620 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801A3CA0 (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawOcclusionRectangle(__int64 a1, float *a2, char a3)
{
  int v3; // ebx
  int v6; // eax
  CMILMatrix *v7; // rcx
  int v8; // eax
  __m128 v9; // xmm0
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  float *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v24; // eax
  __m128 v25; // [rsp+30h] [rbp-40h]
  __m128 v26; // [rsp+40h] [rbp-30h] BYREF
  __m128 v27; // [rsp+50h] [rbp-20h] BYREF
  int v28; // [rsp+60h] [rbp-10h]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 1036) || a2[2] <= *a2 || a2[3] <= a2[1] )
    return (unsigned int)v3;
  v28 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 )
    v7 = (CMILMatrix *)(*(_QWORD *)(a1 + 24) + 68LL * (unsigned int)(v6 - 1));
  else
    v7 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v7, (__int64)a2, v26.m128_f32);
  v8 = *(_DWORD *)(a1 + 120);
  if ( v8 )
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 136) + 16LL * (unsigned int)(v8 - 1)));
    v25 = v9;
    v25.m128_i32[0] = v9.m128_i32[0];
    v10 = v9.m128_f32[0];
    if ( v26.m128_f32[0] > v9.m128_f32[0] )
    {
      v25.m128_i32[0] = v26.m128_i32[0];
      v10 = v26.m128_f32[0];
      v9 = v25;
    }
    v11 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    if ( v26.m128_f32[1] > v11 )
    {
      v25.m128_i32[1] = v26.m128_i32[1];
      v11 = v26.m128_f32[1];
      v9 = v25;
    }
    v12 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    if ( v12 > v26.m128_f32[2] )
    {
      v25.m128_i32[2] = v26.m128_i32[2];
      v12 = v26.m128_f32[2];
      v9 = v25;
    }
    v13 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
    if ( v13 > v26.m128_f32[3] )
    {
      v25.m128_i32[3] = v26.m128_i32[3];
      v13 = v26.m128_f32[3];
      v9 = v25;
    }
    if ( v12 <= v10 || v13 <= v11 )
      v9 = 0u;
  }
  else
  {
    v9 = v26;
  }
  v26 = v9;
  v27 = v9;
  if ( !a3 )
  {
    v14 = *(_DWORD *)(a1 + 1080);
    v15 = -1;
    if ( v14 )
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4LL * (unsigned int)(v14 - 1));
    v16 = *(_DWORD *)(a1 + 640);
    v17 = 0;
    if ( !v16 )
      goto LABEL_32;
    v18 = (float *)(a1 + 772);
    while ( ((v15 >> v17) & 1) == 0
         || (float)((float)(v26.m128_f32[3] - v9.m128_f32[1]) * (float)(v9.m128_f32[2] - v9.m128_f32[0])) <= (float)(*v18 * 0.25) )
    {
      ++v17;
      ++v18;
      if ( v17 >= v16 )
        goto LABEL_32;
    }
  }
  v19 = *(unsigned int *)(a1 + 424);
  v20 = v19 + 1;
  v3 = (int)v19 + 1 < (unsigned int)v19 ? 0x80070216 : 0;
  if ( (int)v19 + 1 < (unsigned int)v19 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v20 > *(_DWORD *)(a1 + 420) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 400, 0x14u, 1, &v27);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 400);
    v22 = 5 * v19;
    *(__m128 *)(v21 + 4 * v22) = v27;
    *(_DWORD *)(v21 + 4 * v22 + 16) = v28;
    *(_DWORD *)(a1 + 424) = v20;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x746u);
LABEL_32:
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4BFu);
  }
  return (unsigned int)v3;
}
