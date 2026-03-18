/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18017FB54
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801AFBFC (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
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
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  unsigned int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

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
        v11 = 2992;
        goto LABEL_3;
      }
      *(_QWORD *)&v13 = *(_QWORD *)(v4 + 72LL * (v1 - 2));
      v8 = (__m128)(unsigned int)v13;
      v9 = (__m128)DWORD1(v13);
      v9.m128_f32[0] = (float)((float)(*((float *)&v13 + 1) * *(float *)(v6 + 8))
                             + (float)(*(float *)&v13 * *(float *)v6))
                     + *(float *)(v6 + 16);
      v8.m128_f32[0] = (float)((float)(*(float *)&v13 * *(float *)(v6 + 4))
                             + (float)(*((float *)&v13 + 1) * *(float *)(v6 + 12)))
                     + *(float *)(v6 + 20);
      *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) = 35;
      *(_QWORD *)(v4 + 72LL * (v1 - 2)) = _mm_unpacklo_ps(v9, v8).m128_u64[0];
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
        v11 = 2961;
        goto LABEL_3;
      }
      v13 = *(_OWORD *)(v4 + 72LL * (v1 - 2));
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v14,
        v4,
        (const struct D2DVector4 *)&v13,
        v5,
        (const struct D2DMatrix *)(v4 + 72LL * (v1 - 1)),
        v12);
      v7 = v14;
      *(_DWORD *)(v4 + 8 * v5 + 64) = 69;
      *(_OWORD *)(v4 + 8 * v5) = v7;
    }
    *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
    goto LABEL_13;
  }
  v11 = 2934;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v11);
  return v2;
}
