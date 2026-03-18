/*
 * XREFs of ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18009A2A0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Ensure3DFlags(CMILMatrix *this)
{
  char v1; // al
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  char v14; // al
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  double v18; // xmm0_8
  char v19; // al
  float v20; // xmm1_4
  char v21; // al
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  char v25; // al
  char v26; // dl
  double v27; // xmm0_8
  float v28; // xmm1_4
  float v29; // xmm1_4

  v1 = *((_BYTE *)this + 64);
  if ( (v1 & 3) == 0 || (v1 & 0xC) == 0 || (v1 & 0xC0) == 0 || (*((_BYTE *)this + 65) & 0xC) == 0 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
    if ( v2 >= 0.00012207031
      || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 6)) & _xmm), v3 >= 0.00012207031)
      || (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm), v4 >= 0.00012207031)
      || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm), v5 >= 0.00012207031)
      || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm), v6 >= 0.00012207031)
      || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 9)) & _xmm), v7 >= 0.00012207031)
      || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm), v8 >= 0.00012207031)
      || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 15) - 1.0)) & _xmm), v9 >= 0.00012207031) )
    {
      v21 = v1 | 0xCF;
      *((_BYTE *)this + 65) |= 0xCu;
    }
    else
    {
      v10 = *(float *)this;
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
      if ( v11 >= 0.00012207031
        || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm), v24 >= 0.00012207031) )
      {
        v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
        if ( v12 >= 0.00012207031 )
          return;
        v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 4)) & _xmm);
        if ( v13 >= 0.00012207031 )
          return;
        *((_BYTE *)this + 65) = 125;
        v14 = v1 & 0x3F | 0x40;
        *((_BYTE *)this + 64) = v14;
        v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
        if ( v15 >= 0.00012207031
          || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 5) - 1.0)) & _xmm),
              v16 >= 0.00012207031)
          || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 10) - 1.0)) & _xmm),
              v17 >= 0.00012207031) )
        {
          *((_BYTE *)this + 64) = v14 | 0x3F;
          return;
        }
        v18 = *((float *)this + 12);
        v19 = v14 & 0xC3 | 0x14;
        *((_BYTE *)this + 64) = v19;
        v20 = COERCE_DOUBLE(*(_QWORD *)&v18 & _xmm);
        if ( v20 < 0.00012207031 )
        {
          v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 13)) & _xmm);
          if ( v22 < 0.00012207031 )
          {
            v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 14)) & _xmm);
            if ( v23 < 0.00012207031 )
            {
              *((_BYTE *)this + 64) = v19 & 0xFC | 1;
              return;
            }
          }
        }
        v21 = v19 | 3;
      }
      else
      {
        *((_BYTE *)this + 65) &= 3u;
        v25 = v1 | 0x3F;
        *((_BYTE *)this + 65) |= 0x54u;
        v26 = *((_BYTE *)this + 65);
        v27 = *((float *)this + 1);
        *((_BYTE *)this + 64) = v25;
        v28 = COERCE_DOUBLE(*(_QWORD *)&v27 & _xmm);
        if ( v28 >= 0.00012207031
          || (v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 4)) & _xmm), v29 >= 0.00012207031) )
        {
          v21 = v25 | 0xC0;
          *((_BYTE *)this + 65) = v26 | 3;
        }
        else
        {
          v21 = v25 & 0x3F | 0x40;
          *((_BYTE *)this + 65) = v26 & 0xFC | 1;
        }
      }
    }
    *((_BYTE *)this + 64) = v21;
  }
}
