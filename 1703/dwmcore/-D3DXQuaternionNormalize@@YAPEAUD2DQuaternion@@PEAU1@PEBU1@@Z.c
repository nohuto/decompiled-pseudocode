/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180029BD0
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18002BD38 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     EncodeTBNFrameToQuaternion @ 0x18015F21C (EncodeTBNFrameToQuaternion.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18017ECC8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018E454 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     WithinEpsilon @ 0x180029340 (WithinEpsilon.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DQuaternion *v8; // rdx
  __int128 v10; // xmm0
  float v11; // xmm6_4
  __int128 v12; // [rsp+20h] [rbp-68h]

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( !WithinEpsilon(v7, 1.0) )
  {
    if ( v7 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
      return a1;
    }
    v11 = 1.0 / sqrtf_0(v7);
    *(float *)&v12 = v3 * v11;
    *((float *)&v12 + 1) = v4 * v11;
    *((float *)&v12 + 2) = v5 * v11;
    *((float *)&v12 + 3) = v6 * v11;
    v10 = v12;
    goto LABEL_7;
  }
  if ( a1 != v8 )
  {
    v10 = *(_OWORD *)v8;
LABEL_7:
    *(_OWORD *)a1 = v10;
  }
  return a1;
}
