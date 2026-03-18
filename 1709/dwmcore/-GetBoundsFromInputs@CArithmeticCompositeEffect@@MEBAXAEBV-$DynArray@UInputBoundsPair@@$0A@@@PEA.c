/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180180040
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163E60 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  char result; // al
  float *v8; // r9
  float **v9; // r10
  float *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float *v17; // rdx
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4

  if ( a2[6] != 2 )
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[44]) & _xmm);
  if ( v3 <= 0.0000099999997
    || (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm), v4 >= 0.0000099999997)
    || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm), v5 >= 0.0000099999997)
    || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm), v6 >= 0.0000099999997) )
  {
    if ( v3 < 0.0000099999997 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm) > 0.0000099999997 )
      {
        v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm);
        if ( v15 < 0.0000099999997 )
        {
          v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
          if ( v16 < 0.0000099999997 )
          {
            v17 = (float *)(*(_QWORD *)a2 + 4LL);
            return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v17);
          }
        }
      }
      if ( v3 < 0.0000099999997 )
      {
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm);
        if ( v18 < 0.0000099999997 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm) > 0.0000099999997 )
        {
          v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
          if ( v19 < 0.0000099999997 )
          {
            v17 = (float *)(*(_QWORD *)a2 + 24LL);
            return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v17);
          }
        }
        if ( v3 < 0.0000099999997 )
        {
          v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[45]) & _xmm);
          if ( v20 < 0.0000099999997 )
          {
            v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[46]) & _xmm);
            if ( v21 < 0.0000099999997 )
            {
              v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[47]) & _xmm);
              if ( v22 < 0.0000099999997 )
                return result;
            }
          }
        }
      }
    }
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(*(_QWORD *)a2 + 4LL));
  v10 = *v9;
  v11 = (*v9)[6];
  if ( v11 > *v8 )
    *v8 = v11;
  v12 = v10[7];
  if ( v12 > v8[1] )
    v8[1] = v12;
  v13 = v10[8];
  if ( v8[2] > v13 )
    v8[2] = v13;
  v14 = v10[9];
  if ( v8[3] > v14 )
    v8[3] = v14;
  if ( v8[2] <= *v8 || v8[3] <= v8[1] )
  {
    result = 0;
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  return result;
}
