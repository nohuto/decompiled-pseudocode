/*
 * XREFs of ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180070C30
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180053AF0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CColorBrush::AddOcclusionInformation(
        CColorBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm2_4
  FLOAT width; // xmm1_4
  FLOAT height; // xmm2_4
  int v6; // eax
  float v8[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 23) - 1.0)) & _xmm);
    if ( v3 < 0.0000011920929 )
    {
      width = a3->width;
      height = a3->height;
      v8[0] = 0.0;
      v8[1] = 0.0;
      v8[2] = width;
      v8[3] = height;
      v6 = COcclusionContext::DrawOcclusionRectangle((__int64)a2, v8, 0);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x64u);
    }
  }
  return 0LL;
}
