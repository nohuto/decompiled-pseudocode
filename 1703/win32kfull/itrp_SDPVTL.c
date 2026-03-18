/*
 * XREFs of itrp_SDPVTL @ 0x1C02D8390
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02D09F8 (itrp_ComputeAndCheck_PF_Proj.c)
 *     itrp_Normalize @ 0x1C02D7070 (itrp_Normalize.c)
 */

__int64 __fastcall itrp_SDPVTL(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r12
  _WORD *v5; // r13
  __int64 v6; // rbp
  unsigned __int16 v7; // di
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int64 v11; // r15
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // edi
  __int64 v15; // r15
  int v16; // ebx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-58h]
  _QWORD *v25; // [rsp+28h] [rbp-50h]
  int v28; // [rsp+90h] [rbp+18h]
  int v29; // [rsp+98h] [rbp+20h]

  v2 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v3 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v4 = *(int *)(v3 - 4);
  qword_1C032C9E8 = v3 - 8;
  v5 = *(_WORD **)(qword_1C032CA00 + 344);
  v6 = *(int *)(v3 - 8);
  v7 = v5[4];
  v8 = v5[6];
  v9 = v8;
  if ( v7 > v8 )
    v9 = v5[4];
  if ( v9 <= 1u )
  {
    v28 = 1;
  }
  else
  {
    v10 = v5[6];
    if ( v7 > v8 )
      v10 = v5[4];
    v28 = v10;
  }
  v11 = qword_1C032C9D0;
  v24 = qword_1C032C9F8;
  v25 = (_QWORD *)qword_1C032C9D0;
  if ( qword_1C032C9F8 == qword_1C032C9D0 )
  {
    if ( (int)v4 >= (unsigned __int16)v5[8] || (int)v4 < 0 )
      goto LABEL_14;
    v29 = 0;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v4 < 0 )
      goto LABEL_14;
    v29 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0) )
  {
    v12 = *(_WORD *)(v11 + 80);
    if ( v12 < 1 || v12 > v28 || (int)v4 < *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * (v12 - 1)) + v29 + 1 )
    {
      v13 = v8;
      if ( v7 > v8 )
        v13 = v7;
      if ( v13 <= 1u )
      {
        v14 = 1;
      }
      else
      {
        if ( v7 > v8 )
          v8 = v7;
        v14 = v8;
      }
      v15 = qword_1C032C9C8;
      if ( v24 == qword_1C032C9C8 )
      {
        if ( (int)v6 < (unsigned __int16)v5[8] && (int)v6 >= 0 )
        {
          v16 = 0;
LABEL_36:
          if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
          {
            v17 = *(_WORD *)(v15 + 80);
            if ( v17 < 1 || v17 > v14 || (int)v6 < v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v17 - 1)) + 1 )
            {
              word_1C032CA76 = v4;
              word_1C032CA78 = v6;
              itrp_Normalize(
                *(_DWORD *)(*(_QWORD *)v15 + 4 * v6) - *(_DWORD *)(*v25 + 4 * v4),
                *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v6) - *(_DWORD *)(v25[1] + 4 * v4),
                (__int64)&dword_1C032C9D8);
              itrp_Normalize(
                *(_DWORD *)(*(_QWORD *)(qword_1C032C9C8 + 16) + 4 * v6)
              - *(_DWORD *)(*(_QWORD *)(qword_1C032C9D0 + 16) + 4 * v4),
                *(_DWORD *)(*(_QWORD *)(qword_1C032C9C8 + 24) + 4 * v6)
              - *(_DWORD *)(*(_QWORD *)(qword_1C032C9D0 + 24) + 4 * v4),
                (__int64)&dword_1C032C9E0);
              if ( (a2 & 1) != 0 )
              {
                v18 = -HIWORD(dword_1C032C9D8);
                HIWORD(dword_1C032C9D8) = dword_1C032C9D8;
                LOWORD(dword_1C032C9D8) = v18;
                v19 = -HIWORD(dword_1C032C9E0);
                HIWORD(dword_1C032C9E0) = dword_1C032C9E0;
                LOWORD(dword_1C032C9E0) = v19;
              }
              itrp_ComputeAndCheck_PF_Proj();
              dword_1C032CA2C = 1;
              dword_1C032CA30 = 1;
              v20 = *(_WORD *)(qword_1C032CA00 + 452);
              if ( (v20 & 1) == 0 )
                goto LABEL_52;
              if ( (~(_BYTE)v20 & 4) != 0 )
              {
                if ( HIWORD(dword_1C032C9D8) == 0x4000 )
                {
                  v21 = (_WORD)dword_1C032C9D8 == 0;
                  goto LABEL_48;
                }
              }
              else if ( (_WORD)dword_1C032C9D8 == 0x4000 )
              {
                v21 = HIWORD(dword_1C032C9D8) == 0;
LABEL_48:
                if ( !v21 )
                  goto LABEL_49;
LABEL_52:
                word_1C032CA74 = 0;
                goto LABEL_53;
              }
LABEL_49:
              word_1C032CA74 = 1;
              if ( (*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333) )
              {
                v22 = 8LL;
LABEL_54:
                *(_DWORD *)(qword_1C032CA00 + 128) = itrp_RoundFunctionId[v22
                                                                        + *(unsigned __int16 *)(qword_1C032CA00 + 132)];
                result = a1;
                dword_1C032CA34 = 2;
                word_1C032CA4C = 0;
                return result;
              }
LABEL_53:
              v22 = 0LL;
              goto LABEL_54;
            }
          }
        }
      }
      else if ( (int)v6 < *(_DWORD *)(v2 + 440) && (int)v6 >= 0 )
      {
        v16 = 4;
        goto LABEL_36;
      }
    }
  }
LABEL_14:
  dword_1C032CA50 = 4370;
  return qword_1C032CA58;
}
