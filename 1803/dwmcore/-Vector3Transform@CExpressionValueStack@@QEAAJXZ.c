/*
 * XREFs of ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801BC5A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18020710C (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1802071B0 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Transform(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // xmm0_8
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-29h]
  __int64 v19; // [rsp+30h] [rbp-19h] BYREF
  int v20; // [rsp+38h] [rbp-11h]
  __int64 v21; // [rsp+40h] [rbp-9h] BYREF
  int v22; // [rsp+48h] [rbp-1h]
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v24[4]; // [rsp+60h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v18 = 7592;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18);
    return v3;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v1 - 1;
  v6 = 10LL * (v1 - 2);
  v7 = 10 * v5;
  if ( *(_DWORD *)(v4 + 8 * v6 + 72) != 52 )
  {
    v18 = 7598;
    goto LABEL_3;
  }
  v8 = *(_DWORD *)(v4 + 80 * v5 + 72);
  if ( v8 != 71 && v8 != 265 )
  {
    v18 = 7606;
    goto LABEL_3;
  }
  v9 = *(_DWORD *)(v4 + 8 * v6 + 8);
  v19 = *(_QWORD *)(v4 + 8 * v6);
  v20 = v9;
  if ( v8 == 265 )
  {
    v10 = *(_OWORD *)(v4 + 8 * v7 + 16);
    v24[0] = *(_OWORD *)(v4 + 8 * v7);
    v11 = *(_OWORD *)(v4 + 8 * v7 + 32);
    v24[1] = v10;
    v12 = *(_OWORD *)(v4 + 8 * v7 + 48);
    v24[2] = v11;
    v24[3] = v12;
    D3DXVec3Transform((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DMatrix *)v24);
  }
  else
  {
    v23 = *(_OWORD *)(v4 + 8 * v7);
    D3DXVec3Transform((struct D2DVector3 *)&v21, (const struct D2DVector3 *)&v19, (const struct D2DQuaternion *)&v23);
  }
  v15 = v21;
  v16 = v22;
  *(_DWORD *)(v13 + 8 * v14 + 72) = 52;
  *(_QWORD *)(v13 + 8 * v14) = v15;
  *(_DWORD *)(v13 + 8 * v14 + 8) = v16;
  *(_BYTE *)(v13 + 8 * v14 + 76) = 1;
  --*((_DWORD *)this + 4);
  return 0;
}
