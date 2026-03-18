/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801B9E50
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x1802067BC (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x180206828 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x180206888 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // esi
  int v4; // ebx
  char v6; // r14
  unsigned int v7; // r8d
  int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // xmm1_4
  __int128 v11; // xmm0
  int v13; // eax
  int v14; // xmm1_4
  int v15; // xmm0_4
  __int64 v16; // r9
  int v17; // eax
  __int128 v18; // xmm1
  __int64 v19; // r9
  __int64 v20; // r11
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // eax
  __int64 v24; // xmm0_8
  int v25; // eax
  __int128 v26; // xmm1
  __int64 v27; // r9
  __int64 v28; // r11
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int *v31; // r9
  int *v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // xmm0_8
  __int128 v37; // xmm1
  __int64 v38; // r9
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned int v41; // [rsp+28h] [rbp-29h]
  __int64 v42; // [rsp+38h] [rbp-19h] BYREF
  int v43; // [rsp+40h] [rbp-11h]
  __int64 v44; // [rsp+48h] [rbp-9h] BYREF
  int v45; // [rsp+50h] [rbp-1h]
  __int128 v46; // [rsp+58h] [rbp+7h] BYREF
  __int128 v47; // [rsp+68h] [rbp+17h]
  __int128 v48; // [rsp+78h] [rbp+27h]
  __int128 v49; // [rsp+88h] [rbp+37h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = a2;
  v6 = 0;
  if ( v2 >= (unsigned int)a2 )
  {
    v8 = 1;
    switch ( (_DWORD)a2 )
    {
      case 1:
        v9 = *((_QWORD *)this + 3) + 80LL * (v2 - 1);
        if ( *(_DWORD *)(v9 + 72) == 18 )
        {
          v10 = *(_DWORD *)v9;
          LODWORD(v47) = 0;
          *((_QWORD *)&v47 + 1) = 0LL;
          *(_QWORD *)&v48 = 0LL;
          HIDWORD(v48) = 0;
          v46 = v10;
          *(_OWORD *)v9 = v10;
          *(_DWORD *)(v9 + 72) = 265;
          DWORD2(v48) = v10;
          v11 = v48;
          DWORD1(v47) = v10;
          *(_OWORD *)(v9 + 16) = v47;
          *(_BYTE *)(v9 + 76) = 1;
          *(_OWORD *)(v9 + 32) = v11;
          *(_OWORD *)(v9 + 48) = _xmm;
          goto LABEL_7;
        }
        if ( *(_DWORD *)(v9 + 72) == 52 )
        {
          v13 = *(_DWORD *)(v9 + 8);
          v42 = *(_QWORD *)v9;
          v14 = HIDWORD(v42);
          LODWORD(v46) = v42;
          v43 = v13;
          v15 = v13;
LABEL_23:
          v6 = 1;
          *(_QWORD *)((char *)&v49 + 4) = 0LL;
          LODWORD(v49) = 0;
          HIDWORD(v48) = 0;
          *(_QWORD *)&v48 = 0LL;
          *((_QWORD *)&v47 + 1) = 0LL;
          LODWORD(v47) = 0;
          *((_QWORD *)&v46 + 1) = 0LL;
          DWORD1(v46) = 0;
          *(_DWORD *)(v9 + 72) = 265;
          DWORD1(v47) = v14;
          DWORD2(v48) = v15;
          *(_OWORD *)v9 = v46;
          v33 = v48;
          *((float *)&v49 + 3) = FLOAT_1_0;
          *(_OWORD *)(v9 + 16) = v47;
          v34 = v49;
          *(_OWORD *)(v9 + 32) = v33;
          *(_OWORD *)(v9 + 48) = v34;
          *(_BYTE *)(v9 + 76) = 1;
        }
        break;
      case 2:
        v16 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v16 + 80LL * (v2 - 2) + 72) == 18 )
        {
          if ( *(_DWORD *)(v16 + 80LL * (v2 - 1) + 72) == 52 )
          {
            v17 = *(_DWORD *)(v16 + 80LL * (v2 - 1) + 8);
            v42 = *(_QWORD *)(v16 + 80LL * (v2 - 1));
            v43 = v17;
            D2DMatrixScaling(&v46, a2, &v42);
            v18 = v47;
            *(_OWORD *)(v19 + 8 * v20) = v46;
            *(_DWORD *)(v19 + 8 * v20 + 72) = 265;
            v21 = v48;
            *(_OWORD *)(v19 + 8 * v20 + 16) = v18;
            *(_BYTE *)(v19 + 8 * v20 + 76) = v8;
            v22 = v49;
            *(_OWORD *)(v19 + 8 * v20 + 32) = v21;
            *(_OWORD *)(v19 + 8 * v20 + 48) = v22;
            goto LABEL_7;
          }
        }
        else if ( *(_DWORD *)(v16 + 80LL * (v2 - 2) + 72) == 52 && *(_DWORD *)(v16 + 80LL * (v2 - 1) + 72) == 52 )
        {
          v23 = *(_DWORD *)(v16 + 80LL * (v2 - 1) + 8);
          v42 = *(_QWORD *)(v16 + 80LL * (v2 - 1));
          v24 = *(_QWORD *)(v16 + 80LL * (v2 - 2));
          v6 = 1;
          v43 = v23;
          v25 = *(_DWORD *)(v16 + 80LL * (v2 - 2) + 8);
          v44 = v24;
          v45 = v25;
          D2DMatrixScaling(&v46, &v44, &v42);
          v26 = v47;
          *(_OWORD *)(v27 + 8 * v28) = v46;
          *(_DWORD *)(v27 + 8 * v28 + 72) = 265;
          v29 = v48;
          *(_OWORD *)(v27 + 8 * v28 + 16) = v26;
          *(_BYTE *)(v27 + 8 * v28 + 76) = v8;
          v30 = v49;
          *(_OWORD *)(v27 + 8 * v28 + 32) = v29;
          *(_OWORD *)(v27 + 8 * v28 + 48) = v30;
        }
        break;
      case 3:
        v9 = *((_QWORD *)this + 3) + 80LL * (v2 - 3);
        v31 = (int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 2));
        v32 = (int *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
        if ( *(_DWORD *)(v9 + 72) == 18 && v31[18] == 18 && v32[18] == 18 )
        {
          v14 = *v31;
          LODWORD(v46) = *(_DWORD *)v9;
          v15 = *v32;
          goto LABEL_23;
        }
        break;
      case 4:
        v35 = *((_QWORD *)this + 3);
        if ( *(_DWORD *)(v35 + 80LL * (v2 - 4) + 72) == 18
          && *(_DWORD *)(v35 + 80LL * (v2 - 3) + 72) == 18
          && *(_DWORD *)(v35 + 80LL * (v2 - 2) + 72) == 18
          && *(_DWORD *)(v35 + 80LL * (v2 - 1) + 72) == 52 )
        {
          v36 = *(_QWORD *)(v35 + 80LL * (v2 - 1));
          v6 = 1;
          v45 = *(_DWORD *)(v35 + 80LL * (v2 - 1) + 8);
          v44 = v36;
          D2DMatrixScaling(&v46);
          v37 = v47;
          *(_OWORD *)v38 = v46;
          *(_DWORD *)(v38 + 72) = 265;
          v39 = v48;
          *(_OWORD *)(v38 + 16) = v37;
          *(_BYTE *)(v38 + 76) = v8;
          v40 = v49;
          *(_OWORD *)(v38 + 32) = v39;
          *(_OWORD *)(v38 + 48) = v40;
        }
        break;
    }
    if ( !v6 )
    {
      v41 = 6375;
      v7 = v8;
      goto LABEL_3;
    }
LABEL_7:
    *((_DWORD *)this + 4) += v8 - v4;
    return v3;
  }
  v41 = 6248;
  v7 = 1;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    v7,
    -2147467259,
    v41);
  return v3;
}
