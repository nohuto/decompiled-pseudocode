/*
 * XREFs of ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x18019C148
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18019BA88 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18019C79C (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800264CC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     atan2f_0 @ 0x1800DD3AD (atan2f_0.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18020596C (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1802062B8 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180206C30 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x1802070A0 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

char __fastcall CNaturalAnimation::GenerateVector3Basis(CNaturalAnimation *this)
{
  char v1; // al
  char v2; // r9
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm1_4
  unsigned __int64 v8; // xmm9_8
  float v9; // edi
  float *v10; // rax
  float *v11; // r8
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  const struct D2DMatrix *v18; // r8
  _BYTE v20[16]; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  float v22; // [rsp+40h] [rbp-21h]

  v1 = *((_BYTE *)this + 540);
  v2 = 0;
  if ( (v1 & 4) != 0 )
  {
    v4 = *((float *)this + 75) - *((float *)this + 78);
    v5 = *((float *)this + 76) - *((float *)this + 79);
    v6 = *((float *)this + 77) - *((float *)this + 80);
    v21 = __PAIR64__(LODWORD(v5), LODWORD(v4));
    v22 = v6;
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6))) & _xmm);
    if ( v7 >= 0.0000011920929 )
    {
      v9 = v22;
      v8 = v21;
    }
    else
    {
      v8 = *(_QWORD *)((char *)this + 324);
      v9 = *((float *)this + 83);
      v21 = v8;
      v5 = *((float *)&v8 + 1);
      LODWORD(v4) = v8;
      v22 = v9;
      v6 = v9;
    }
    if ( (v1 & 1) == 0
      || (v10 = (float *)D3DXVec3Cross(
                           (CNaturalAnimation *)((char *)this + 336),
                           (const struct D2DVector3 *)&v21,
                           (CNaturalAnimation *)((char *)this + 336)),
          v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(*v10 * *v10) + (float)(v10[1] * v10[1]))
                                                          + (float)(v10[2] * v10[2]))) & _xmm),
          v12 >= 0.0000011920929)
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(*v11 * *v11) + (float)(v11[1] * v11[1]))
                                                          + (float)(v11[2] * v11[2]))) & _xmm),
          v13 < 0.0000011920929) )
    {
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6))) & _xmm);
      if ( v14 >= 0.0000011920929 )
      {
        v15 = FLOAT_1_0;
        if ( v4 == 0.0 )
          v16 = 0.0;
        else
          v16 = FLOAT_1_0;
        if ( v4 != 0.0 )
          LODWORD(v15) = COERCE_UNSIGNED_INT(v5 / v4) ^ _xmm;
        v22 = 0.0;
        v21 = __PAIR64__(LODWORD(v16), LODWORD(v15));
        D3DXVec3Normalize((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v21);
        v17 = atan2f_0(
                COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)&v21 + 1) * v4) - (float)(*(float *)&v21 * v5)) ^ _xmm),
                v6);
        D3DXQuaternionRotationAxis((struct D2DQuaternion *)v20, (const struct D2DVector3 *)&v21, v17);
        D2DMatrixRotationQuaternion((CNaturalAnimation *)((char *)this + 412), (const struct D2DQuaternion *)v20);
        D2DMatrixInverse((CNaturalAnimation *)((char *)this + 476), 0LL, v18);
        v2 = 1;
      }
    }
    *((_BYTE *)this + 540) &= ~4u;
    *((_QWORD *)this + 42) = v8;
    *((float *)this + 86) = v9;
  }
  return v2;
}
