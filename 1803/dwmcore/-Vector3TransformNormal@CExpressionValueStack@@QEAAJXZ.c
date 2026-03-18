/*
 * XREFs of ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x1801BC6E4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180207440 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3TransformNormal(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rdx
  __int128 v7; // xmm1
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int v17; // [rsp+20h] [rbp-19h]
  __int64 v18; // [rsp+30h] [rbp-9h] BYREF
  int v19; // [rsp+38h] [rbp-1h]
  __int64 v20; // [rsp+40h] [rbp+7h] BYREF
  int v21; // [rsp+48h] [rbp+Fh]
  _OWORD v22[4]; // [rsp+50h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = v1 - 1;
    v5 = 10LL * (v1 - 2);
    v6 = 10 * v4;
    if ( *(_DWORD *)(v3 + 8 * v5 + 72) == 52 )
    {
      if ( *(_DWORD *)(v3 + 80 * v4 + 72) == 265 )
      {
        v7 = *(_OWORD *)(v3 + 80 * v4 + 16);
        v8 = *(_DWORD *)(v3 + 8 * v5 + 8);
        v18 = *(_QWORD *)(v3 + 8 * v5);
        v9 = *(_OWORD *)(v3 + 8 * v6);
        v19 = v8;
        v22[1] = v7;
        v10 = *(_OWORD *)(v3 + 8 * v6 + 48);
        v22[0] = v9;
        v11 = *(_OWORD *)(v3 + 8 * v6 + 32);
        v22[3] = v10;
        v22[2] = v11;
        D3DXVec3TransformNormal(
          (struct D2DVector3 *)&v20,
          (const struct D2DVector3 *)&v18,
          (const struct D2DMatrix *)v22);
        *(_QWORD *)&v11 = v20;
        v12 = v21;
        *(_DWORD *)(v13 + 8 * v14 + 72) = 52;
        *(_QWORD *)(v13 + 8 * v14) = v11;
        *(_DWORD *)(v13 + 8 * v14 + 8) = v12;
        *(_BYTE *)(v13 + 8 * v14 + 76) = 1;
        --*(_DWORD *)(v15 + 16);
        return 0;
      }
      v17 = 7667;
    }
    else
    {
      v17 = 7666;
    }
  }
  else
  {
    v17 = 7660;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17);
  return v2;
}
