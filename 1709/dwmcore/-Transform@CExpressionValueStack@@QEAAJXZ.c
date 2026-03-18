/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18018724C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801CA558 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  CExpressionValueStack *v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int128 v7; // xmm0
  float v8; // xmm3_4
  unsigned int v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v3 = this;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 9LL * (v1 - 2);
    v6 = v4 + 72LL * (v1 - 1);
    if ( *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) == 35 )
    {
      if ( *(_DWORD *)(v6 + 64) != 104 )
      {
        v10 = 3018;
        goto LABEL_3;
      }
      v8 = (float)((float)(*(float *)(v4 + 72LL * (v1 - 2) + 4) * *(float *)(v6 + 12))
                 + (float)(*(float *)(v4 + 72LL * (v1 - 2)) * *(float *)(v6 + 4)))
         + *(float *)(v6 + 20);
      *(float *)(v4 + 72LL * (v1 - 2)) = (float)((float)(*(float *)(v4 + 72LL * (v1 - 2) + 4) * *(float *)(v6 + 8))
                                               + (float)(*(float *)(v4 + 72LL * (v1 - 2)) * *(float *)v6))
                                       + *(float *)(v6 + 16);
      *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) = 35;
      *(float *)(v4 + 72LL * (v1 - 2) + 4) = v8;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) != 69 )
      {
LABEL_13:
        --*((_DWORD *)v3 + 4);
        return v2;
      }
      if ( *(_DWORD *)(v6 + 64) != 265 )
      {
        v10 = 2987;
        goto LABEL_3;
      }
      v12 = *(_OWORD *)(v4 + 72LL * (v1 - 2));
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v13,
        v4,
        (const struct D2DVector4 *)&v12,
        v5,
        (const struct D2DMatrix *)(v4 + 72LL * (v1 - 1)),
        v11);
      v7 = v13;
      *(_DWORD *)(v4 + 8 * v5 + 64) = 69;
      *(_OWORD *)(v4 + 8 * v5) = v7;
    }
    *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
    goto LABEL_13;
  }
  v10 = 2960;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v10);
  return v2;
}
