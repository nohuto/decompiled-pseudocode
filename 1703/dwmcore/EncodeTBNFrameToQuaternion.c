/*
 * XREFs of EncodeTBNFrameToQuaternion @ 0x18015F21C
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015EFB0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180029BD0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x1801AF674 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 */

struct D2DQuaternion *__fastcall EncodeTBNFrameToQuaternion(struct D2DQuaternion *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm12_4
  float v5; // xmm14_4
  float v6; // xmm11_4
  float v7; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int128 v21; // [rsp+28h] [rbp-E0h]
  _DWORD v22[11]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+64h] [rbp-A4h]
  __int64 v24; // [rsp+6Ch] [rbp-9Ch]
  int v25; // [rsp+74h] [rbp-94h]

  v4 = a4[1];
  v5 = a4[2];
  v6 = a2[2];
  v7 = a2[1];
  v9 = *a2;
  v10 = a3[1];
  v11 = *a3;
  v12 = a3[2];
  if ( (float)((float)((float)(*a3 * (float)((float)(v4 * v6) - (float)(v5 * v7)))
                     + (float)(v10 * (float)((float)(*a2 * v5) - (float)(*a4 * v6))))
             + (float)(v12 * (float)((float)(*a4 * v7) - (float)(*a2 * v4)))) >= 0.0 )
    v13 = FLOAT_1_0;
  else
    v13 = FLOAT_N1_0;
  v14 = *a4;
  v22[3] = 0;
  v22[7] = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 1065353216;
  *(float *)&v22[4] = v11 * v13;
  *(float *)&v22[5] = v10 * v13;
  *(float *)&v22[6] = v12 * v13;
  *(float *)v22 = v9;
  *(float *)&v22[1] = v7;
  *(float *)&v22[2] = v6;
  *(float *)&v22[8] = v14;
  *(float *)&v22[9] = v4;
  *(float *)&v22[10] = v5;
  D3DXQuaternionRotationMatrix(a1, (const struct D2DMatrix *)v22);
  D3DXQuaternionNormalize(a1, a1);
  v15 = *((float *)a1 + 3);
  if ( v15 < 0.0 )
  {
    LODWORD(v21) = *(_DWORD *)a1 ^ _xmm;
    DWORD1(v21) = *((_DWORD *)a1 + 1) ^ _xmm;
    DWORD2(v21) = *((_DWORD *)a1 + 2) ^ _xmm;
    HIDWORD(v21) = LODWORD(v15) ^ _xmm;
    *(_OWORD *)a1 = v21;
  }
  if ( *((float *)a1 + 3) < 0.000001 )
  {
    v16 = sqrtf_0(1.0);
    *((_DWORD *)a1 + 3) = 897988541;
    v17 = v16 * *(float *)a1;
    v18 = v16 * *((float *)a1 + 1);
    v19 = v16 * *((float *)a1 + 2);
    *(float *)a1 = v17;
    *((float *)a1 + 1) = v18;
    *((float *)a1 + 2) = v19;
  }
  if ( v13 < 0.0 )
    *(__m128 *)a1 = _mm_xor_ps(*(__m128 *)a1, (__m128)_xmm);
  return a1;
}
