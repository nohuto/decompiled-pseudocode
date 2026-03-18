/*
 * XREFs of itrp_Execute @ 0x1C02D1328
 * Callers:
 *     itrp_ExecuteFontPgm @ 0x1C02D16A8 (itrp_ExecuteFontPgm.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C02D176C (itrp_ExecuteGlyphPgm.c)
 *     itrp_ExecutePrePgm @ 0x1C02D1810 (itrp_ExecutePrePgm.c)
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02BDD44 (InvokeGlobalGSScale.c)
 *     ExecutePhaseControl @ 0x1C02CF308 (ExecutePhaseControl.c)
 *     InitPhaseControl @ 0x1C02CF484 (InitPhaseControl.c)
 *     InvokeInterpreter @ 0x1C02CF5AC (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_Execute(_OWORD *a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int16 v21; // ax
  bool v22; // zf
  __int64 v23; // rdx
  __int16 v25; // ax
  int v26; // ecx
  _OWORD v27[7]; // [rsp+28h] [rbp-A9h] BYREF
  _OWORD v28[7]; // [rsp+98h] [rbp-39h] BYREF

  v6 = a1[1];
  v27[0] = *a1;
  v9 = a1[2];
  v27[1] = v6;
  v10 = a1[3];
  v27[2] = v9;
  v11 = a1[4];
  v27[3] = v10;
  v12 = a1[5];
  v27[4] = v11;
  v13 = a1[6];
  v27[5] = v12;
  v14 = a2[1];
  v27[6] = v13;
  v15 = *a2;
  v28[1] = v14;
  v16 = a2[3];
  v28[0] = v15;
  v17 = a2[2];
  v28[3] = v16;
  v18 = a2[5];
  v28[2] = v17;
  v19 = a2[4];
  v28[5] = v18;
  v28[4] = v19;
  v20 = a2[6];
  qword_1C032C9F8 = (__int64)v27;
  qword_1C032CA00 = a5;
  LocalGS = (__int64)v28;
  qword_1C032C9C8 = (__int64)v28;
  qword_1C032C9D0 = (__int64)v28;
  qword_1C032CA10 = 0LL;
  dword_1C032CA18 = 0;
  dword_1C032C9DC = 0x4000;
  dword_1C032C9D8 = 0x4000;
  dword_1C032C9E0 = 0x4000;
  word_1C032CA28 = 0x4000;
  dword_1C032CA2C = 2;
  dword_1C032CA30 = 3;
  dword_1C032CA34 = 3;
  dword_1C032CA20 = 0;
  dword_1C032CA68 = *(_DWORD *)(a5 + 400);
  dword_1C032CA6C = *(_DWORD *)(a5 + 404);
  dword_1C032CA70 = *(_DWORD *)(a5 + 408);
  v22 = *(_DWORD *)(a5 + 36) == 0;
  v28[6] = v20;
  word_1C032CA4C = v22;
  if ( *(_BYTE *)(a5 + 333) == 1 )
  {
    dword_1C032CA3C = 2;
    dword_1C032CA40 = 2;
    dword_1C032CA44 = 4;
    goto LABEL_22;
  }
  *(_WORD *)(a5 + 454) &= 0xFFE4u;
  v21 = *(_WORD *)(qword_1C032CA00 + 452);
  if ( (v21 & 1) == 0 )
    goto LABEL_13;
  if ( (~(_BYTE)v21 & 4) != 0 )
  {
    if ( HIWORD(dword_1C032C9D8) == 0x4000 )
    {
      v22 = (_WORD)dword_1C032C9D8 == 0;
      goto LABEL_9;
    }
  }
  else if ( (_WORD)dword_1C032C9D8 == 0x4000 )
  {
    v22 = HIWORD(dword_1C032C9D8) == 0;
LABEL_9:
    if ( !v22 )
      goto LABEL_10;
LABEL_13:
    word_1C032CA74 = 0;
LABEL_14:
    v23 = 0LL;
    goto LABEL_15;
  }
LABEL_10:
  word_1C032CA74 = 1;
  if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C032CA00 + 333) )
    goto LABEL_14;
  v23 = 8LL;
LABEL_15:
  *(_DWORD *)(qword_1C032CA00 + 128) = itrp_RoundFunctionId[v23 + *(unsigned __int16 *)(qword_1C032CA00 + 132)];
  word_1C032CA78 = -1;
  word_1C032CA76 = -1;
  if ( *(_WORD *)(a5 + 24) <= 1u )
    return 0LL;
  if ( *(_BYTE *)(a5 + 340) )
  {
    dword_1C032CA3C = 2;
    dword_1C032CA40 = 2;
    dword_1C032CA44 = 4;
  }
  else
  {
    dword_1C032CA3C = 3;
    dword_1C032CA40 = 3;
    dword_1C032CA44 = 5;
    word_1C032CA4C = 0;
  }
  v25 = *(_WORD *)(a5 + 154);
  if ( v25 )
  {
    *(_DWORD *)(a5 + 112) = InvokeGlobalGSScale(*(_DWORD *)(a5 + 192), (int *)(a5 + 296), v25);
    word_1C032CA4C = 0;
  }
LABEL_22:
  qword_1C032C9E8 = *(_QWORD *)a5;
  qword_1C032CA08 = a6;
  dword_1C032CA50 = 0;
  v26 = 2 - (a6 != 0);
  dword_1C032CA38 = v26;
  if ( *(_BYTE *)(a5 + 333) == 2 && (*(_BYTE *)(a5 + 452) & 3) == 3 )
  {
    InitPhaseControl(qword_1C032C9F8 + 112);
    v26 = dword_1C032CA38;
  }
  InvokeInterpreter(v26, a3, a4);
  if ( *(_BYTE *)(qword_1C032CA00 + 333) == 2
    && (*(_BYTE *)(qword_1C032CA00 + 452) & 3) == 3
    && !*(_DWORD *)(qword_1C032C9F8 + 208) )
  {
    ExecutePhaseControl((__int64)&LocalGS, qword_1C032C9F8 + 112);
  }
  *(_DWORD *)(a5 + 408) = dword_1C032CA70;
  return (unsigned int)dword_1C032CA50;
}
