/*
 * XREFs of PfpLogPageAccess @ 0x140496930
 * Callers:
 *     PfpCopyEvent @ 0x140496400 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140496650 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1404972A0 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  __int16 v6; // si
  _QWORD *v8; // rdi
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
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // r15
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  unsigned int v37; // r11d
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // r11d
  __int64 v41; // rax
  unsigned int v42; // r10d
  unsigned int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int16 v48; // r9
  unsigned __int16 v49; // r9
  __int16 v50; // [rsp+20h] [rbp-48h]
  unsigned int v51; // [rsp+20h] [rbp-48h]
  unsigned int v52; // [rsp+28h] [rbp-40h]
  unsigned __int64 v53; // [rsp+30h] [rbp-38h]
  __int16 v54; // [rsp+78h] [rbp+10h]
  __int16 v55; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v6 = -1;
  v54 = -1;
  v8 = (_QWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x1FF) == 0 )
    goto LABEL_2;
  v55 = 0;
  v30 = 0;
  v31 = *(_QWORD *)(a4 - 8LL * (*(_DWORD *)a2 & 0x1FF));
  v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
  v53 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
  while ( 1 )
  {
    v33 = qword_14036D958;
    v34 = (qword_14036D958 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v34 + 40LL * *(unsigned int *)(qword_14036D958 + 16)) == v32 )
    {
      LOWORD(v35) = *(_WORD *)(qword_14036D958 + 16);
    }
    else
    {
      a2 = BYTE6(v53)
         + 37
         * (BYTE5(v53)
          + 37
          * (BYTE4(v53)
           + 37 * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v32 + 11623883LL))))));
      v35 = (HIBYTE(v53) + 37 * (_DWORD)a2) & (unsigned int)(*(_DWORD *)(qword_14036D958 + 32) - 1);
      v36 = *(_QWORD *)(v34 + 40 * v35);
      if ( v36 != v32 )
      {
        if ( v36 )
        {
          a2 = (unsigned int)(v35 + 1);
          v39 = 0;
          v40 = *(_DWORD *)(qword_14036D958 + 32);
          v51 = 0;
          while ( (unsigned int)a2 >= v40 )
          {
LABEL_44:
            ++v39;
            a2 = 0LL;
            v51 = v39;
            v40 = v35;
            if ( v39 >= 2 )
            {
              v48 = -1;
              v55 = -1;
              goto LABEL_58;
            }
          }
          while ( 1 )
          {
            v41 = *(_QWORD *)(v34 + 40 * a2);
            if ( v41 == v32 )
            {
              *(_DWORD *)(qword_14036D958 + 16) = a2;
              LOWORD(v35) = a2;
              goto LABEL_23;
            }
            if ( !v41 )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v40 )
            {
              v39 = v51;
              goto LABEL_44;
            }
          }
          v48 = a2;
          *(_DWORD *)(qword_14036D958 + 16) = a2;
          v55 = a2;
        }
        else
        {
          v48 = (HIBYTE(v53) + 37 * a2) & (*(_WORD *)(qword_14036D958 + 32) - 1);
          *(_DWORD *)(qword_14036D958 + 16) = v35;
          v55 = v35;
        }
        goto LABEL_58;
      }
      *(_DWORD *)(qword_14036D958 + 16) = v35;
    }
LABEL_23:
    if ( (_WORD)v35 != 0xFFFF )
      goto LABEL_24;
    v48 = v55;
LABEL_58:
    if ( *(_DWORD *)(v33 + 28) < (unsigned int)(3 * (*(_DWORD *)(v33 + 32) >> 2)) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14036D940, a2) == -1073741823 )
      return 0LL;
  }
  ++*(_DWORD *)(v33 + 28);
  v30 = 1;
  LOWORD(v35) = v48;
  *(_QWORD *)(((v33 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v48) = v32;
LABEL_24:
  if ( !v33 )
    return 0LL;
  v54 = v35 + *(_WORD *)(v33 + 36);
  if ( v30 )
  {
    v45 = ((v33 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v35;
    v46 = (16 * v31) | *(_DWORD *)(v45 + 8) & 8 | 4;
    *(_WORD *)(v45 + 16) ^= (*(_WORD *)(v45 + 16) ^ (v31 >> 60)) & 0xF;
    *(_QWORD *)(v45 + 8) = v46;
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
      v20 = qword_14036D930;
      v21 = ((*a3 & 3) == 2) + 1;
      if ( (unsigned int)(v21 + *(_DWORD *)(qword_14036D930 + 16)) > *(_DWORD *)(qword_14036D930 + 20) )
      {
        while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14036D918, v20) != -1073741823 )
        {
          v20 = qword_14036D930;
          if ( (unsigned int)(v21 + *(_DWORD *)(qword_14036D930 + 16)) <= *(_DWORD *)(qword_14036D930 + 20) )
            goto LABEL_14;
        }
        return 0LL;
      }
      else
      {
LABEL_14:
        v22 = *(_DWORD *)(v20 + 16);
        *(_DWORD *)(v20 + 16) = v22 + v21;
        result = ((v20 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v22;
        if ( (*a3 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)a3;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        if ( (*(_DWORD *)v8 & 0x1FF) != 0 )
        {
          v26 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v26;
          v27 = ((unsigned __int8)v26 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v26;
          *(_QWORD *)result = v27;
          v28 = ((unsigned __int8)v27 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 8 ^ v27;
          *(_QWORD *)result = v28;
          v29 = v28 & 0xF | (16LL * (unsigned int)(*v8 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v29;
          *(_WORD *)(result + 8) = v54;
        }
        else
        {
          v24 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v24;
          v25 = (8 * v5) | (((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)v8 >> 7)) & 4 ^ v24) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v25;
          *(_QWORD *)result = *v8 ^ (*(_DWORD *)v8 ^ (unsigned int)v25) & 0xFFF;
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
  v50 = 0;
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v13 = 0;
  v14 = 4 * (v12 & 3) + 16;
  while ( 2 )
  {
    v15 = qword_14036D958;
    v16 = (qword_14036D958 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v16 + 40LL * *(unsigned int *)(v14 + qword_14036D958)) == v12 )
    {
      v17 = *(unsigned __int16 *)(v14 + qword_14036D958);
      goto LABEL_8;
    }
    v37 = *(_DWORD *)(qword_14036D958 + 32);
    v17 = (HIBYTE(v12)
         + 37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (v37 - 1);
    v38 = *(_QWORD *)(v16 + 40 * v17);
    if ( v38 == v12 )
    {
      *(_DWORD *)(v14 + qword_14036D958) = v17;
LABEL_8:
      if ( (_WORD)v17 != 0xFFFF )
        goto LABEL_9;
      v49 = v50;
    }
    else if ( v38 )
    {
      v42 = v17 + 1;
      v43 = 0;
      v10 = a5;
      v52 = 0;
      while ( v42 >= v37 )
      {
LABEL_54:
        ++v43;
        v42 = 0;
        v52 = v43;
        v37 = v17;
        if ( v43 >= 2 )
        {
          v49 = -1;
          v50 = -1;
          goto LABEL_67;
        }
      }
      while ( 1 )
      {
        v44 = *(_QWORD *)(v16 + 40LL * v42);
        if ( v44 == v12 )
        {
          *(_DWORD *)(v14 + qword_14036D958) = v42;
          v17 = (unsigned __int16)v42;
          goto LABEL_8;
        }
        if ( !v44 )
          break;
        if ( ++v42 >= v37 )
        {
          v43 = v52;
          goto LABEL_54;
        }
      }
      v49 = v42;
      *(_DWORD *)(v14 + qword_14036D958) = v42;
      v50 = v42;
    }
    else
    {
      v49 = (HIBYTE(v12)
           + 37
           * (BYTE6(v12)
            + 37
            * (BYTE5(v12)
             + 37
             * (BYTE4(v12)
              + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 24011)))))))) & (v37 - 1);
      *(_DWORD *)(v14 + qword_14036D958) = v17;
      v50 = v49;
    }
LABEL_67:
    if ( *(_DWORD *)(v15 + 28) >= (unsigned int)(3 * (*(_DWORD *)(v15 + 32) >> 2)) )
    {
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_14036D940, v17) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  ++*(_DWORD *)(v15 + 28);
  v13 = 1;
  *(_QWORD *)(((v15 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * v49) = v12;
  LOWORD(v17) = v49;
LABEL_9:
  if ( v15 )
  {
    v5 = 2LL;
    v6 = v17 + *(_WORD *)(v15 + 36);
    v18 = ((v15 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40LL * (unsigned __int16)v17;
    if ( v13 || (*(_BYTE *)(v18 + 8) & 4) != 0 )
    {
      if ( v10 )
      {
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 5;
      }
      else
      {
        v47 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v18 + 8) = v47;
        *(_QWORD *)(v18 + 8) = v47 & 7 | (8 * (a1 ^ *(_QWORD *)(a1 + 776)));
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
