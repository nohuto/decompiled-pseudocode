/*
 * XREFs of itrp_MD @ 0x1C02D4EA0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02BDD44 (InvokeGlobalGSScale.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_MD(__int64 a1, char a2)
{
  __int64 v2; // r14
  _WORD *v3; // r13
  __int64 v4; // rdi
  int v5; // r12d
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // bp
  int v8; // ecx
  __int64 v9; // rsi
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // r15
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  __int64 v15; // rbx
  __int16 v16; // ax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  int v23; // edx
  unsigned __int16 v24; // ax
  __int64 v25; // r15
  __int16 v26; // ax
  unsigned __int16 v27; // ax
  int v28; // ebp
  __int64 v29; // rbx
  __int16 v30; // ax
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  int *v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]
  int v37; // [rsp+90h] [rbp+18h]
  int v38; // [rsp+90h] [rbp+18h]
  int v39; // [rsp+90h] [rbp+18h]
  int v40; // [rsp+98h] [rbp+20h]
  int v41; // [rsp+98h] [rbp+20h]

  v2 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2 )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v3 = *(_WORD **)(qword_1C032CA00 + 344);
  v4 = *(int *)(qword_1C032C9E8 - 4);
  v5 = 4;
  v35 = qword_1C032C9E8 - 4;
  v34 = (int *)(qword_1C032C9E8 - 8);
  v6 = v3[6];
  v7 = v3[4];
  v8 = 1;
  v9 = *(int *)(qword_1C032C9E8 - 8);
  v10 = v6;
  if ( ((a2 - 1) & 1) != 0 )
  {
    if ( v7 > v6 )
      v10 = v3[4];
    if ( v10 > 1u )
    {
      v11 = v3[6];
      if ( v7 > v6 )
        v11 = v3[4];
      v8 = v11;
    }
    v12 = LocalGS;
    v37 = v8;
    v32 = qword_1C032C9F8;
    if ( qword_1C032C9F8 == LocalGS )
    {
      if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
        goto LABEL_14;
      v40 = 0;
    }
    else
    {
      if ( (int)v4 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v4 < 0 )
        goto LABEL_14;
      v40 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    {
      v13 = *(_WORD *)(v12 + 80);
      if ( v13 < 1 || v13 > v37 || (int)v4 < *(__int16 *)(*(_QWORD *)(v12 + 64) + 2LL * (v13 - 1)) + v40 + 1 )
      {
        v14 = v6;
        if ( v7 > v6 )
          v14 = v7;
        if ( v14 <= 1u )
        {
          v38 = 1;
        }
        else
        {
          if ( v7 > v6 )
            v6 = v7;
          v38 = v6;
        }
        v15 = qword_1C032C9C8;
        if ( v32 == qword_1C032C9C8 )
        {
          if ( (int)v9 < (unsigned __int16)v3[8] && (int)v9 >= 0 )
          {
            v5 = 0;
            goto LABEL_35;
          }
        }
        else if ( (int)v9 < *(_DWORD *)(v2 + 440) && (int)v9 >= 0 )
        {
LABEL_35:
          if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
          {
            v16 = *(_WORD *)(v15 + 80);
            if ( v16 < 1 || v16 > v38 || (int)v9 < v5 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v16 - 1)) + 1 )
            {
              if ( v12 == v32 || v15 == v32 || *(_BYTE *)(v2 + 397) )
              {
                v22 = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v12 + 24) + 4 * v4);
                v21 = *(_DWORD *)(*(_QWORD *)(v15 + 16) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4 * v4);
              }
              else
              {
                v17 = *(_QWORD *)(v12 + 40);
                if ( *(_BYTE *)(v2 + 340) )
                {
                  v18 = InvokeProject(
                          dword_1C032CA34,
                          *(_DWORD *)(*(_QWORD *)(v15 + 32) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v12 + 32) + 4 * v4),
                          *(_DWORD *)(*(_QWORD *)(v15 + 40) + 4 * v9) - *(_DWORD *)(v17 + 4 * v4));
                  v19 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 192), (int *)(v2 + 296), v18);
LABEL_47:
                  v23 = v19;
LABEL_86:
                  *v34 = v23;
                  qword_1C032C9E8 = v35;
                  return a1;
                }
                v20 = InvokeGlobalGSScale(
                        *(_DWORD *)(v2 + 188),
                        (int *)(v2 + 280),
                        *(_DWORD *)(*(_QWORD *)(v15 + 40) + 4 * v9) - *(_DWORD *)(v17 + 4 * v4));
                v21 = InvokeGlobalGSScale(
                        *(_DWORD *)(v2 + 184),
                        (int *)(v2 + 264),
                        *(_DWORD *)(*(_QWORD *)(qword_1C032C9C8 + 32) + 4 * v9)
                      - *(_DWORD *)(*(_QWORD *)(LocalGS + 32) + 4 * v4));
                v22 = v20;
              }
              v19 = InvokeProject(dword_1C032CA34, v21, v22);
              goto LABEL_47;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v7 > v6 )
      v10 = v3[4];
    if ( v10 <= 1u )
    {
      v39 = 1;
    }
    else
    {
      v24 = v3[6];
      if ( v7 > v6 )
        v24 = v3[4];
      v39 = v24;
    }
    v25 = LocalGS;
    v33 = qword_1C032C9F8;
    if ( qword_1C032C9F8 == LocalGS )
    {
      if ( (int)v9 >= (unsigned __int16)v3[8] || (int)v9 < 0 )
        goto LABEL_14;
      v41 = 0;
    }
    else
    {
      if ( (int)v9 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v9 < 0 )
        goto LABEL_14;
      v41 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    {
      v26 = *(_WORD *)(v25 + 80);
      if ( v26 < 1 || v26 > v39 || (int)v9 < *(__int16 *)(*(_QWORD *)(v25 + 64) + 2LL * (v26 - 1)) + v41 + 1 )
      {
        v27 = v6;
        if ( v7 > v6 )
          v27 = v7;
        if ( v27 <= 1u )
        {
          v28 = 1;
        }
        else
        {
          if ( v7 > v6 )
            v6 = v7;
          v28 = v6;
        }
        v29 = qword_1C032C9C8;
        if ( v33 == qword_1C032C9C8 )
        {
          if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
            goto LABEL_14;
          v5 = 0;
        }
        else if ( (int)v4 >= *(_DWORD *)(v2 + 440) || (int)v4 < 0 )
        {
          goto LABEL_14;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9C8) )
        {
          v30 = *(_WORD *)(v29 + 80);
          if ( v30 < 1 || v30 > v28 || (int)v4 < v5 + *(__int16 *)(*(_QWORD *)(v29 + 64) + 2LL * (v30 - 1)) + 1 )
          {
            v23 = InvokeProject(
                    dword_1C032CA30,
                    *(_DWORD *)(*(_QWORD *)v25 + 4 * v9) - *(_DWORD *)(*(_QWORD *)v29 + 4 * v4),
                    *(_DWORD *)(*(_QWORD *)(v25 + 8) + 4 * v9) - *(_DWORD *)(*(_QWORD *)(v29 + 8) + 4 * v4));
            if ( (*(_BYTE *)(qword_1C032CA00 + 454) & 0xB) == 0xB && v23 == 64 )
              v23 = 65;
            goto LABEL_86;
          }
        }
      }
    }
  }
LABEL_14:
  dword_1C032CA50 = 4370;
  return qword_1C032CA58;
}
