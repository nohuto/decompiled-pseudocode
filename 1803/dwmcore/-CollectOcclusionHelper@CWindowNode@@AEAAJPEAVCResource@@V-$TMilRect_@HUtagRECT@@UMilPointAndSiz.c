/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18013C274
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006DD4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A930C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18013BF14 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        const RECT *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v9; // edi
  int v10; // r9d
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  FLOAT v16; // xmm1_4
  __m128i v17; // xmm0
  FLOAT v18; // xmm1_4
  int v19; // eax
  int v20; // eax
  struct D2D_RECT_F v22; // [rsp+30h] [rbp-58h] BYREF

  v9 = 0;
  v10 = *a3 + a1[51].top;
  v12 = a3[3];
  *a3 = v10;
  v13 = a3[2] - a1[51].right;
  a3[2] = v13;
  v14 = a3[1] + a1[51].bottom;
  a3[1] = v14;
  v15 = v12 - a1[52].left;
  if ( v13 <= v10 )
    v13 = v10;
  a3[2] = v13;
  if ( v15 <= v14 )
    v15 = v14;
  a3[3] = v15;
  CWindowNode::IntersectWithMaximizedClip(a1, a3);
  v16 = (float)a3[1];
  v22.left = (float)*a3;
  v17 = _mm_cvtsi32_si128(a3[2]);
  v22.top = v16;
  v18 = (float)a3[3];
  LODWORD(v22.right) = _mm_cvtepi32_ps(v17).m128_u32[0];
  v22.bottom = v18;
  if ( a6 )
  {
    v19 = COcclusionContext::DrawImage(a4, a2, &v22, a1[52].top);
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x76Au);
  }
  else if ( a5 )
  {
    v20 = COcclusionContext::DrawClippedImage(a4, (__int64)a2, &v22.left, a5, a1[52].top);
    v9 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x771u);
  }
  return v9;
}
