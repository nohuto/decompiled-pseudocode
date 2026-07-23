/*
 * XREFs of sub_180093ED0 @ 0x180093ED0
 * Callers:
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 * Callees:
 *     sub_18008AC1C @ 0x18008AC1C (sub_18008AC1C.c)
 *     sub_18008AD20 @ 0x18008AD20 (sub_18008AD20.c)
 *     sub_18008AEA0 @ 0x18008AEA0 (sub_18008AEA0.c)
 */

char __fastcall sub_180093ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _RTL_SRWLOCK *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  int v24; // eax
  bool v25; // zf
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  int v29; // eax
  _BYTE *Ptr; // rdx
  int v31; // eax
  unsigned __int16 v32; // ax
  char v33; // al
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // r11
  char v39; // al
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  char v42; // cl
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int16 v45; // ax
  int v46; // eax
  char v47; // cl
  unsigned __int64 v48; // rcx
  unsigned __int16 v49; // ax
  int v50; // eax
  char v51; // al
  _BYTE *v52; // rdx
  unsigned __int8 v53; // r8
  _DWORD *v54; // rcx
  int v55; // eax
  unsigned __int16 v56; // ax
  int v57; // [rsp+28h] [rbp-20h]
  int v58; // [rsp+28h] [rbp-20h]
  int v59; // [rsp+28h] [rbp-20h]
  int v60; // [rsp+28h] [rbp-20h]
  int v61; // [rsp+28h] [rbp-20h]
  int v62; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v5 = *(_RTL_SRWLOCK **)(a1 + 376);
  else
    v5 = 0LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)a2;
  if ( *(_WORD *)(a2 + 18) )
  {
    v6 -= 16LL;
    _m_prefetchw((const void *)v6);
    if ( *(_BYTE *)(v6 + 15) != 5 )
      goto LABEL_22;
    v16 = 16LL * *(unsigned __int8 *)(v6 + 14);
  }
  else
  {
    v16 = *(unsigned __int8 *)(a2 + 16);
  }
  v6 -= v16;
LABEL_22:
  if ( *(char *)(v6 + 15) >= 0 )
  {
    Ptr = v5[3].Ptr;
    if ( ((*(_BYTE *)(v6 + 10) ^ (unsigned __int8)(Ptr[138] & (*((_DWORD *)Ptr + 31) >> 20))) & 1) == 0 )
      goto LABEL_11;
    if ( *((_DWORD *)Ptr + 31) )
    {
      v31 = *(_DWORD *)(v6 + 8);
      LOWORD(v59) = v31;
      if ( (v31 & *((_DWORD *)Ptr + 31)) != 0 )
        v59 = *((_DWORD *)Ptr + 34) ^ v31;
      v32 = v59;
    }
    else
    {
      v32 = *(_WORD *)(v6 + 8);
    }
    if ( v32 <= 4u )
      goto LABEL_11;
    v14 = *(unsigned __int64 **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 20LL) != -253701952 )
      goto LABEL_11;
    v15 = *v14;
    if ( !sub_18008AC1C(v5, *v14) )
      goto LABEL_11;
    v33 = *(_BYTE *)(v6 + 15);
    if ( (v33 & 0x40) != 0 )
    {
      v34 = v33 & 0x3F;
    }
    else
    {
      if ( v33 != 4 )
      {
        v35 = v6;
LABEL_82:
        v36 = *(_QWORD *)(v15 + 8);
        if ( v36 == v35 + 16 )
        {
          v37 = sub_18008AD20(v15, v36);
          v39 = *(_BYTE *)(v37 + 15);
          if ( (v39 & 0x40) != 0 )
          {
            v40 = (unsigned __int8)(v38 & v39);
          }
          else
          {
            if ( v39 != 4 )
            {
              v41 = v37;
              goto LABEL_89;
            }
            v40 = *(unsigned __int8 *)(v37 + 14);
          }
          v41 = v37 + 16 * v40;
LABEL_89:
          *(_QWORD *)a2 = v41 + 16;
          if ( (v38 & *(_BYTE *)(v37 + 15)) != 0 )
          {
            *(_WORD *)(a2 + 18) = 1;
            v42 = *(_BYTE *)(v37 + 15);
            if ( v42 == 5 )
            {
              v43 = *(unsigned __int16 *)(v37 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v42 & 0x40) != 0 )
            {
              v43 = *(unsigned __int16 *)(16LL * (unsigned __int8)(v38 & v42) + v37 + 12);
            }
            else if ( (v38 & (unsigned __int8)v42) == v38 )
            {
              if ( v42 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v46 = *(_DWORD *)(v37 + 8);
                  LOWORD(v60) = v46;
                  if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
                    v60 = *(_DWORD *)(a1 + 136) ^ v46;
                  v45 = v60;
                }
                else
                {
                  v45 = *(_WORD *)(v37 + 8);
                }
              }
              else
              {
                if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v37 + 8) ^ (v37 >> 4)) )
                  v44 = 0LL;
                else
                  v44 = *(_QWORD *)(v37
                                  - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v37 + 8) ^ (unsigned int)(v37 >> 4)) >> 12));
                v45 = *(_WORD *)(v44 + 36);
              }
              v43 = *(_QWORD *)(16LL * v45 + v37);
            }
            else
            {
              v43 = (unsigned __int8)(v38 & v42);
            }
            v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
            *(_BYTE *)(a2 + 16) = v43;
            if ( v25 )
              *(_QWORD *)(a2 + 36) = v43;
            v47 = *(_BYTE *)(v37 + 15);
            if ( v47 == 5 )
            {
              v48 = *(unsigned __int16 *)(v37 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v47 & 0x40) != 0 )
            {
              v48 = *(unsigned __int16 *)(v37 + 16LL * (unsigned __int8)(v38 & v47) + 12);
            }
            else if ( (v38 & (unsigned __int8)v47) == v38 )
            {
              if ( v47 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  v50 = *(_DWORD *)(v37 + 8);
                  LOWORD(v61) = v50;
                  if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
                    v61 = *(_DWORD *)(a1 + 136) ^ v50;
                  v49 = v61;
                }
                else
                {
                  v49 = *(_WORD *)(v37 + 8);
                }
              }
              else
              {
                if ( !((unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v37 + 8) ^ (v37 >> 4))) )
                  v2 = *(_QWORD *)(v37
                                 - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v37 + 8) ^ (unsigned int)(v37 >> 4)) >> 12));
                v49 = *(_WORD *)(v2 + 36);
              }
              v48 = *(_QWORD *)(v37 + 16LL * v49);
            }
            else
            {
              v48 = (unsigned __int8)(v38 & v47);
            }
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v15 + 36) - v48;
          }
          else
          {
            *(_WORD *)(a2 + 18) = 0;
            *(_BYTE *)(a2 + 16) = 16;
            *(_QWORD *)(a2 + 36) = 16LL;
            *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v15 + 36) - 16;
          }
          v51 = *(_BYTE *)(v37 + 14);
          *(_WORD *)(a2 + 18) |= 0x8000u;
LABEL_136:
          *(_BYTE *)(a2 + 17) = v51;
          return 1;
        }
LABEL_11:
        if ( !sub_18008AC1C(v5, v6) && v5 != *(_RTL_SRWLOCK **)a2 )
        {
          v52 = v5[3].Ptr;
          v53 = *(_BYTE *)(v6 + 10);
          if ( ((v53 ^ (unsigned __int8)(v52[138] & (*((_DWORD *)v52 + 31) >> 20))) & 1) == 0
            || ((v53 ^ (unsigned __int8)(v52[138] & (*((_DWORD *)v52 + 31) >> 17))) & 8) == 0 )
          {
            return 0;
          }
        }
        *(_BYTE *)(a2 + 16) = 16;
        *(_WORD *)(a2 + 18) = 8193;
        *(_QWORD *)(a2 + 36) = 16LL;
        v54 = v5[3].Ptr;
        if ( v54[31] )
        {
          v55 = *(_DWORD *)(v6 + 8);
          LOWORD(v62) = v55;
          if ( (v55 & v54[31]) != 0 )
            v62 = v54[34] ^ v55;
          v56 = v62;
        }
        else
        {
          v56 = *(_WORD *)(v6 + 8);
        }
        *(_QWORD *)(a2 + 8) = 16LL * v56 - 16;
        v51 = *(_BYTE *)(v6 + 14);
        goto LABEL_136;
      }
      v34 = *(unsigned __int8 *)(v6 + 14);
    }
    v35 = v6 + 16 * v34;
    goto LABEL_82;
  }
  if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
    return 0;
  v8 = (unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12;
  v9 = *(_QWORD *)(v6 - v8);
  if ( !v9 )
    return 0;
  sub_18008AEA0(*(_QWORD *)(v6 - v8));
  sub_18008AD20(v10, *(_QWORD *)(v9 + 8));
  v11 = sub_18008AEA0(v9);
  if ( (v13 >> 4) / v11 >= *(unsigned __int16 *)(v9 + 40) )
  {
    *(_QWORD *)a2 = *(_QWORD *)(v9 + 8);
    *(_WORD *)(a2 + 18) = 8193;
    return 0;
  }
  v17 = *(_BYTE *)(v12 + 15);
  if ( (v17 & 0x3F) != 0 )
  {
    if ( (v17 & 0x40) != 0 )
    {
      v18 = v17 & 0x3F;
    }
    else
    {
      if ( v17 != 4 )
      {
        v19 = v12;
        goto LABEL_32;
      }
      v18 = *(unsigned __int8 *)(v12 + 14);
    }
    v19 = v12 + 16 * v18;
LABEL_32:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v19 + 16;
    v20 = *(_BYTE *)(v12 + 15);
    if ( v20 == 5 )
    {
      v21 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v20 & 0x40) != 0 )
    {
      v21 = *(unsigned __int16 *)(16LL * (v20 & 0x3F) + v12 + 12);
    }
    else if ( (v20 & 0x3F) == 0x3F )
    {
      if ( v20 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v12 + 8);
          LOWORD(v57) = v24;
          if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
            v57 = *(_DWORD *)(a1 + 136) ^ v24;
          v23 = v57;
        }
        else
        {
          v23 = *(_WORD *)(v12 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(v12
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
        v23 = *(_WORD *)(v22 + 36);
      }
      v21 = *(_QWORD *)(16LL * v23 + v12);
    }
    else
    {
      v21 = v20 & 0x3F;
    }
    v25 = (*(_BYTE *)(a2 + 18) & 2) == 0;
    *(_BYTE *)(a2 + 16) = v21;
    if ( v25 )
      *(_QWORD *)(a2 + 36) = v21;
    v26 = *(_BYTE *)(v12 + 15);
    if ( v26 == 5 )
    {
      v27 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v26 & 0x40) != 0 )
    {
      v27 = *(unsigned __int16 *)(v12 + 16LL * (v26 & 0x3F) + 12);
    }
    else if ( (v26 & 0x3F) == 0x3F )
    {
      if ( v26 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 = *(_DWORD *)(v12 + 8);
          LOWORD(v58) = v29;
          if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
            v58 = *(_DWORD *)(a1 + 136) ^ v29;
          v28 = v58;
        }
        else
        {
          v28 = *(_WORD *)(v12 + 8);
        }
      }
      else
      {
        if ( !((unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))) )
          v2 = *(_QWORD *)(v12
                         - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
        v28 = *(_WORD *)(v2 + 36);
      }
      v27 = *(_QWORD *)(v12 + 16LL * v28);
    }
    else
    {
      v27 = v26 & 0x3F;
    }
    *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v9 + 36) - v27;
    *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
    goto LABEL_69;
  }
  *(_WORD *)(a2 + 18) = 0;
  *(_QWORD *)a2 = v12 + 16;
  *(_BYTE *)(a2 + 16) = 16;
  *(_QWORD *)(a2 + 36) = 16LL;
  *(_QWORD *)(a2 + 8) = 16LL * *(unsigned __int16 *)(v9 + 36) - 16;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
LABEL_69:
  *(_WORD *)(a2 + 18) |= 0x8000u;
  return 1;
}
