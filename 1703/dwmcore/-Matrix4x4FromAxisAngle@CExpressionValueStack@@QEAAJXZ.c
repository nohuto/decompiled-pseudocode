/*
 * XREFs of ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x18001F5A8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18001F748 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  float v7; // xmm2_4
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v10 = 6360;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v10);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 2);
  v6 = v1 - 1;
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) != 52 || *(_DWORD *)(v4 + 72 * v6 + 64) != 18 )
  {
    v10 = 6375;
    goto LABEL_8;
  }
  v7 = *(float *)(v4 + 72 * v6);
  v8 = *(_DWORD *)(v4 + 72LL * (v1 - 2) + 8);
  v11 = *(_QWORD *)(v4 + 72LL * (v1 - 2));
  v12 = v8;
  D2DMatrixRotationAxis((struct D2DMatrix *)v13, (const struct D2DVector3 *)&v11, v7);
  *(_DWORD *)(v4 + 8 * v5 + 64) = 265;
  *(_OWORD *)(v4 + 8 * v5) = v13[0];
  *(_OWORD *)(v4 + 8 * v5 + 16) = v13[1];
  *(_OWORD *)(v4 + 8 * v5 + 32) = v13[2];
  *(_OWORD *)(v4 + 8 * v5 + 48) = v13[3];
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
