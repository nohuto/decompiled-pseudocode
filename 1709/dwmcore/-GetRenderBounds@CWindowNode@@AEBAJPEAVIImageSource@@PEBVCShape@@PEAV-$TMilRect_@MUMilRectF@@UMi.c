/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18009B468
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(
        _DWORD *a1,
        __int64 a2,
        CRectanglesShape *a3,
        __int64 a4,
        bool *a5,
        char *a6)
{
  unsigned int v6; // ebp
  char v7; // r12
  unsigned int v11; // eax
  int v12; // ecx
  __m128i v13; // xmm0
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rax
  signed int TightBounds; // eax
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  bool v20; // bl
  char (__fastcall *v21)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  float v25; // [rsp+38h] [rbp-40h] BYREF
  float v26; // [rsp+3Ch] [rbp-3Ch]
  float v27; // [rsp+40h] [rbp-38h]
  float v28; // [rsp+44h] [rbp-34h]

  v6 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = 0;
  if ( a2 )
  {
    *(_DWORD *)a4 = 0;
    v11 = 0;
    v12 = a1[172] - a1[170];
    if ( v12 >= 0 )
      v11 = v12;
    v13 = _mm_cvtsi32_si128(v11);
    v14 = 0;
    *(_DWORD *)(a4 + 8) = _mm_cvtepi32_ps(v13).m128_u32[0];
    if ( a1[173] - a1[171] >= 0 )
      v14 = a1[173] - a1[171];
    *(float *)(a4 + 12) = (float)v14;
  }
  else
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)a4 = 0;
  }
  if ( a3 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 32LL);
    if ( v15 == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)a3, (__int64)&v25, 0LL);
    else
      TightBounds = v15((__int64)a3, (__int64)&v25, 0LL);
    v6 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TightBounds, 0x8CFu);
      return v6;
    }
    v17 = v28;
    v18 = v27;
    v19 = v26;
    if ( *(float *)a4 > v25 || v27 > *(float *)(a4 + 8) || *(float *)(a4 + 4) > v26 || v28 > *(float *)(a4 + 12) )
      v7 = 1;
    if ( v25 > *(float *)a4 )
      *(float *)a4 = v25;
    if ( v19 > *(float *)(a4 + 4) )
      *(float *)(a4 + 4) = v19;
    if ( *(float *)(a4 + 8) > v18 )
      *(float *)(a4 + 8) = v18;
    if ( *(float *)(a4 + 12) > v17 )
      *(float *)(a4 + 12) = v17;
    if ( *(float *)(a4 + 8) <= *(float *)a4 || *(float *)(a4 + 12) <= *(float *)(a4 + 4) )
    {
      *(_DWORD *)(a4 + 12) = 0;
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
    }
    v20 = 0;
    v21 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)a3 + 40LL);
    if ( v21 == CRectanglesShape::IsRectangles )
      IsRectangles = CRectanglesShape::IsRectangles(a3, &v24);
    else
      IsRectangles = v21(a3, &v24);
    if ( IsRectangles )
      v20 = v24 == 1;
  }
  else
  {
    v20 = 1;
  }
  if ( a5 )
    *a5 = v20;
  if ( a6 )
    *a6 = v7;
  return v6;
}
