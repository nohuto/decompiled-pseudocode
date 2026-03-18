/*
 * XREFs of ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180186784
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801CA000 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  float v7; // xmm2_4
  int v8; // eax
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v11 = 6463;
LABEL_7:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 2);
  v6 = v1 - 1;
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) != 52 || *(_DWORD *)(v4 + 72 * v6 + 64) != 18 )
  {
    v11 = 6478;
    goto LABEL_7;
  }
  v7 = *(float *)(v4 + 72 * v6);
  v8 = *(_DWORD *)(v4 + 72LL * (v1 - 2) + 8);
  v12 = *(_QWORD *)(v4 + 72LL * (v1 - 2));
  v13 = v8;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v14, (const struct D2DVector3 *)&v12, v7);
  v9 = v14;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 71;
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  *(_OWORD *)(v4 + 8 * v5) = v9;
  --*((_DWORD *)this + 4);
  return v2;
}
