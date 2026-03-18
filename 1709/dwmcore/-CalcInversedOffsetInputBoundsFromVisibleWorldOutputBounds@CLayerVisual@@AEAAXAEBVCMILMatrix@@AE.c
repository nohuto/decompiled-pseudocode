/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18016F6E8
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x18016F9C8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
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
  float v16; // xmm1_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20[4]; // [rsp+28h] [rbp-89h]
  __int128 v21; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v22[4]; // [rsp+48h] [rbp-69h] BYREF
  int v23; // [rsp+88h] [rbp-29h]
  float v24; // [rsp+98h] [rbp-19h] BYREF
  float v25; // [rsp+9Ch] [rbp-15h]
  float v26; // [rsp+A0h] [rbp-11h]
  float v27; // [rsp+A4h] [rbp-Dh]

  v7 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)v20 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 168LL);
  v9 = *(_OWORD *)a3;
  v23 = *(_DWORD *)(a2 + 64);
  v22[1] = v7;
  v10 = *(_OWORD *)(a2 + 48);
  v21 = v9;
  v11 = *(_OWORD *)a2;
  v22[3] = v10;
  v22[0] = v11;
  v22[2] = *(_OWORD *)(a2 + 32);
  result = CMILMatrix::Invert((CMILMatrix *)v22, a2, a3);
  if ( result )
  {
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)v22, (__int64)&v21, &v24);
    v25 = v25 + COERCE_FLOAT(LODWORD(v20[1]) ^ _xmm);
    v24 = v24 + COERCE_FLOAT(LODWORD(v20[0]) ^ _xmm);
    v27 = v27 + COERCE_FLOAT(LODWORD(v20[1]) ^ _xmm);
    v26 = v26 + COERCE_FLOAT(LODWORD(v20[0]) ^ _xmm);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v24, a5);
    if ( *a4 > *a5 )
      *a5 = *a4;
    v14 = a4[1];
    if ( v14 > a5[1] )
      a5[1] = v14;
    v15 = a4[2];
    if ( a5[2] > v15 )
      a5[2] = v15;
    v16 = a4[3];
    if ( a5[3] > v16 )
      a5[3] = v16;
    if ( a5[2] <= *a5 || a5[3] <= a5[1] )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v17 = v20[0] + *(float *)(a6 + 8);
    v18 = v20[1] + *(float *)(a6 + 4);
    v19 = v20[1] + *(float *)(a6 + 12);
    *(float *)a6 = v20[0] + *(float *)a6;
    *(float *)(a6 + 8) = v17;
    *(float *)(a6 + 4) = v18;
    *(float *)(a6 + 12) = v19;
  }
  else
  {
    *(_OWORD *)a5 = *v13;
    *(_OWORD *)a6 = *v13;
  }
  return result;
}
