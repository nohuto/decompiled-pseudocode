/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180017A0C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180017ADC (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  float v7; // xmm2_4
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v10 = 6185;
LABEL_8:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v10);
    return v6;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = v1 - 1;
  v5 = 10LL * (v1 - 2);
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) != 52 || (v6 = 0, *(_DWORD *)(v3 + 80 * v4 + 72) != 18) )
  {
    v10 = 6199;
    goto LABEL_8;
  }
  v7 = *(float *)(v3 + 80 * v4);
  v8 = *(_DWORD *)(v3 + 80LL * (v1 - 2) + 8);
  v11 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
  v12 = v8;
  D2DMatrixRotationAxis((struct D2DMatrix *)v13, (const struct D2DVector3 *)&v11, v7);
  *(_DWORD *)(v3 + 8 * v5 + 72) = 265;
  *(_OWORD *)(v3 + 8 * v5) = v13[0];
  *(_OWORD *)(v3 + 8 * v5 + 16) = v13[1];
  *(_OWORD *)(v3 + 8 * v5 + 32) = v13[2];
  *(_OWORD *)(v3 + 8 * v5 + 48) = v13[3];
  *(_BYTE *)(v3 + 8 * v5 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v6;
}
