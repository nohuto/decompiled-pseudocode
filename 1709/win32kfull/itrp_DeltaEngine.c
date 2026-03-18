/*
 * XREFs of itrp_DeltaEngine @ 0x1C02CAB5C
 * Callers:
 *     itrp_DELTAC1 @ 0x1C02CA830 (itrp_DELTAC1.c)
 *     itrp_DELTAC2 @ 0x1C02CA870 (itrp_DELTAC2.c)
 *     itrp_DELTAC3 @ 0x1C02CA8B0 (itrp_DELTAC3.c)
 *     itrp_DELTAP1 @ 0x1C02CA8F0 (itrp_DELTAP1.c)
 *     itrp_DELTAP2 @ 0x1C02CA930 (itrp_DELTAP2.c)
 *     itrp_DELTAP3 @ 0x1C02CA970 (itrp_DELTAP3.c)
 * Callees:
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_DeltaEngine(__int64 a1, int a2, __int16 a3, char a4)
{
  __int64 v6; // r8
  int v7; // r12d
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r14
  int v12; // edi
  int CVTScale; // eax
  int fixed; // eax
  unsigned int v15; // edi
  int v16; // edi
  int v17; // r10d
  signed int v18; // r9d
  int v19; // r8d
  __int64 v20; // rsi
  char v21; // cl
  __int64 i; // r15
  __int64 v23; // r13
  int v24; // r8d
  __int64 v25; // rbx
  unsigned int v26; // r8d
  _WORD *v27; // r8
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  __int64 v31; // rsi
  signed int v32; // ebp
  int v33; // r14d
  __int16 v34; // ax
  __int64 v35; // rax
  __int16 v36; // cx
  __int16 v37; // ax
  unsigned int v39; // [rsp+20h] [rbp-58h]
  char v40; // [rsp+24h] [rbp-54h]
  __int64 v41; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+30h] [rbp-48h]

  v6 = a1;
  if ( (*(_QWORD *)(qword_1C0327C90 + 424) ^ qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v7 = 1, (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)
    && (v8 = (_DWORD *)(qword_1C0327C78 - 4),
        qword_1C0327C78 = (__int64)v8,
        v9 = *(_QWORD *)qword_1C0327C90,
        v10 = 2 * *v8,
        (*(_QWORD *)(qword_1C0327C90 + 424) ^ qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432))
    && (v11 = v10, v42 = v10, v10 <= (unsigned __int64)(((__int64)v8 - v9) >> 2)) )
  {
    qword_1C0327C78 = (__int64)&v8[-v10];
    v12 = *(unsigned __int16 *)(qword_1C0327C90 + 24);
    if ( !*(_BYTE *)(qword_1C0327C90 + 340) )
    {
      CVTScale = itrp_GetCVTScale(v8, v9, v6);
      fixed = FixMul(v12, CVTScale);
      v6 = a1;
      v12 = fixed;
    }
    v15 = v12 - a3;
    if ( v15 > 0xF )
    {
      return v6;
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
        if ( (int)(*(_DWORD *)(qword_1C0327C78 + 4LL * v19) & 0xFFFFFFF0) >= v16 )
          v19 = v17;
        v17 = v19;
      }
      if ( v17 < v10 )
      {
        v20 = v17;
        v21 = a4;
        v40 = a4;
        v41 = v17;
        for ( i = 4LL * v17 + 4; ; i += 8LL )
        {
          v23 = qword_1C0327C78;
          v24 = *(_DWORD *)(i + qword_1C0327C78 - 4);
          if ( (v24 & 0xFFFFFFF0) == v16 )
            break;
          if ( (int)(v24 & 0xFFFFFFF0) > v16 )
            return a1;
LABEL_58:
          v20 += 2LL;
          v41 = v20;
          if ( v20 >= v11 )
            return a1;
        }
        v25 = qword_1C0327C90;
        v26 = ((v24 & 0xF) - (((v24 & 0xFu) < 8) + 7)) << 6 >> v21;
        v39 = v26;
        if ( a2 == dword_1C0327CBC )
        {
          v27 = *(_WORD **)(qword_1C0327C90 + 344);
          v28 = v27[4];
          v29 = v27[6];
          v30 = v29;
          if ( v28 > v29 )
            v30 = v27[4];
          if ( v30 > 1u )
          {
            if ( v28 > v29 )
              v29 = v27[4];
            v7 = v29;
          }
          v31 = LocalGS;
          v32 = *(_DWORD *)(i + qword_1C0327C78);
          if ( qword_1C0327C88 == LocalGS )
          {
            if ( v32 >= (unsigned __int16)v27[8] || v32 < 0 )
              goto LABEL_62;
            v33 = 1;
          }
          else
          {
            if ( v32 >= *(_DWORD *)(qword_1C0327C90 + 440) || v32 < 0 )
            {
LABEL_62:
              dword_1C0327CE0 = 4370;
              return qword_1C0327CE8;
            }
            v33 = 5;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
            goto LABEL_62;
          v34 = *(_WORD *)(v31 + 80);
          if ( v34 < 1 || v34 > v7 )
          {
            v7 = 1;
          }
          else
          {
            if ( *(_DWORD *)(i + v23) >= v33 + *(__int16 *)(*(_QWORD *)(v31 + 64) + 2LL * (v34 - 1)) )
              goto LABEL_62;
            v7 = 1;
          }
          v26 = v39;
          v20 = v41;
          v11 = v42;
        }
        else
        {
          v35 = *(unsigned __int16 *)(qword_1C0327C90 + 360);
          v32 = *(_DWORD *)(i + qword_1C0327C78);
          if ( v32 >= (int)v35
            || v32 < 0
            || (qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ v35 ^ *(_QWORD *)(qword_1C0327C90 + 16)) != *(_QWORD *)(qword_1C0327C90 + 368) )
          {
            dword_1C0327CE0 = 4379;
            return qword_1C0327CE8;
          }
        }
        if ( a2 == dword_1C0327CD4 )
          goto LABEL_56;
        v36 = *(_WORD *)(v25 + 452);
        if ( (v36 & 1) == 0 || (*(_BYTE *)(v25 + 120) & 4) != 0 )
          goto LABEL_56;
        if ( (v36 & 4) != 0 )
        {
          if ( dword_1C0327C68 == 0x4000
            && (*(_BYTE *)(v25 + 341)
             || (*(_BYTE *)(*(__int16 *)(i + v23) + *(_QWORD *)(LocalGS + 72)) & 1) != 0
             && (*(_BYTE *)(v25 + 454) & 1) == 0) )
          {
            goto LABEL_56;
          }
        }
        else if ( dword_1C0327C68 == 0x40000000
               && (*(_BYTE *)(v25 + 341)
                || (*(_BYTE *)(*(__int16 *)(i + v23) + *(_QWORD *)(LocalGS + 72)) & 2) != 0
                && (*(_BYTE *)(v25 + 454) & 2) == 0) )
        {
          v37 = 1;
          goto LABEL_55;
        }
        v37 = 0;
LABEL_55:
        if ( !v37 )
        {
LABEL_57:
          v21 = v40;
          goto LABEL_58;
        }
LABEL_56:
        InvokeMovePoint(a2, (_QWORD *)LocalGS, v32, v26);
        goto LABEL_57;
      }
      return a1;
    }
  }
  else
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
}
