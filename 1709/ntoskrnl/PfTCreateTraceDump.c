/*
 * XREFs of PfTCreateTraceDump @ 0x140456970
 * Callers:
 *     PfTGenerateTrace @ 0x14045692C (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PfTFreeBufferList @ 0x140457068 (PfTFreeBufferList.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  unsigned int v3; // r14d
  int v4; // edi
  int v5; // r12d
  unsigned int i; // edx
  SIZE_T v7; // rbx
  PVOID PoolWithTag; // rax
  _WORD *v9; // r13
  __int64 *v10; // rsi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // r9
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edi
  int v24; // r12d
  unsigned int v25; // ebx
  _QWORD *v26; // rax
  char *v27; // r13
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdx
  int v30; // r12d
  __int64 *v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rax
  _WORD *v34; // rbx
  __int64 v35; // rsi
  int v36; // edi
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // r9
  unsigned __int16 v40; // r8
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  _OWORD *v45; // rdx
  _WORD *v46; // r10
  _OWORD *v47; // rdx
  __int64 v48; // rax
  unsigned __int16 v49; // cx
  int v50; // eax
  unsigned int v51; // ebx
  __int64 v53; // rax
  unsigned __int16 v54; // cx
  __int16 v55; // r11
  __int64 v56; // r8
  __int16 v57; // r11
  __int64 v58; // r8
  __int64 v59; // r10
  unsigned __int16 v60; // r11
  __int64 v61; // r10
  unsigned __int16 v62; // r11
  __int64 v63; // [rsp+20h] [rbp-A9h]
  __int64 v64; // [rsp+28h] [rbp-A1h] BYREF
  _OWORD *v65; // [rsp+30h] [rbp-99h]
  __int64 v66; // [rsp+38h] [rbp-91h]
  __int64 v67; // [rsp+40h] [rbp-89h]
  _OWORD *v68; // [rsp+48h] [rbp-81h]
  PVOID P; // [rsp+50h] [rbp-79h]
  unsigned __int64 v70; // [rsp+58h] [rbp-71h]
  char *v71; // [rsp+60h] [rbp-69h]
  __int64 *v72; // [rsp+68h] [rbp-61h]
  unsigned __int64 v73; // [rsp+70h] [rbp-59h]
  _QWORD *v74; // [rsp+78h] [rbp-51h]
  _QWORD v75[11]; // [rsp+88h] [rbp-41h] BYREF
  unsigned __int16 v77; // [rsp+138h] [rbp+6Fh]
  __int16 v78; // [rsp+140h] [rbp+77h]
  unsigned __int64 v79; // [rsp+148h] [rbp+7Fh]

  memset(v75, 0, sizeof(v75));
  v1 = qword_1403878D8;
  v2 = qword_1403878E0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_1403878D8; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v7 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x74546650u);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v51 = -1073741670;
    goto LABEL_63;
  }
  memset(PoolWithTag, 0, v7);
  v10 = &qword_1403878B0;
  v78 = *(_WORD *)(qword_1403878E0 + 36);
  do
  {
    v10 = (__int64 *)v10[1];
    v11 = 0;
    if ( !*((_DWORD *)v10 + 4) )
      continue;
    do
    {
      v12 = (((unsigned __int64)v10 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v11;
      if ( (*(_BYTE *)v12 & 3u) >= 2 )
      {
        v32 = (*(_DWORD *)v12 >> 2) & 0x3FF;
        v4 += v32;
        v11 = v32 + v11 - 1;
        if ( (*(_DWORD *)v12 & 3) != 2 )
          goto LABEL_25;
        v12 += 16LL;
      }
      else
      {
        ++v4;
      }
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      v13 = *(_DWORD *)v12;
      if ( (*(_DWORD *)v12 & 3) != 0 )
      {
        LOWORD(v63) = -1;
        if ( (v13 & 0x18) == 0x10 )
          LOWORD(v66) = *(_WORD *)(v12 + 10);
        else
          LOWORD(v66) = -1;
      }
      else
      {
        LOWORD(v66) = *(_WORD *)(v12 + 10);
        LOWORD(v63) = *(_WORD *)(v12 + 8);
      }
      v14 = &v64;
      v15 = 2LL;
      do
      {
        v16 = *((_WORD *)v14 - 4);
        if ( v16 != 0xFFFF )
        {
          v17 = *(_WORD *)(v2 + 36);
          if ( v16 < v17 || v16 >= (unsigned int)v17 + *(_DWORD *)(v2 + 32) )
          {
            v61 = v2;
            while ( 1 )
            {
              v61 = *(_QWORD *)(v61 + 8);
              if ( (__int64 *)v61 == &qword_1403878D8 )
                v61 = qword_1403878E0;
              if ( v61 == v2 )
                break;
              v62 = *(_WORD *)(v61 + 36);
              if ( v16 >= v62 && v16 < *(_DWORD *)(v61 + 32) + (unsigned int)v62 )
              {
                v2 = v61;
                v18 = 5LL * (v16 - v62);
                v19 = v61 + 47;
                goto LABEL_16;
              }
            }
            v20 = 0LL;
          }
          else
          {
            v18 = 5LL * (v16 - v17);
            v19 = v2 + 47;
LABEL_16:
            v20 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v18 + 8;
          }
          v14[1] = v20;
          *v14 = v2;
        }
        v14 += 3;
        --v15;
      }
      while ( v15 );
      v9 = P;
      if ( v65 )
      {
        v21 = (unsigned __int16)(v63 - v78);
        if ( *((_WORD *)P + v21) != 0xFFFF )
        {
          *((_WORD *)P + v21) = -1;
          ++v5;
        }
      }
      if ( v68 )
      {
        v22 = (unsigned __int16)(v66 - v78);
        if ( v9[v22] != 0xFFFF )
        {
          v9[v22] = -1;
          ++v5;
        }
      }
LABEL_25:
      ++v11;
    }
    while ( v11 < *((_DWORD *)v10 + 4) );
    v3 = 0;
  }
  while ( v10 != (__int64 *)qword_1403878B0 );
  if ( v4 )
  {
    v23 = 16 * v4;
    v24 = 32 * v5;
    v25 = v24 + ((v23 + 63) & 0xFFFFFFF8);
    v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x44546650u);
    v74 = v26;
    if ( v26 )
    {
      v77 = 0;
      v26[2] = 0LL;
      v27 = (char *)(v26 + 4);
      v26[3] = 0LL;
      v26[4] = 0LL;
      v26[5] = 0LL;
      v26[6] = 0LL;
      *((_DWORD *)v26 + 6) = v25 - 16;
      v28 = v23 + 24 + v24;
      *((_DWORD *)v26 + 4) = 852013;
      v29 = (unsigned __int64)v26 + (unsigned int)(v23 + 24) + 32;
      *((_DWORD *)v26 + 5) = 1128485697;
      v30 = 0;
      *((_DWORD *)v26 + 7) = 0;
      *((_DWORD *)v26 + 10) = v23 + 24;
      *((_DWORD *)v26 + 12) = v28;
      v70 = (unsigned __int64)v26 + v28 + 32;
      v31 = &qword_1403878B0;
      v75[8] = v70;
      v71 = (char *)(v26 + 4);
      *((_DWORD *)v26 + 8) = 24;
      v79 = v29;
      while ( 1 )
      {
        v31 = (__int64 *)v31[1];
        v72 = v31;
        if ( *((_DWORD *)v31 + 4) )
        {
          v33 = ((unsigned __int64)v31 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v73 = v33;
          do
          {
            v34 = (_WORD *)(v33 + 16LL * v3);
            v35 = (__int64)&v27[16 * v30 + 24];
            if ( (*(_BYTE *)v34 & 3u) >= 2 )
            {
              v36 = (*(_DWORD *)v34 >> 2) & 0x3FF;
              v3 = v36 + v3 - 1;
            }
            else
            {
              v36 = 1;
            }
            if ( v35 + (unsigned __int64)(unsigned int)(16 * v36) > v29 )
              break;
            memmove(&v27[16 * v30 + 24], v34, (unsigned int)(16 * v36));
            *((_DWORD *)v27 + 1) += v36;
            v30 += v36;
            if ( (*(_DWORD *)v34 & 3) == 2 )
            {
              v34 += 8;
              v35 += 16LL;
            }
            v37 = *(_QWORD *)v34;
            if ( ((unsigned __int8)*(_QWORD *)v34 & 3u) < 2 )
            {
              v63 = 0LL;
              v64 = 0LL;
              v65 = 0LL;
              v66 = 0LL;
              v67 = 0LL;
              v68 = 0LL;
              if ( (v37 & 3) != 0 )
              {
                LOWORD(v63) = -1;
                if ( (v37 & 0x18) == 0x10 )
                  LOWORD(v66) = v34[5];
                else
                  LOWORD(v66) = -1;
              }
              else
              {
                LOWORD(v66) = v34[5];
                LOWORD(v63) = v34[4];
              }
              v38 = &v64;
              v39 = 2LL;
              do
              {
                v40 = *((_WORD *)v38 - 4);
                if ( v40 != 0xFFFF )
                {
                  v41 = *(_WORD *)(v2 + 36);
                  if ( v40 < v41 || v40 >= (unsigned int)v41 + *(_DWORD *)(v2 + 32) )
                  {
                    v59 = v2;
                    while ( 1 )
                    {
                      v59 = *(_QWORD *)(v59 + 8);
                      if ( (__int64 *)v59 == &qword_1403878D8 )
                        v59 = qword_1403878E0;
                      if ( v59 == v2 )
                        break;
                      v60 = *(_WORD *)(v59 + 36);
                      if ( v40 >= v60 && v40 < *(_DWORD *)(v59 + 32) + (unsigned int)v60 )
                      {
                        v2 = v59;
                        v42 = 5LL * (v40 - v60);
                        v43 = v59 + 47;
                        goto LABEL_52;
                      }
                    }
                    v44 = 0LL;
                  }
                  else
                  {
                    v42 = 5LL * (v40 - v41);
                    v43 = v2 + 47;
LABEL_52:
                    v44 = (v43 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v42 + 8;
                  }
                  *v38 = v2;
                  v38[1] = v44;
                }
                v38 += 3;
                --v39;
              }
              while ( v39 );
              v45 = v65;
              v27 = v71;
              v46 = P;
              if ( v65 )
              {
                v53 = (unsigned __int16)(v63 - v78);
                v54 = *((_WORD *)P + v53);
                if ( v54 == 0xFFFF )
                {
                  v54 = v77;
                  v55 = v77 + 1;
                  *((_WORD *)P + v53) = v77;
                  v56 = 32LL * v77++;
                  if ( v56 + v79 + 32 > v70 )
                  {
                    v77 = v55 - 1;
                  }
                  else
                  {
                    *(_OWORD *)(v56 + v79) = *v45;
                    *(_OWORD *)(v56 + v79 + 16) = v45[1];
                    ++*((_WORD *)v27 + 6);
                  }
                }
                *(_WORD *)(v35 + 8) = v54;
              }
              v47 = v68;
              if ( v68 )
              {
                v48 = (unsigned __int16)(v66 - v78);
                v49 = v46[v48];
                if ( v49 == 0xFFFF )
                {
                  v49 = v77;
                  v57 = v77 + 1;
                  v46[v48] = v77;
                  v58 = 32LL * v77++;
                  if ( v79 + v58 + 32 > v70 )
                  {
                    v77 = v57 - 1;
                  }
                  else
                  {
                    *(_OWORD *)(v58 + v79) = *v47;
                    *(_OWORD *)(v58 + v79 + 16) = v47[1];
                    ++*((_WORD *)v27 + 6);
                  }
                }
                *(_WORD *)(v35 + 10) = v49;
              }
            }
            v31 = v72;
            ++v3;
            v29 = v79;
            v33 = v73;
          }
          while ( v3 < *((_DWORD *)v72 + 4) );
        }
        if ( v31 == (__int64 *)qword_1403878B0 )
          break;
        v3 = 0;
      }
      v50 = LODWORD(v75[8]) - *((_DWORD *)v27 + 4) - (_DWORD)v27;
      *((_WORD *)v27 + 7) = HIWORD(v75[9]);
      v51 = 0;
      *((_DWORD *)v27 + 5) = v50;
      v9 = P;
      *a1 = v74;
    }
    else
    {
      v51 = -1073741670;
    }
  }
  else
  {
    v51 = -2147483622;
  }
  ExFreePoolWithTag(v9, 0);
LABEL_63:
  PfTFreeBufferList(&unk_140387898);
  PfTFreeBufferList(&unk_1403878C0);
  return v51;
}
