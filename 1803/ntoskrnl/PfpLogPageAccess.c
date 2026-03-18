/*
 * XREFs of PfpLogPageAccess @ 0x140529920
 * Callers:
 *     PfpCopyEvent @ 0x1405293C0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140529600 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x140529F80 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  __int64 *v5; // r10
  __int16 v6; // bp
  _QWORD *v7; // rdi
  __int16 v9; // r13
  int v10; // r14d
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  char v13; // r12
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int64 result; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int16 v29; // r12
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rbx
  char v32; // r14
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  unsigned int v40; // r11d
  __int64 v41; // rax
  unsigned int v42; // r11d
  __int64 v43; // r10
  __int64 v44; // rax
  unsigned int v45; // r10d
  unsigned int v46; // r13d
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned int v56; // [rsp+24h] [rbp-44h]
  unsigned __int64 v57; // [rsp+28h] [rbp-40h]
  unsigned int v58; // [rsp+78h] [rbp+10h]

  v5 = a3;
  v6 = -1;
  v7 = (_QWORD *)a2;
  v9 = -1;
  if ( (*(_DWORD *)a2 & 0x1FF) == 0 )
    goto LABEL_2;
  v29 = 0;
  v30 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
  v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
  v32 = 0;
  while ( 1 )
  {
    v33 = qword_1403CD1D8;
    v34 = *(unsigned int *)(qword_1403CD1D8 + 16);
    v35 = (qword_1403CD1D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v35 + 40 * v34) != v31 )
    {
      v40 = *(_DWORD *)(qword_1403CD1D8 + 32);
      v57 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
      a2 = (HIBYTE(v57)
          + 37
          * (BYTE6(v57)
           + 37
           * (BYTE5(v57)
            + 37
            * (BYTE4(v57)
             + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v31 + 11623883)))))))) & (v40 - 1);
      v41 = *(_QWORD *)(v35 + 40 * a2);
      if ( v41 != v31 )
      {
        if ( v41 )
        {
          v45 = a2 + 1;
          v46 = 0;
          while ( v45 >= v40 )
          {
LABEL_43:
            ++v46;
            v45 = 0;
            v40 = a2;
            if ( v46 >= 2 )
            {
              v29 = -1;
              goto LABEL_57;
            }
          }
          while ( 1 )
          {
            v47 = *(_QWORD *)(v35 + 40LL * v45);
            if ( v47 == v31 )
            {
              *(_DWORD *)(qword_1403CD1D8 + 16) = v45;
              LOWORD(v34) = v45;
              goto LABEL_21;
            }
            if ( !v47 )
              break;
            if ( ++v45 >= v40 )
              goto LABEL_43;
          }
          *(_DWORD *)(qword_1403CD1D8 + 16) = v45;
          v29 = v45;
        }
        else
        {
          *(_DWORD *)(qword_1403CD1D8 + 16) = a2;
          v29 = (HIBYTE(v57)
               + 37
               * (BYTE6(v57)
                + 37
                * (BYTE5(v57)
                 + 37
                 * (BYTE4(v57)
                  + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v31 + 24011)))))))) & (v40 - 1);
        }
        goto LABEL_57;
      }
      *(_DWORD *)(qword_1403CD1D8 + 16) = a2;
      LOWORD(v34) = (HIBYTE(v57)
                   + 37
                   * (BYTE6(v57)
                    + 37
                    * (BYTE5(v57)
                     + 37
                     * (BYTE4(v57)
                      + 37 * (BYTE3(v57) + 37 * (BYTE2(v57) + 37 * (BYTE1(v57) + 37 * ((unsigned __int8)v31 + 24011)))))))) & (v40 - 1);
    }
LABEL_21:
    if ( (_WORD)v34 != 0xFFFF )
      goto LABEL_22;
LABEL_57:
    v53 = *(_DWORD *)(v33 + 28);
    if ( v53 < 3 * (*(_DWORD *)(v33 + 32) >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403CD1C0, a2) == -1073741823 )
      return 0LL;
  }
  v32 = 1;
  *(_DWORD *)(v33 + 28) = v53 + 1;
  *(_QWORD *)(v35 + 40LL * v29) = v31;
  LOWORD(v34) = v29;
LABEL_22:
  if ( !v33 )
    return 0LL;
  v5 = a3;
  v9 = v34 + *(_WORD *)(v33 + 36);
  if ( v32 )
  {
    v48 = v35 + 40LL * (unsigned __int16)v34;
    v49 = *(_WORD *)(v48 + 16);
    *(_QWORD *)(v48 + 8) = (16 * v30) | *(_DWORD *)(v48 + 8) & 8 | 4;
    *(_WORD *)(v48 + 16) = v49 & 0xFFF0 | (v30 >> 60);
  }
LABEL_2:
  v10 = a5;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( !a1 )
      {
        v18 = 0LL;
        goto LABEL_12;
      }
      v18 = 1LL;
      v20 = (a1 & 0x7FFFFFFF) - 1;
LABEL_13:
      v21 = qword_1403CD1B0;
      v22 = *v5;
      v23 = ((*v5 & 3) == 2) + 1;
      if ( (unsigned int)(v23 + *(_DWORD *)(qword_1403CD1B0 + 16)) > *(_DWORD *)(qword_1403CD1B0 + 20) )
      {
        while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403CD198, v21) != -1073741823 )
        {
          v21 = qword_1403CD1B0;
          if ( (unsigned int)(v23 + *(_DWORD *)(qword_1403CD1B0 + 16)) <= *(_DWORD *)(qword_1403CD1B0 + 20) )
          {
            v5 = a3;
            v22 = *a3;
            goto LABEL_14;
          }
        }
        return 0LL;
      }
      else
      {
LABEL_14:
        v24 = *(_DWORD *)(v21 + 16);
        *(_DWORD *)(v21 + 16) = v23 + v24;
        result = ((v21 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v24;
        if ( (v22 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)v5;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        v26 = *(_QWORD *)result;
        if ( (*(_DWORD *)v7 & 0x1FF) != 0 )
        {
          v36 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v36;
          v37 = ((unsigned __int8)v36 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 4 ^ v36;
          *(_QWORD *)result = v37;
          v38 = ((unsigned __int8)v37 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 8 ^ v37;
          *(_QWORD *)result = v38;
          v39 = v38 & 0xF | (16LL * (unsigned int)(*v7 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v39;
          *(_WORD *)(result + 8) = v9;
        }
        else
        {
          v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v27;
          v28 = (8 * v18) | (((unsigned __int8)v27 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v7 >> 7)) & 4 ^ v27) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v28;
          *(_QWORD *)result = *v7 ^ (*(_DWORD *)v7 ^ (unsigned int)v28) & 0xFFF;
          if ( v18 == 2 )
            *(_WORD *)(result + 10) = v6;
          else
            *(_DWORD *)(result + 8) = v20;
        }
      }
      return result;
    }
  }
  else if ( !a5 )
  {
    v11 = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_5;
  }
  v11 = a1;
LABEL_5:
  LOWORD(v58) = 0;
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v13 = 0;
  v14 = 4 * (v12 & 3) + 16;
  while ( 2 )
  {
    v15 = qword_1403CD1D8;
    v16 = *(unsigned int *)(qword_1403CD1D8 + v14);
    v17 = (qword_1403CD1D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v17 + 40 * v16) == v12 )
    {
LABEL_7:
      if ( (_WORD)v16 != 0xFFFF )
        goto LABEL_8;
      v50 = v58;
    }
    else
    {
      v42 = *(_DWORD *)(qword_1403CD1D8 + 32);
      v43 = (HIBYTE(v12)
           + 37
           * (BYTE6(v12)
            + 37
            * (BYTE5(v12)
             + 37
             * (BYTE4(v12)
              + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (v42 - 1);
      v44 = *(_QWORD *)(v17 + 40 * v43);
      if ( v44 == v12 )
      {
        *(_DWORD *)(qword_1403CD1D8 + v14) = v43;
        LOWORD(v16) = (HIBYTE(v12)
                     + 37
                     * (BYTE6(v12)
                      + 37
                      * (BYTE5(v12)
                       + 37
                       * (BYTE4(v12)
                        + 37
                        * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 24011)))))))) & (v42 - 1);
        goto LABEL_7;
      }
      if ( v44 )
      {
        v50 = (unsigned int)(v43 + 1);
        v51 = 0;
        v10 = a5;
        v56 = 0;
        while ( (unsigned int)v50 >= v42 )
        {
LABEL_53:
          ++v51;
          v50 = 0LL;
          v56 = v51;
          v42 = v43;
          if ( v51 >= 2 )
          {
            v50 = 0xFFFFLL;
            goto LABEL_66;
          }
        }
        while ( 1 )
        {
          v52 = *(_QWORD *)(v17 + 40 * v50);
          if ( v52 == v12 )
          {
            *(_DWORD *)(qword_1403CD1D8 + v14) = v50;
            LOWORD(v16) = v50;
            goto LABEL_7;
          }
          if ( !v52 )
            break;
          v50 = (unsigned int)(v50 + 1);
          if ( (unsigned int)v50 >= v42 )
          {
            v51 = v56;
            goto LABEL_53;
          }
        }
        *(_DWORD *)(qword_1403CD1D8 + v14) = v50;
      }
      else
      {
        *(_DWORD *)(qword_1403CD1D8 + v14) = v43;
        v50 = (unsigned __int16)((HIBYTE(v12)
                                + 37
                                * (BYTE6(v12)
                                 + 37
                                 * (BYTE5(v12)
                                  + 37
                                  * (BYTE4(v12)
                                   + 37
                                   * (BYTE3(v12)
                                    + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 24011)))))))) & (v42 - 1));
      }
LABEL_66:
      v58 = v50;
    }
    LODWORD(v16) = *(_DWORD *)(v15 + 28);
    if ( (unsigned int)v16 >= 3 * (*(_DWORD *)(v15 + 32) >> 2) )
    {
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403CD1C0, v50) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  v13 = 1;
  *(_DWORD *)(v15 + 28) = v16 + 1;
  *(_QWORD *)(v17 + 40LL * (unsigned __int16)v50) = v12;
  LOWORD(v16) = v50;
LABEL_8:
  if ( v15 )
  {
    v18 = 2LL;
    v6 = v16 + *(_WORD *)(v15 + 36);
    v19 = 5LL * (unsigned __int16)v16;
    if ( v13 || (*(_BYTE *)(v17 + 8 * v19 + 8) & 4) != 0 )
    {
      v54 = *(_QWORD *)(v17 + 8 * v19 + 8);
      v5 = a3;
      if ( v10 )
      {
        *(_QWORD *)(v17 + 8 * v19 + 8) = v54 & 0xFFFFFFFFFFFFFFF8uLL | 5;
      }
      else
      {
        v55 = v54 & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v17 + 8 * v19 + 8) = v55;
        *(_QWORD *)(v17 + 8 * v19 + 8) = v55 & 7 | (8 * (a1 ^ *(_QWORD *)(a1 + 776)));
        *(_DWORD *)(v17 + 8 * v19 + 28) = *(_DWORD *)(a1 + 1180);
        *(_DWORD *)(v17 + 8 * v19 + 24) = *(_DWORD *)(a1 + 736);
        *(_QWORD *)(v17 + 8 * v19 + 16) = a1;
      }
    }
    else
    {
      v5 = a3;
    }
LABEL_12:
    v20 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
