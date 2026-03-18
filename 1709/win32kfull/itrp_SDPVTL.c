/*
 * XREFs of itrp_SDPVTL @ 0x1C02D2080
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02CA748 (itrp_ComputeAndCheck_PF_Proj.c)
 *     itrp_Normalize @ 0x1C02D0E30 (itrp_Normalize.c)
 */

__int64 __fastcall itrp_SDPVTL(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r12
  _WORD *v5; // r13
  __int64 v6; // r14
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int64 v11; // r15
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // ebp
  __int64 v15; // r15
  int v16; // ebx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  bool v21; // zf
  __int16 v22; // ax
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  _QWORD *v26; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v2 = qword_1C0327C90;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v3 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v4 = *(int *)(v3 - 4);
  qword_1C0327C78 = v3 - 8;
  v5 = *(_WORD **)(qword_1C0327C90 + 344);
  v6 = *(int *)(v3 - 8);
  v7 = v5[4];
  v8 = v5[6];
  v9 = v8;
  if ( v7 > v8 )
    v9 = v5[4];
  if ( v9 <= 1u )
  {
    v29 = 1;
  }
  else
  {
    v10 = v5[6];
    if ( v7 > v8 )
      v10 = v5[4];
    v29 = v10;
  }
  v11 = qword_1C0327C60;
  v25 = qword_1C0327C88;
  v26 = (_QWORD *)qword_1C0327C60;
  if ( qword_1C0327C88 == qword_1C0327C60 )
  {
    if ( (int)v4 >= (unsigned __int16)v5[8] || (int)v4 < 0 )
      goto LABEL_14;
    v30 = 1;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C0327C90 + 440) || (int)v4 < 0 )
      goto LABEL_14;
    v30 = 5;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C60) )
  {
    v12 = *(_WORD *)(v11 + 80);
    if ( v12 < 1 || v12 > v29 || (int)v4 < v30 + *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * (v12 - 1)) )
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
      v15 = qword_1C0327C58;
      if ( v25 == qword_1C0327C58 )
      {
        if ( (int)v6 < (unsigned __int16)v5[8] && (int)v6 >= 0 )
        {
          v16 = 1;
LABEL_36:
          if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327C58) )
          {
            v17 = *(_WORD *)(v15 + 80);
            if ( v17 < 1 || v17 > v14 || (int)v6 < v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v17 - 1)) )
            {
              word_1C0327D06 = v4;
              word_1C0327D08 = v6;
              itrp_Normalize(
                *(_DWORD *)(*(_QWORD *)v15 + 4 * v6) - *(_DWORD *)(*v26 + 4 * v4),
                *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v6) - *(_DWORD *)(v26[1] + 4 * v4),
                (__int64)&dword_1C0327C68);
              itrp_Normalize(
                *(_DWORD *)(*(_QWORD *)(qword_1C0327C58 + 16) + 4 * v6)
              - *(_DWORD *)(*(_QWORD *)(qword_1C0327C60 + 16) + 4 * v4),
                *(_DWORD *)(*(_QWORD *)(qword_1C0327C58 + 24) + 4 * v6)
              - *(_DWORD *)(*(_QWORD *)(qword_1C0327C60 + 24) + 4 * v4),
                (__int64)&dword_1C0327C70);
              if ( (a2 & 1) != 0 )
              {
                v18 = -HIWORD(dword_1C0327C68);
                HIWORD(dword_1C0327C68) = dword_1C0327C68;
                LOWORD(dword_1C0327C68) = v18;
                v19 = -HIWORD(dword_1C0327C70);
                HIWORD(dword_1C0327C70) = dword_1C0327C70;
                LOWORD(dword_1C0327C70) = v19;
              }
              itrp_ComputeAndCheck_PF_Proj();
              dword_1C0327CBC = 1;
              dword_1C0327CC0 = 1;
              v20 = *(_WORD *)(qword_1C0327C90 + 452);
              if ( (v20 & 1) == 0 )
                goto LABEL_54;
              if ( (v20 & 4) != 0 )
              {
                if ( (_WORD)dword_1C0327C68 == 0x4000 )
                {
                  v21 = HIWORD(dword_1C0327C68) == 0;
LABEL_48:
                  v22 = 0;
                  if ( v21 )
                    goto LABEL_50;
                }
              }
              else if ( HIWORD(dword_1C0327C68) == 0x4000 )
              {
                v21 = (_WORD)dword_1C0327C68 == 0;
                goto LABEL_48;
              }
              v22 = 1;
LABEL_50:
              if ( v22 )
              {
                word_1C0327D04 = 1;
                if ( (*(_BYTE *)(qword_1C0327C90 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0327C90 + 333) )
                {
                  v23 = 8LL;
LABEL_56:
                  *(_DWORD *)(qword_1C0327C90 + 128) = itrp_RoundFunctionId[v23
                                                                          + *(unsigned __int16 *)(qword_1C0327C90 + 132)];
                  result = a1;
                  dword_1C0327CC4 = 2;
                  word_1C0327CDC = 0;
                  return result;
                }
LABEL_55:
                v23 = 0LL;
                goto LABEL_56;
              }
LABEL_54:
              word_1C0327D04 = 0;
              goto LABEL_55;
            }
          }
        }
      }
      else if ( (int)v6 < *(_DWORD *)(v2 + 440) && (int)v6 >= 0 )
      {
        v16 = 5;
        goto LABEL_36;
      }
    }
  }
LABEL_14:
  dword_1C0327CE0 = 4370;
  return qword_1C0327CE8;
}
