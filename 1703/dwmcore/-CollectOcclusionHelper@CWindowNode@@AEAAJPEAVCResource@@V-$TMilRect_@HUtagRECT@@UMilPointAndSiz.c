/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180051FE4
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D9BC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800501A0 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18009B4BC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        _DWORD *a1,
        __int64 a2,
        LONG *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v7; // edi
  LONG v11; // ecx
  LONG v12; // eax
  float v13; // xmm1_4
  __m128i v14; // xmm0
  float v15; // xmm1_4
  int v16; // eax
  int v18; // eax
  float v19[4]; // [rsp+30h] [rbp-58h] BYREF

  *a3 += a1[215];
  v7 = 0;
  a3[2] -= a1[216];
  a3[1] += a1[217];
  a3[3] -= a1[218];
  v11 = a3[2];
  v12 = a3[1];
  if ( v11 <= *a3 )
    v11 = *a3;
  if ( a3[3] > v12 )
    v12 = a3[3];
  a3[2] = v11;
  a3[3] = v12;
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a3);
  v13 = (float)a3[1];
  v19[0] = (float)*a3;
  v14 = _mm_cvtsi32_si128(a3[2]);
  v19[1] = v13;
  v15 = (float)a3[3];
  LODWORD(v19[2]) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v19[3] = v15;
  if ( a6 )
  {
    v16 = COcclusionContext::DrawImage(a4, a2, v19, (unsigned int)a1[219]);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA4Au);
  }
  else if ( a5 )
  {
    v18 = COcclusionContext::DrawClippedImage(a4, a2, v19, a5, a1[219]);
    v7 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA51u);
  }
  return v7;
}
