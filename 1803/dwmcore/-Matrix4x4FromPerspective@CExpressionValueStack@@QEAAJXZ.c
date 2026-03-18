/*
 * XREFs of ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ @ 0x1801B95B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x180206228 (-D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspective(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-58h]
  _OWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 4 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v3 + 80LL * (v1 - 4) + 72) == 18 )
    {
      if ( *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) == 18 )
      {
        if ( *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) == 18 )
          {
            v2 = 0;
            if ( D2DMatrixPerspectiveRH(
                   (struct D2DMatrix *)v10,
                   *(float *)(v3 + 80LL * (v1 - 4)),
                   *(float *)(v3 + 80LL * (v1 - 3)),
                   *(float *)(v3 + 80LL * (v1 - 2)),
                   *(float *)(v3 + 80LL * (v1 - 1))) )
            {
              v7 = v10[0];
              *(_DWORD *)(v4 + 8 * v5 + 72) = 265;
              *(_OWORD *)(v4 + 8 * v5) = v7;
              *(_OWORD *)(v4 + 8 * v5 + 16) = v10[1];
              *(_OWORD *)(v4 + 8 * v5 + 32) = v10[2];
              *(_OWORD *)(v4 + 8 * v5 + 48) = v10[3];
              *(_BYTE *)(v4 + 8 * v5 + 76) = 1;
              *(_DWORD *)(v6 + 16) -= 3;
              return v2;
            }
            v9 = 6694;
          }
          else
          {
            v9 = 6667;
          }
        }
        else
        {
          v9 = 6666;
        }
      }
      else
      {
        v9 = 6665;
      }
    }
    else
    {
      v9 = 6664;
    }
  }
  else
  {
    v9 = 6656;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9);
  return v2;
}
