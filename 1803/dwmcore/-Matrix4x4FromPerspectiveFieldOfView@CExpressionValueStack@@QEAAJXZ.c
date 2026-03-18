/*
 * XREFs of ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x1801B96EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x180206058 (-D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int128 v6; // xmm0
  unsigned int v8; // [rsp+20h] [rbp-58h]
  _OWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 4 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 10LL * (v1 - 4);
    if ( *(_DWORD *)(v4 + 80LL * (v1 - 4) + 72) == 18 )
    {
      if ( *(_DWORD *)(v4 + 80LL * (v1 - 3) + 72) == 18 )
      {
        if ( *(_DWORD *)(v4 + 80LL * (v1 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v4 + 80LL * (v1 - 1) + 72) == 18 )
          {
            v3 = 0;
            if ( D2DMatrixPerspectiveFieldOfView(
                   (struct D2DMatrix *)v9,
                   *(float *)(v4 + 80LL * (v1 - 4)),
                   *(float *)(v4 + 80LL * (v1 - 3)),
                   *(float *)(v4 + 80LL * (v1 - 2)),
                   *(float *)(v4 + 80LL * (v1 - 1))) )
            {
              v6 = v9[0];
              *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
              *(_OWORD *)(v4 + 8 * v5) = v6;
              *(_OWORD *)(v4 + 8 * v5 + 16) = v9[1];
              *(_OWORD *)(v4 + 8 * v5 + 32) = v9[2];
              *(_OWORD *)(v4 + 8 * v5 + 48) = v9[3];
              *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
              *((_DWORD *)this + 4) -= 3;
              return v3;
            }
            v8 = 6769;
          }
          else
          {
            v8 = 6744;
          }
        }
        else
        {
          v8 = 6743;
        }
      }
      else
      {
        v8 = 6742;
      }
    }
    else
    {
      v8 = 6741;
    }
  }
  else
  {
    v8 = 6733;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8);
  return v3;
}
