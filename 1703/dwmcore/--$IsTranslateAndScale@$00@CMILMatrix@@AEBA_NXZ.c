/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800113A0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180150820 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v1; // r9
  bool v2; // r8
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  char v11; // al
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4

  v1 = *(_BYTE *)(a1 + 64);
  v2 = 0;
  if ( v1 >> 6 )
    return v1 >> 6 == 1;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
  if ( v4 < 0.00012207031 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
    if ( v5 < 0.00012207031 )
    {
      v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
      if ( v6 < 0.00012207031 )
      {
        v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm);
        if ( v7 < 0.00012207031 )
        {
          v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm);
          if ( v8 < 0.00012207031 )
          {
            v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm);
            if ( v9 < 0.00012207031 )
            {
              v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm);
              if ( v10 < 0.00012207031 )
              {
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm);
                if ( v12 < 0.00012207031 )
                {
                  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm);
                  if ( v13 < 0.00012207031 )
                  {
                    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm);
                    v2 = v14 < 0.00012207031;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 65) &= 0xFCu;
  v11 = 2 * v2 - 1;
  *(_BYTE *)(a1 + 65) |= v11 & 3;
  *(_BYTE *)(a1 + 64) = v1 & 0x3F | (v11 << 6);
  return v2;
}
