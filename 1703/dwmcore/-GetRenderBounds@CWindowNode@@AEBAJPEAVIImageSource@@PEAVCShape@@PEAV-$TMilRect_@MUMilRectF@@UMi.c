/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180052B18
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(_DWORD *a1, __int64 a2, CShape *a3, __int64 a4, char *a5, char *a6)
{
  unsigned int v6; // edi
  char v7; // bp
  char v8; // r12
  unsigned int v12; // eax
  int v13; // ecx
  __m128i v14; // xmm0
  int v15; // eax
  __int64 (__fastcall *v16)(CShape *, float *, _QWORD); // rax
  int TightBounds; // eax
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v22; // [rsp+30h] [rbp-48h] BYREF
  float v23; // [rsp+34h] [rbp-44h]
  float v24; // [rsp+38h] [rbp-40h]
  float v25; // [rsp+3Ch] [rbp-3Ch]

  v6 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    *(_DWORD *)a4 = 0;
    v12 = 0;
    v13 = a1[165] - a1[163];
    if ( v13 >= 0 )
      v12 = v13;
    v14 = _mm_cvtsi32_si128(v12);
    v15 = 0;
    *(_DWORD *)(a4 + 8) = _mm_cvtepi32_ps(v14).m128_u32[0];
    if ( a1[166] - a1[164] >= 0 )
      v15 = a1[166] - a1[164];
    *(float *)(a4 + 12) = (float)v15;
  }
  else
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)a4 = 0;
  }
  if ( !a3 )
    goto LABEL_26;
  v16 = *(__int64 (__fastcall **)(CShape *, float *, _QWORD))(*(_QWORD *)a3 + 32LL);
  if ( (char *)v16 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(a3, &v22, 0LL);
  else
    TightBounds = v16(a3, &v22, 0LL);
  v6 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x8FDu);
    return v6;
  }
  v18 = v25;
  v19 = v24;
  v20 = v23;
  if ( *(float *)a4 > v22 || v24 > *(float *)(a4 + 8) || *(float *)(a4 + 4) > v23 || v25 > *(float *)(a4 + 12) )
    v8 = 1;
  if ( v22 > *(float *)a4 )
    *(float *)a4 = v22;
  if ( v20 > *(float *)(a4 + 4) )
    *(float *)(a4 + 4) = v20;
  if ( *(float *)(a4 + 8) > v19 )
    *(float *)(a4 + 8) = v19;
  if ( *(float *)(a4 + 12) > v18 )
    *(float *)(a4 + 12) = v18;
  if ( *(float *)(a4 + 8) <= *(float *)a4 || *(float *)(a4 + 12) <= *(float *)(a4 + 4) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
  }
  if ( CShape::IsAxisAlignedRectangle(a3) )
LABEL_26:
    v7 = 1;
  if ( a5 )
    *a5 = v7;
  if ( a6 )
    *a6 = v8;
  return v6;
}
