/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18011A1C8
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D4FC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D6C4 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180098EE4 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        _DWORD *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
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
  signed int v16; // eax
  signed int v17; // eax
  float v19[4]; // [rsp+30h] [rbp-58h] BYREF

  *a3 += a1[221];
  v7 = 0;
  a3[2] -= a1[222];
  a3[1] += a1[223];
  a3[3] -= a1[224];
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
    v16 = COcclusionContext::DrawImage(a4, a2, v19, a1[225]);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xA14u);
  }
  else if ( a5 )
  {
    v17 = COcclusionContext::DrawClippedImage(a4, a2, v19, a5, a1[225]);
    v7 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xA1Bu);
  }
  return v7;
}
