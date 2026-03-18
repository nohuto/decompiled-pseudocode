/*
 * XREFs of PfTCreateTraceDump @ 0x14053B170
 * Callers:
 *     PfTGenerateTrace @ 0x14053B120 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PfTFreeBufferList @ 0x14053B87C (PfTFreeBufferList.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  int v3; // edi
  int v4; // r12d
  unsigned int i; // edx
  SIZE_T v6; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v8; // r13
  unsigned int v9; // ebx
  __int64 *v10; // r9
  unsigned int v11; // r15d
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // ebx
  _QWORD *v16; // rdx
  char *v17; // r11
  int v18; // r10d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // r9
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  _OWORD *v28; // rdx
  unsigned __int64 v29; // r9
  _OWORD *v30; // rdx
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v36; // rax
  unsigned __int16 v37; // cx
  __int16 v38; // r10
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // r8
  __int16 v42; // r10
  _QWORD *v43; // rax
  __int64 v44; // r10
  unsigned __int16 v45; // r11
  __int64 *v46; // rsi
  unsigned int v47; // r11d
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  char v51; // al
  __int64 *v52; // rax
  __int64 v53; // r9
  unsigned __int16 v54; // r8
  unsigned __int16 v55; // cx
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // edi
  int v62; // r12d
  unsigned int v63; // ebx
  _QWORD *v64; // rax
  unsigned int v65; // ecx
  unsigned int v66; // eax
  __int64 v67; // r10
  unsigned __int16 v68; // bx
  __int64 v69; // [rsp+20h] [rbp-A9h]
  __int64 v70; // [rsp+28h] [rbp-A1h] BYREF
  _OWORD *v71; // [rsp+30h] [rbp-99h]
  __int64 v72; // [rsp+38h] [rbp-91h]
  __int64 v73; // [rsp+40h] [rbp-89h]
  _OWORD *v74; // [rsp+48h] [rbp-81h]
  unsigned __int64 v75; // [rsp+50h] [rbp-79h]
  char *v76; // [rsp+58h] [rbp-71h]
  _QWORD *v77; // [rsp+60h] [rbp-69h]
  unsigned __int64 v78; // [rsp+68h] [rbp-61h]
  __int64 *v79; // [rsp+70h] [rbp-59h]
  unsigned __int64 v80; // [rsp+78h] [rbp-51h]
  _QWORD v81[12]; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int16 v83; // [rsp+138h] [rbp+6Fh]
  __int64 *v84; // [rsp+138h] [rbp+6Fh]
  __int16 v85; // [rsp+140h] [rbp+77h]
  int v86; // [rsp+148h] [rbp+7Fh]

  memset(v81, 0, sizeof(v81));
  v1 = qword_1403CD1D8;
  v2 = qword_1403CD1E0;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_1403CD1D8; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x74546650u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_33;
  }
  memset(PoolWithTag, 0, v6);
  v46 = &qword_1403CD1B0;
  v85 = *(_WORD *)(qword_1403CD1E0 + 36);
  do
  {
    v46 = (__int64 *)v46[1];
    v47 = 0;
    v84 = v46;
    if ( *((_DWORD *)v46 + 4) )
    {
      v48 = ((unsigned __int64)v46 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
      while ( 1 )
      {
        v49 = v48 + 16LL * v47;
        v50 = *(_QWORD *)v49;
        if ( ((unsigned __int8)*(_QWORD *)v49 & 3u) < 2 )
          break;
        v66 = ((unsigned int)v50 >> 2) & 0x3FF;
        v3 += v66;
        v47 = v66 + v47 - 1;
        if ( (v50 & 3) == 2 )
        {
          LODWORD(v50) = *(_DWORD *)(v49 + 16);
          v49 += 16LL;
LABEL_54:
          v69 = 0LL;
          v70 = 0LL;
          v71 = 0LL;
          v72 = 0LL;
          v73 = 0LL;
          v74 = 0LL;
          if ( (v50 & 3) != 0 )
          {
            v51 = *(_BYTE *)v49 & 0x18;
            LOWORD(v69) = -1;
            if ( v51 == 16 )
              LOWORD(v72) = *(_WORD *)(v49 + 10);
            else
              LOWORD(v72) = -1;
          }
          else
          {
            LOWORD(v72) = *(_WORD *)(v49 + 10);
            LOWORD(v69) = *(_WORD *)(v49 + 8);
          }
          v52 = &v70;
          v53 = 2LL;
          do
          {
            v54 = *((_WORD *)v52 - 4);
            if ( v54 != 0xFFFF )
            {
              v55 = *(_WORD *)(v2 + 36);
              if ( v54 < v55 || v54 >= (unsigned int)v55 + *(_DWORD *)(v2 + 32) )
              {
                v67 = v2;
                while ( 1 )
                {
                  v67 = *(_QWORD *)(v67 + 8);
                  if ( (__int64 *)v67 == &qword_1403CD1D8 )
                    v67 = qword_1403CD1E0;
                  if ( v67 == v2 )
                    break;
                  v68 = *(_WORD *)(v67 + 36);
                  if ( v54 >= v68 && v54 < *(_DWORD *)(v67 + 32) + (unsigned int)v68 )
                  {
                    v2 = v67;
                    v56 = 5LL * (v54 - v68);
                    v57 = v67 + 47;
                    goto LABEL_62;
                  }
                }
                v58 = 0LL;
              }
              else
              {
                v56 = 5LL * (v54 - v55);
                v57 = v2 + 47;
LABEL_62:
                v58 = (v57 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v56 + 8;
              }
              *v52 = v2;
              v52[1] = v58;
            }
            v52 += 3;
            --v53;
          }
          while ( v53 );
          v46 = v84;
          if ( v71 )
          {
            v59 = (unsigned __int16)(v69 - v85);
            if ( v8[v59] != 0xFFFF )
            {
              v8[v59] = -1;
              ++v4;
            }
          }
          if ( v74 )
          {
            v60 = (unsigned __int16)(v72 - v85);
            if ( v8[v60] != 0xFFFF )
            {
              v8[v60] = -1;
              ++v4;
            }
          }
        }
        if ( ++v47 >= *((_DWORD *)v46 + 4) )
          goto LABEL_72;
      }
      ++v3;
      goto LABEL_54;
    }
LABEL_72:
    ;
  }
  while ( v46 != (__int64 *)qword_1403CD1B0 );
  if ( v3 )
  {
    v61 = 16 * v3;
    v62 = 32 * v4;
    v63 = v62 + ((v61 + 63) & 0xFFFFFFF8);
    v64 = ExAllocatePoolWithTag(PagedPool, v63, 0x44546650u);
    v77 = v64;
    if ( v64 )
    {
      v17 = (char *)(v64 + 4);
      v64[2] = 0LL;
      v10 = &qword_1403CD1B0;
      v64[3] = 0LL;
      v64[4] = 0LL;
      v64[5] = 0LL;
      v64[6] = 0LL;
      *((_DWORD *)v64 + 6) = v63 - 16;
      *((_DWORD *)v64 + 4) = 852013;
      v65 = v61 + 24 + v62;
      v33 = (unsigned __int64)v64 + (unsigned int)(v61 + 24) + 32;
      *((_DWORD *)v64 + 5) = 1128485697;
      v18 = 0;
      *((_DWORD *)v64 + 7) = 0;
      *((_DWORD *)v64 + 10) = v61 + 24;
      v76 = (char *)(v64 + 4);
      v78 = (unsigned __int64)v64 + v65 + 32;
      v81[9] = v78;
      *((_DWORD *)v64 + 8) = 24;
      *((_DWORD *)v64 + 12) = v65;
      v75 = v33;
      v86 = 0;
      v83 = 0;
      do
      {
        v10 = (__int64 *)v10[1];
        v11 = 0;
        v79 = v10;
        if ( *((_DWORD *)v10 + 4) )
        {
          v12 = ((unsigned __int64)v10 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v80 = v12;
          do
          {
            v13 = (_QWORD *)(v12 + 16LL * v11);
            v14 = (__int64)&v17[16 * v18 + 24];
            if ( ((unsigned __int8)*v13 & 3u) >= 2 )
            {
              v15 = ((unsigned int)*v13 >> 2) & 0x3FF;
              v11 = v15 + v11 - 1;
            }
            else
            {
              v15 = 1;
            }
            if ( v14 + (unsigned __int64)(16 * v15) > v33 )
              break;
            memmove(&v17[16 * v18 + 24], v13, 16 * v15);
            v16 = v13 + 2;
            v17 = v76;
            v18 = v15 + v86;
            v86 += v15;
            *((_DWORD *)v76 + 1) += v15;
            v19 = v14 + 16;
            if ( (*(_DWORD *)v13 & 3) != 2 )
            {
              v16 = v13;
              v19 = v14;
            }
            v20 = *v16;
            if ( ((unsigned __int8)*v16 & 3u) < 2 )
            {
              v69 = 0LL;
              v70 = 0LL;
              v71 = 0LL;
              v72 = 0LL;
              v73 = 0LL;
              v74 = 0LL;
              if ( (v20 & 3) != 0 )
              {
                LOWORD(v69) = -1;
                if ( (v20 & 0x18) == 0x10 )
                  LOWORD(v72) = *((_WORD *)v16 + 5);
                else
                  LOWORD(v72) = -1;
              }
              else
              {
                LOWORD(v72) = *((_WORD *)v16 + 5);
                LOWORD(v69) = *((_WORD *)v16 + 4);
              }
              v21 = &v70;
              v22 = 2LL;
              do
              {
                v23 = *((_WORD *)v21 - 4);
                if ( v23 != 0xFFFF )
                {
                  v24 = *(_WORD *)(v2 + 36);
                  if ( v23 < v24 || v23 >= (unsigned int)v24 + *(_DWORD *)(v2 + 32) )
                  {
                    v44 = v2;
                    while ( 1 )
                    {
                      v44 = *(_QWORD *)(v44 + 8);
                      if ( (__int64 *)v44 == &qword_1403CD1D8 )
                        v44 = qword_1403CD1E0;
                      if ( v44 == v2 )
                        break;
                      v45 = *(_WORD *)(v44 + 36);
                      if ( v23 >= v45 && v23 < *(_DWORD *)(v44 + 32) + (unsigned int)v45 )
                      {
                        v2 = v44;
                        v25 = 5LL * (v23 - v45);
                        v26 = v44 + 47;
                        goto LABEL_21;
                      }
                    }
                    v27 = 0LL;
                  }
                  else
                  {
                    v25 = 5LL * (v23 - v24);
                    v26 = v2 + 47;
LABEL_21:
                    v27 = (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v25 + 8;
                  }
                  *v21 = v2;
                  v21[1] = v27;
                }
                v21 += 3;
                --v22;
              }
              while ( v22 );
              v28 = v71;
              v29 = v75;
              if ( v71 )
              {
                v36 = (unsigned __int16)(v69 - v85);
                v37 = v8[v36];
                if ( v37 == 0xFFFF )
                {
                  v37 = v83;
                  v38 = v83 + 1;
                  v8[v36] = v83;
                  v39 = 32LL * v83++;
                  if ( v39 + v29 + 32 > v78 )
                  {
                    v83 = v38 - 1;
                  }
                  else
                  {
                    v40 = v77;
                    *(_OWORD *)(v39 + v29) = *v28;
                    *(_OWORD *)(v39 + v29 + 16) = v28[1];
                    ++*((_WORD *)v40 + 22);
                  }
                }
                *(_WORD *)(v19 + 8) = v37;
              }
              v30 = v74;
              if ( v74 )
              {
                v31 = (unsigned __int16)(v72 - v85);
                v32 = v8[v31];
                if ( v32 == 0xFFFF )
                {
                  v32 = v83;
                  v8[v31] = v83;
                  v41 = 32LL * v83;
                  v42 = ++v83;
                  if ( v29 + v41 + 32 > v78 )
                  {
                    v83 = v42 - 1;
                  }
                  else
                  {
                    v43 = v77;
                    *(_OWORD *)(v41 + v29) = *v30;
                    *(_OWORD *)(v41 + v29 + 16) = v30[1];
                    ++*((_WORD *)v43 + 22);
                  }
                }
                *(_WORD *)(v19 + 10) = v32;
              }
              v17 = v76;
              v18 = v86;
            }
            v10 = v79;
            ++v11;
            v33 = v75;
            v12 = v80;
          }
          while ( v11 < *((_DWORD *)v79 + 4) );
        }
      }
      while ( v10 != (__int64 *)qword_1403CD1B0 );
      v34 = LODWORD(v81[9]) - (_DWORD)v17 - *((_DWORD *)v17 + 4);
      *((_WORD *)v17 + 7) = HIWORD(v81[10]);
      v9 = 0;
      *((_DWORD *)v17 + 5) = v34;
      *a1 = v77;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -2147483622;
  }
  ExFreePoolWithTag(v8, 0);
LABEL_33:
  PfTFreeBufferList(&unk_1403CD198);
  PfTFreeBufferList(&unk_1403CD1C0);
  return v9;
}
