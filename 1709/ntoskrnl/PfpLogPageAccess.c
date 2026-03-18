/*
 * XREFs of PfpLogPageAccess @ 0x140455990
 * Callers:
 *     PfpCopyEvent @ 0x140455440 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140455670 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x140456864 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  __int16 v6; // si
  int v10; // r15d
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  char v13; // r13
  __int64 v14; // r12
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  int v19; // ebp
  __int64 v20; // rdx
  int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int16 v26; // r13
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rbx
  char v29; // r15
  __int64 v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r11d
  __int64 v39; // rax
  __int64 v40; // r10
  unsigned int v41; // eax
  unsigned int v42; // r11d
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  unsigned __int64 v46; // rdx
  __int16 v47; // ax
  unsigned int v48; // r10d
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned int v53; // ecx
  unsigned int v54; // [rsp+20h] [rbp-48h]
  unsigned int v55; // [rsp+28h] [rbp-40h]
  unsigned __int64 v56; // [rsp+30h] [rbp-38h]
  __int16 v57; // [rsp+78h] [rbp+10h]
  unsigned int v58; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v6 = -1;
  v57 = -1;
  if ( (*a2 & 0x1FF) == 0 )
    goto LABEL_2;
  v26 = 0;
  v27 = *(_QWORD *)(a4 - 8LL * (*a2 & 0x1FF));
  v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = 0;
  while ( 1 )
  {
    v30 = qword_1403878D8;
    v31 = (qword_1403878D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v31 + 40LL * *(unsigned int *)(qword_1403878D8 + 16)) == v28 )
    {
      v32 = *(unsigned __int16 *)(qword_1403878D8 + 16);
    }
    else
    {
      v56 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
      v32 = (HIBYTE(v56)
           + 37
           * (BYTE6(v56)
            + 37
            * (BYTE5(v56)
             + 37
             * (BYTE4(v56)
              + 37 * (BYTE3(v56) + 37 * (BYTE2(v56) + 37 * (BYTE1(v56) + 37 * ((unsigned __int8)v28 + 11623883)))))))) & (unsigned int)(*(_DWORD *)(qword_1403878D8 + 32) - 1);
      v37 = *(_QWORD *)(v31 + 40 * v32);
      if ( v37 != v28 )
      {
        if ( v37 )
        {
          v40 = (unsigned int)(v32 + 1);
          v41 = 0;
          v42 = *(_DWORD *)(qword_1403878D8 + 32);
          v58 = 0;
          while ( (unsigned int)v40 >= v42 )
          {
LABEL_44:
            ++v41;
            v40 = 0LL;
            v58 = v41;
            v42 = (HIBYTE(v56)
                 + 37
                 * (BYTE6(v56)
                  + 37
                  * (BYTE5(v56)
                   + 37
                   * (BYTE4(v56)
                    + 37 * (BYTE3(v56) + 37 * (BYTE2(v56) + 37 * (BYTE1(v56) + 37 * ((unsigned __int8)v28 + 11623883)))))))) & (*(_DWORD *)(qword_1403878D8 + 32) - 1);
            if ( v41 >= 2 )
            {
              v26 = -1;
              goto LABEL_58;
            }
          }
          while ( 1 )
          {
            v43 = *(_QWORD *)(v31 + 40 * v40);
            if ( v43 == v28 )
            {
              *(_DWORD *)(qword_1403878D8 + 16) = v40;
              v32 = (unsigned __int16)v40;
              goto LABEL_22;
            }
            if ( !v43 )
              break;
            v40 = (unsigned int)(v40 + 1);
            if ( (unsigned int)v40 >= v42 )
            {
              v41 = v58;
              goto LABEL_44;
            }
          }
          *(_DWORD *)(qword_1403878D8 + 16) = v40;
          v26 = v40;
        }
        else
        {
          *(_DWORD *)(qword_1403878D8 + 16) = v32;
          v26 = v32;
        }
        goto LABEL_58;
      }
      *(_DWORD *)(qword_1403878D8 + 16) = v32;
    }
LABEL_22:
    if ( (_WORD)v32 != 0xFFFF )
      goto LABEL_23;
LABEL_58:
    v51 = *(_DWORD *)(v30 + 28);
    if ( v51 < 3 * (*(_DWORD *)(v30 + 32) >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403878C0, v32) == -1073741823 )
      return 0LL;
  }
  v29 = 1;
  *(_DWORD *)(v30 + 28) = v51 + 1;
  LOWORD(v32) = v26;
  *(_QWORD *)(v31 + 40LL * v26) = v28;
LABEL_23:
  if ( !v30 )
    return 0LL;
  v57 = v32 + *(_WORD *)(v30 + 36);
  if ( v29 )
  {
    v44 = (unsigned __int16)v32 + 4LL * (unsigned __int16)v32 + 1;
    v45 = *(_DWORD *)(v31 + 8 * v44);
    v46 = v31 + 8 * v44;
    v47 = *(_WORD *)(v46 + 8);
    *(_QWORD *)v46 = (16 * v27) | v45 & 8 | 4;
    *(_WORD *)(v46 + 8) = v47 & 0xFFF0 | (v27 >> 60);
  }
  v5 = 0LL;
LABEL_2:
  v10 = a5;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( !a1 )
        goto LABEL_12;
      v5 = 1LL;
      v19 = (a1 & 0x7FFFFFFF) - 1;
LABEL_13:
      v20 = qword_1403878B0;
      v21 = ((*a3 & 3) == 2) + 1;
      if ( (unsigned int)(v21 + *(_DWORD *)(qword_1403878B0 + 16)) > *(_DWORD *)(qword_1403878B0 + 20) )
      {
        while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140387898, v20) != -1073741823 )
        {
          v20 = qword_1403878B0;
          if ( (unsigned int)(v21 + *(_DWORD *)(qword_1403878B0 + 16)) <= *(_DWORD *)(qword_1403878B0 + 20) )
            goto LABEL_14;
        }
        return 0LL;
      }
      else
      {
LABEL_14:
        v22 = *(_DWORD *)(v20 + 16);
        *(_DWORD *)(v20 + 16) = v21 + v22;
        result = ((v20 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v22;
        if ( (*a3 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)a3;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        if ( (*a2 & 0x1FF) != 0 )
        {
          v33 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v33;
          v34 = ((unsigned __int8)v33 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v33;
          *(_QWORD *)result = v34;
          v35 = ((unsigned __int8)v34 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 8 ^ v34;
          *(_QWORD *)result = v35;
          v36 = v35 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a2 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v36;
          *(_WORD *)(result + 8) = v57;
        }
        else
        {
          v24 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v24;
          v25 = (8 * v5) | (((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v24) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v25;
          *(_QWORD *)result = *(_QWORD *)a2 ^ (*a2 ^ (unsigned int)v25) & 0xFFF;
          if ( v5 == 2 )
            *(_WORD *)(result + 10) = v6;
          else
            *(_DWORD *)(result + 8) = v19;
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
  LOWORD(v54) = 0;
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v13 = 0;
  v14 = 4 * (v12 & 3) + 16;
  while ( 2 )
  {
    v15 = qword_1403878D8;
    v16 = (qword_1403878D8 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v16 + 40LL * *(unsigned int *)(qword_1403878D8 + v14)) == v12 )
    {
      LOWORD(v17) = *(_WORD *)(qword_1403878D8 + v14);
      goto LABEL_8;
    }
    v38 = *(_DWORD *)(qword_1403878D8 + 32);
    v17 = (HIBYTE(v12)
         + 37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (v38 - 1);
    v39 = *(_QWORD *)(v16 + 40 * v17);
    if ( v39 == v12 )
    {
      *(_DWORD *)(qword_1403878D8 + v14) = v17;
LABEL_8:
      if ( (_WORD)v17 != 0xFFFF )
        goto LABEL_9;
      v17 = v54;
    }
    else
    {
      if ( v39 )
      {
        v48 = v17 + 1;
        v49 = 0;
        v10 = a5;
        v55 = 0;
        while ( v48 >= v38 )
        {
LABEL_54:
          ++v49;
          v48 = 0;
          v55 = v49;
          v38 = v17;
          if ( v49 >= 2 )
          {
            v17 = 0xFFFFLL;
            goto LABEL_67;
          }
        }
        while ( 1 )
        {
          v50 = *(_QWORD *)(v16 + 40LL * v48);
          if ( v50 == v12 )
          {
            *(_DWORD *)(qword_1403878D8 + v14) = v48;
            LOWORD(v17) = v48;
            goto LABEL_8;
          }
          if ( !v50 )
            break;
          if ( ++v48 >= v38 )
          {
            v49 = v55;
            goto LABEL_54;
          }
        }
        *(_DWORD *)(qword_1403878D8 + v14) = v48;
        v17 = (unsigned __int16)v48;
      }
      else
      {
        *(_DWORD *)(qword_1403878D8 + v14) = v17;
      }
LABEL_67:
      v54 = v17;
    }
    v53 = *(_DWORD *)(v15 + 28);
    if ( v53 >= 3 * (*(_DWORD *)(v15 + 32) >> 2) )
    {
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_1403878C0, v17) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  v13 = 1;
  *(_DWORD *)(v15 + 28) = v53 + 1;
  *(_QWORD *)(v16 + 40LL * (unsigned __int16)v17) = v12;
LABEL_9:
  if ( v15 )
  {
    v5 = 2LL;
    v6 = v17 + *(_WORD *)(v15 + 36);
    v18 = v16 + 40LL * (unsigned __int16)v17;
    if ( v13 || (*(_BYTE *)(v18 + 8) & 4) != 0 )
    {
      if ( v10 )
      {
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 5;
      }
      else
      {
        v52 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v18 + 8) = v52;
        *(_QWORD *)(v18 + 8) = v52 & 7 | (8 * (a1 ^ *(_QWORD *)(a1 + 776)));
        *(_DWORD *)(v18 + 28) = *(_DWORD *)(a1 + 1180);
        *(_DWORD *)(v18 + 24) = *(_DWORD *)(a1 + 736);
        *(_QWORD *)(v18 + 16) = a1;
      }
    }
LABEL_12:
    v19 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
