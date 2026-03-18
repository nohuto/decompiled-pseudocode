/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x180184060
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1801C9EE4 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v3 + 72LL * (v1 - 2);
    v5 = v3 + 72LL * (v1 - 1);
    v6 = *(_DWORD *)(v4 + 64);
    if ( v6 == *(_DWORD *)(v5 + 64) )
    {
      if ( v6 == 71 )
      {
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v12,
          (const struct D2DQuaternion *)v4,
          (const struct D2DQuaternion *)v5);
        v7 = v12;
        *(_DWORD *)(v8 + 64) = 71;
        *(_BYTE *)(v8 + 68) = 1;
        *(_OWORD *)v8 = v7;
        --*(_DWORD *)(v9 + 16);
        return v2;
      }
      v11 = 4259;
    }
    else
    {
      v11 = 4229;
    }
  }
  else
  {
    v11 = 4205;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v11);
  return v2;
}
