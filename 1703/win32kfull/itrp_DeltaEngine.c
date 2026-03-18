/*
 * XREFs of itrp_DeltaEngine @ 0x1C02D0D3C
 * Callers:
 *     itrp_DELTAC1 @ 0x1C02D0A70 (itrp_DELTAC1.c)
 *     itrp_DELTAC2 @ 0x1C02D0AA0 (itrp_DELTAC2.c)
 *     itrp_DELTAC3 @ 0x1C02D0AD0 (itrp_DELTAC3.c)
 *     itrp_DELTAP1 @ 0x1C02D0B00 (itrp_DELTAP1.c)
 *     itrp_DELTAP2 @ 0x1C02D0B30 (itrp_DELTAP2.c)
 *     itrp_DELTAP3 @ 0x1C02D0B60 (itrp_DELTAP3.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02CF604 (InvokeMovePoint.c)
 *     itrp_GetCVTScale @ 0x1C02D2650 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_DeltaEngine(__int64 a1, int a2, __int16 a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r14
  int v12; // esi
  int CVTScale; // eax
  int fixed; // eax
  unsigned int v15; // esi
  int v16; // esi
  int v17; // r9d
  signed int v18; // r8d
  int v19; // edx
  __int16 v20; // dx
  __int16 v21; // r8
  _QWORD *v22; // r10
  __int64 v23; // rbp
  char v24; // cl
  __int64 v25; // r12
  int v26; // r13d
  unsigned int v27; // r13d
  _WORD *v28; // r8
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // ax
  int v32; // r15d
  signed int v33; // edi
  int v34; // ebp
  __int16 v35; // ax
  __int64 v36; // rax
  __int16 v37; // cx
  bool v38; // zf
  __int16 v40; // [rsp+20h] [rbp-58h]
  __int16 v41; // [rsp+22h] [rbp-56h]
  char v42; // [rsp+24h] [rbp-54h]
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  __int64 v45; // [rsp+38h] [rbp-40h]

  v4 = qword_1C032CA00;
  v7 = a1;
  if ( (*(_QWORD *)(qword_1C032CA00 + 424) ^ qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2
    && (v8 = (_DWORD *)(qword_1C032C9E8 - 4),
        qword_1C032C9E8 = (__int64)v8,
        v9 = *(_QWORD *)qword_1C032CA00,
        v10 = 2 * *v8,
        (*(_QWORD *)(qword_1C032CA00 + 424) ^ qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432))
    && (v45 = v10, v10 <= (unsigned __int64)(((__int64)v8 - v9) >> 2)) )
  {
    v11 = (__int64)&v8[-v10];
    qword_1C032C9E8 = v11;
    v12 = *(unsigned __int16 *)(qword_1C032CA00 + 24);
    if ( !*(_BYTE *)(qword_1C032CA00 + 340) )
    {
      CVTScale = itrp_GetCVTScale(v8, v9, v10, v7);
      fixed = FixMul(v12, CVTScale);
      v7 = a1;
      v12 = fixed;
      v4 = qword_1C032CA00;
      v11 = qword_1C032C9E8;
    }
    v15 = v12 - a3;
    if ( v15 > 0xF )
    {
      return v7;
    }
    else
    {
      v16 = 16 * v15;
      v17 = 0;
      v18 = (v10 >> 1) & 0xFFFFFFFE;
      while ( v18 > 2 )
      {
        v19 = v17 + v18;
        v18 = (v18 >> 1) & 0xFFFFFFFE;
        if ( (int)(*(_DWORD *)(v11 + 4LL * v19) & 0xFFFFFFF0) >= v16 )
          v19 = v17;
        v17 = v19;
      }
      if ( v17 < v10 )
      {
        v20 = HIWORD(dword_1C032C9D8);
        v21 = dword_1C032C9D8;
        v22 = (_QWORD *)LocalGS;
        v23 = v17;
        v24 = a4;
        v42 = a4;
        v43 = v17;
        v25 = 4LL * v17 + 4;
        v40 = HIWORD(dword_1C032C9D8);
        v41 = dword_1C032C9D8;
        v44 = LocalGS;
        while ( 1 )
        {
          v26 = *(_DWORD *)(v25 + v11 - 4);
          if ( (v26 & 0xFFFFFFF0) == v16 )
            break;
          if ( (int)(v26 & 0xFFFFFFF0) > v16 )
            return a1;
LABEL_56:
          v23 += 2LL;
          v25 += 8LL;
          v43 = v23;
          if ( v23 >= v45 )
            return a1;
        }
        v27 = ((v26 & 0xF) - (((v26 & 0xFu) < 8) + 7)) << 6 >> v24;
        if ( a2 == dword_1C032CA2C )
        {
          v28 = *(_WORD **)(v4 + 344);
          v29 = v28[4];
          v30 = v28[6];
          v31 = v30;
          if ( v29 > v30 )
            v31 = v28[4];
          if ( v31 <= 1u )
          {
            v32 = 1;
          }
          else
          {
            if ( v29 > v30 )
              v30 = v28[4];
            v32 = v30;
          }
          v33 = *(_DWORD *)(v25 + v11);
          if ( (_QWORD *)qword_1C032C9F8 == v22 )
          {
            if ( v33 >= (unsigned __int16)v28[8] || v33 < 0 )
              goto LABEL_60;
            v34 = 0;
          }
          else
          {
            if ( v33 >= *(_DWORD *)(v4 + 440) || v33 < 0 )
            {
LABEL_60:
              dword_1C032CA50 = 4370;
              return qword_1C032CA58;
            }
            v34 = 4;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, (__int64)v22) )
            goto LABEL_60;
          v22 = (_QWORD *)v44;
          v35 = *(_WORD *)(v44 + 80);
          if ( v35 >= 1 && v35 <= v32 && v33 >= *(__int16 *)(*(_QWORD *)(v44 + 64) + 2LL * (v35 - 1)) + v34 + 1 )
            goto LABEL_60;
          v23 = v43;
          v20 = v40;
          v21 = v41;
        }
        else
        {
          v36 = *(unsigned __int16 *)(v4 + 360);
          v33 = *(_DWORD *)(v25 + v11);
          if ( v33 >= (int)v36
            || v33 < 0
            || (v4 ^ MEMORY[0xFFFFF78000000330] ^ v36 ^ *(_QWORD *)(v4 + 16)) != *(_QWORD *)(v4 + 368) )
          {
            dword_1C032CA50 = 4379;
            return qword_1C032CA58;
          }
        }
        if ( a2 == dword_1C032CA44 )
          goto LABEL_54;
        v37 = *(_WORD *)(v4 + 452);
        if ( (v37 & 1) == 0 || (*(_BYTE *)(v4 + 120) & 4) != 0 )
          goto LABEL_54;
        if ( (~(_BYTE)v37 & 4) != 0 )
        {
          if ( v20 != 0x4000 || v21 )
            goto LABEL_55;
          if ( *(_BYTE *)(v4 + 341) )
            goto LABEL_54;
          if ( (*(_BYTE *)(*(__int16 *)(v25 + v11) + v22[9]) & 2) == 0 )
            goto LABEL_55;
          v38 = (*(_BYTE *)(v4 + 454) & 2) == 0;
        }
        else
        {
          if ( v21 != 0x4000 || v20 )
            goto LABEL_55;
          if ( *(_BYTE *)(v4 + 341) )
            goto LABEL_54;
          if ( (*(_BYTE *)(*(__int16 *)(v25 + v11) + v22[9]) & 1) == 0 )
            goto LABEL_55;
          v38 = (*(_BYTE *)(v4 + 454) & 1) == 0;
        }
        if ( v38 )
        {
LABEL_54:
          InvokeMovePoint(a2, v22, v33, v27);
          v20 = HIWORD(dword_1C032C9D8);
          v21 = dword_1C032C9D8;
          v22 = (_QWORD *)LocalGS;
          v4 = qword_1C032CA00;
          v11 = qword_1C032C9E8;
          v40 = HIWORD(dword_1C032C9D8);
          v41 = dword_1C032C9D8;
          v44 = LocalGS;
        }
LABEL_55:
        v24 = v42;
        goto LABEL_56;
      }
      return a1;
    }
  }
  else
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
}
