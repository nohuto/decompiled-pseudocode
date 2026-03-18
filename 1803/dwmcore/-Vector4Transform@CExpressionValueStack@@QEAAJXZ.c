/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801BC9D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180207588 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180207680 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x1802077FC (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x180207888 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x1802079B0 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x180207A80 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r9
  __int128 *v6; // rdx
  int v7; // eax
  int v8; // ecx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v23; // [rsp+20h] [rbp-29h]
  __int128 v24; // [rsp+30h] [rbp-19h] BYREF
  __int128 v25; // [rsp+40h] [rbp-9h] BYREF
  __int128 v26; // [rsp+50h] [rbp+7h] BYREF
  __int128 v27; // [rsp+60h] [rbp+17h] BYREF
  __int128 v28; // [rsp+70h] [rbp+27h]
  __int128 v29; // [rsp+80h] [rbp+37h]
  __int128 v30; // [rsp+90h] [rbp+47h]
  __int64 v31; // [rsp+B0h] [rbp+67h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v23 = 7759;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23);
    return v3;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 10LL * (v1 - 2);
  v6 = (__int128 *)(v4 + 80LL * (v1 - 1));
  v7 = *(_DWORD *)(v4 + 8 * v5 + 72);
  if ( v7 != 35 && v7 != 52 && v7 != 69 )
  {
    v23 = 7773;
    goto LABEL_3;
  }
  v8 = *((_DWORD *)v6 + 18);
  if ( v8 != 71 && v8 != 265 )
  {
    v23 = 7782;
    goto LABEL_3;
  }
  if ( v7 == 35 )
  {
    v31 = *(_QWORD *)(v4 + 8 * v5);
    if ( v8 == 265 )
    {
      v9 = v6[1];
      v27 = *v6;
      v10 = v6[2];
      v28 = v9;
      v11 = v6[3];
      v29 = v10;
      v30 = v11;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector2 *)&v31, (const struct D2DMatrix *)&v27);
    }
    else
    {
      v24 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector2 *)&v31, (const struct D2DQuaternion *)&v24);
    }
  }
  else if ( v7 == 52 )
  {
    v14 = *(_DWORD *)(v4 + 8 * v5 + 8);
    *(_QWORD *)&v24 = *(_QWORD *)(v4 + 8 * v5);
    DWORD2(v24) = v14;
    if ( v8 == 265 )
    {
      v15 = v6[1];
      v27 = *v6;
      v16 = v6[2];
      v28 = v15;
      v17 = v6[3];
      v29 = v16;
      v30 = v17;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector3 *)&v24, (const struct D2DMatrix *)&v27);
    }
    else
    {
      v26 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector3 *)&v24, (const struct D2DQuaternion *)&v26);
    }
  }
  else
  {
    v24 = *(_OWORD *)(v4 + 8 * v5);
    if ( v8 == 265 )
    {
      v18 = v6[1];
      v27 = *v6;
      v19 = v6[2];
      v28 = v18;
      v20 = v6[3];
      v29 = v19;
      v30 = v20;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector4 *)&v24, (const struct D2DMatrix *)&v27);
    }
    else
    {
      v26 = *v6;
      D3DXVec4Transform((struct D2DVector4 *)&v25, (const struct D2DVector4 *)&v24, (const struct D2DQuaternion *)&v26);
    }
  }
  v21 = v25;
  *(_DWORD *)(v13 + 8 * v12 + 72) = 69;
  *(_BYTE *)(v13 + 8 * v12 + 76) = 1;
  *(_OWORD *)(v13 + 8 * v12) = v21;
  --*((_DWORD *)this + 4);
  return 0;
}
