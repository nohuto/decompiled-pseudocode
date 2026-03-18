/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18013C090
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18011D528 (-ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CDrawingContext::CalcRectFullyVisible(
        CDrawingContext *this,
        const struct MilRectF *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // edi
  float *v10; // rcx
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v19; // r9
  signed int v20; // eax
  _BYTE v22[4]; // [rsp+40h] [rbp-79h] BYREF
  int v23; // [rsp+44h] [rbp-75h] BYREF
  __int128 v24; // [rsp+48h] [rbp-71h] BYREF
  __int128 v25; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp-51h] BYREF
  char v27; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp-29h] BYREF
  char v29; // [rsp+A0h] [rbp-19h] BYREF
  char v30; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  v9 = 0;
  if ( *((_BYTE *)this + 6827) && *((_QWORD *)this + 843) )
  {
    if ( CMILMatrix::Is2DAffine<1>((__int64)this + 284, 1)
      && (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10[1]) & _xmm), v11 < 0.000081380211)
      && (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10[4]) & _xmm), v12 < 0.000081380211)
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v10) & _xmm), v13 < 0.000081380211)
      && (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10[5]) & _xmm), v14 < 0.000081380211) )
    {
      v22[0] = 0;
      v23 = 0;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v28,
        16LL,
        4LL,
        (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v15 = 2LL;
      v26[0] = v28;
      v16 = &v30;
      v26[1] = &v29;
      v17 = &v27;
      do
      {
        *(_QWORD *)v17 = v16;
        v16 += 16;
        v17 += 8;
        --v15;
      }
      while ( v15 );
      v24 = *(_OWORD *)a2;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (__int64)&v24, (float *)&v25);
      v20 = COcclusionContext::ComputeVisibleRegion(
              *((_QWORD *)this + 843),
              &v25,
              a3,
              v19,
              (__int64)v22,
              (__int64)v26,
              (__int64)&v23);
      v9 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x1059u);
        return v9;
      }
      v4 = v22[0] == 0;
    }
  }
  *a4 = v4;
  return v9;
}
