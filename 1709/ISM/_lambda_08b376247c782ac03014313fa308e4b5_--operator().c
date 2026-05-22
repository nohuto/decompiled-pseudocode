/*
 * XREFs of _lambda_08b376247c782ac03014313fa308e4b5_::operator() @ 0x18004E410
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_08b376247c782ac03014313fa308e4b5_::operator()(_QWORD *a1, float a2, float a3)
{
  __int64 v3; // rdx
  char result; // al
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm2_4
  bool v10; // r11
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  bool v14; // r9
  float *v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  bool v19; // r8
  float *v20; // rcx
  float v21; // xmm2_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  bool v24; // dl
  __int64 v25; // rcx
  bool v26; // cl

  v3 = *a1;
  result = 0;
  v10 = 0;
  if ( *(_BYTE *)(*a1 + 101LL) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 76)) & _xmm);
    if ( v7 > (float)(MPCSixDofProcessor::s_homeMaximumAngularVelocity * a3)
      || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 80)) & _xmm), v8 > (float)(flt_18010E4CC * a3))
      || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 84)) & _xmm), v9 > (float)(flt_18010E4D0 * a3)) )
    {
      v10 = 1;
    }
  }
  v14 = 0;
  if ( *(_BYTE *)(v3 + 100) )
  {
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 64)) & _xmm);
    if ( v11 > (float)(MPCSixDofProcessor::s_homeMaximumLinearVelocity * a2)
      || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 68)) & _xmm), v12 > (float)(flt_18010E4FC * a2))
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 72)) & _xmm), v13 > (float)(flt_18010E500 * a2)) )
    {
      v14 = 1;
    }
  }
  v19 = 0;
  if ( *(_BYTE *)(v3 + 101) )
  {
    v15 = (float *)a1[1];
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v15) & _xmm);
    if ( v16 > (float)(MPCSixDofProcessor::s_homeMaximumAngularAcceleration * a3)
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15[1]) & _xmm), v17 > (float)(flt_18010E50C * a3))
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15[2]) & _xmm), v18 > (float)(flt_18010E510 * a3)) )
    {
      v19 = 1;
    }
  }
  v24 = 0;
  if ( *(_BYTE *)(v3 + 100) )
  {
    v20 = (float *)a1[2];
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v20) & _xmm);
    if ( v21 > (float)(MPCSixDofProcessor::s_homeMaximumLinearAcceleration * a2)
      || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20[1]) & _xmm), v22 > (float)(flt_18010E4DC * a2))
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20[2]) & _xmm), v23 > (float)(flt_18010E4E0 * a2)) )
    {
      v24 = 1;
    }
  }
  v25 = a1[3];
  v26 = *(_BYTE *)(v25 + 4500)
     && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v25 + 4156)) & _xmm) > MPCSixDofProcessor::s_homeMaximumWeightedDistance
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v25 + 4160)) & _xmm) > flt_18010E4EC
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v25 + 4164)) & _xmm) > flt_18010E4F0);
  if ( v10 || v14 || v19 || v24 || v26 )
    return 1;
  return result;
}
