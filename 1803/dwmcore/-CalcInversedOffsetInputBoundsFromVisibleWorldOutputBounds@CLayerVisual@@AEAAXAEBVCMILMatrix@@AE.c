/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180197F1C
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801981FC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3,
        float *a4,
        float *a5,
        __int64 a6)
{
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned __int8 result; // al
  _OWORD *v13; // r8
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22[4]; // [rsp+28h] [rbp-89h]
  __int128 v23; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v24[4]; // [rsp+48h] [rbp-69h] BYREF
  int v25; // [rsp+88h] [rbp-29h]
  float v26; // [rsp+98h] [rbp-19h] BYREF
  float v27; // [rsp+9Ch] [rbp-15h]
  float v28; // [rsp+A0h] [rbp-11h]
  float v29; // [rsp+A4h] [rbp-Dh]

  v7 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)v22 = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 160LL);
  v9 = *(_OWORD *)a3;
  v25 = *(_DWORD *)(a2 + 64);
  v24[1] = v7;
  v10 = *(_OWORD *)(a2 + 48);
  v23 = v9;
  v11 = *(_OWORD *)a2;
  v24[3] = v10;
  v24[0] = v11;
  v24[2] = *(_OWORD *)(a2 + 32);
  result = CMILMatrix::Invert((CMILMatrix *)v24, a2, a3);
  if ( result )
  {
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)v24, (float *)&v23, &v26);
    v27 = v27 + COERCE_FLOAT(LODWORD(v22[1]) ^ _xmm);
    v26 = v26 + COERCE_FLOAT(LODWORD(v22[0]) ^ _xmm);
    v29 = v29 + COERCE_FLOAT(LODWORD(v22[1]) ^ _xmm);
    v28 = v28 + COERCE_FLOAT(LODWORD(v22[0]) ^ _xmm);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a2, &v26, a5);
    if ( *a4 > *a5 )
      *a5 = *a4;
    v14 = a4[1];
    if ( v14 > a5[1] )
      a5[1] = v14;
    v15 = a4[2];
    v16 = a5[2];
    if ( v16 > v15 )
    {
      a5[2] = v15;
      v16 = v15;
    }
    v17 = a4[3];
    v18 = a5[3];
    if ( v18 > v17 )
    {
      a5[3] = v17;
      v18 = v17;
      v16 = a5[2];
    }
    if ( v16 <= *a5 || v18 <= a5[1] )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v19 = v22[0] + *(float *)(a6 + 8);
    v20 = v22[1] + *(float *)(a6 + 4);
    v21 = v22[1] + *(float *)(a6 + 12);
    *(float *)a6 = v22[0] + *(float *)a6;
    *(float *)(a6 + 8) = v19;
    *(float *)(a6 + 4) = v20;
    *(float *)(a6 + 12) = v21;
  }
  else
  {
    *(_OWORD *)a5 = *v13;
    *(_OWORD *)a6 = *v13;
  }
  return result;
}
