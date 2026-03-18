/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801BBEC4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180207BFC (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 v7; // xmm0
  float v8; // xmm3_4
  unsigned int v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 2);
    v6 = v4 + 80LL * (v1 - 1);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 35 )
    {
      if ( *(_DWORD *)(v6 + 72) != 104 )
      {
        v10 = 2892;
        goto LABEL_3;
      }
      v8 = (float)((float)(*(float *)(v4 + 80LL * (v1 - 2) + 4) * *(float *)(v6 + 12))
                 + (float)(*(float *)(v4 + 80LL * (v1 - 2)) * *(float *)(v6 + 4)))
         + *(float *)(v6 + 20);
      *(float *)(v4 + 80LL * (v1 - 2)) = (float)((float)(*(float *)(v4 + 80LL * (v1 - 2) + 4) * *(float *)(v6 + 8))
                                               + (float)(*(float *)(v4 + 80LL * (v1 - 2)) * *(float *)v6))
                                       + *(float *)(v6 + 16);
      *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) = 35;
      *(float *)(v4 + 80LL * (v1 - 2) + 4) = v8;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) != 69 )
      {
LABEL_13:
        --*((_DWORD *)v2 + 4);
        return 0;
      }
      if ( *(_DWORD *)(v6 + 72) != 265 )
      {
        v10 = 2861;
        goto LABEL_3;
      }
      v12 = *(_OWORD *)(v4 + 80LL * (v1 - 2));
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v13,
        v5,
        (const struct D2DVector4 *)&v12,
        v4,
        (const struct D2DMatrix *)v6,
        v11);
      v7 = v13;
      *(_DWORD *)(v4 + 8 * v5 + 72) = 69;
      *(_OWORD *)(v4 + 8 * v5) = v7;
    }
    *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
    goto LABEL_13;
  }
  v10 = 2835;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v10);
  return v3;
}
