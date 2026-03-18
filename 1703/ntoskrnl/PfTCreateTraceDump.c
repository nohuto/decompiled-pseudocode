/*
 * XREFs of PfTCreateTraceDump @ 0x140420A90
 * Callers:
 *     PfTGenerateTrace @ 0x140420A44 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfTFreeBufferList @ 0x140421220 (PfTFreeBufferList.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  int v3; // edi
  int v4; // r12d
  unsigned int i; // edx
  SIZE_T v6; // rbx
  _WORD *PoolWithTag; // rax
  __int64 v8; // r13
  __int64 *v9; // rsi
  unsigned int v10; // ebx
  unsigned __int64 v11; // r14
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
  _DWORD *v26; // rax
  _DWORD *v27; // r8
  char *v28; // r13
  char *v29; // rdx
  __int64 *v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rax
  int v34; // r12d
  char *v35; // rcx
  unsigned int v36; // r14d
  unsigned __int64 v37; // rax
  _WORD *v38; // rbx
  char *v39; // rsi
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 *v43; // rdx
  __int64 v44; // r9
  unsigned __int16 v45; // r8
  unsigned __int16 v46; // ax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  _OWORD *v50; // rdx
  char *v51; // r9
  _OWORD *v52; // rdx
  __int64 v53; // rax
  unsigned __int16 v54; // cx
  int v55; // eax
  __int64 v57; // rax
  unsigned __int16 v58; // cx
  int v59; // eax
  __int16 v60; // r10
  __int64 v61; // r8
  __int16 v62; // r10
  __int64 v63; // r8
  __int64 v64; // r10
  unsigned __int16 v65; // ax
  __int64 v66; // r10
  unsigned __int16 v67; // cx
  __int64 v68; // [rsp+20h] [rbp-F8h]
  __int64 v69; // [rsp+28h] [rbp-F0h] BYREF
  _OWORD *v70; // [rsp+30h] [rbp-E8h]
  __int64 v71; // [rsp+38h] [rbp-E0h]
  __int64 v72; // [rsp+40h] [rbp-D8h]
  _OWORD *v73; // [rsp+48h] [rbp-D0h]
  char *v74; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v75; // [rsp+58h] [rbp-C0h]
  char *v76; // [rsp+60h] [rbp-B8h]
  __int64 *v77; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v78; // [rsp+70h] [rbp-A8h]
  _DWORD *v79; // [rsp+78h] [rbp-A0h]
  _QWORD v80[11]; // [rsp+88h] [rbp-90h] BYREF
  __int64 *v82; // [rsp+128h] [rbp+10h]
  unsigned __int16 v83; // [rsp+128h] [rbp+10h]
  __int16 v84; // [rsp+130h] [rbp+18h]
  _WORD *P; // [rsp+138h] [rbp+20h]

  memset(v80, 0, sizeof(v80));
  v1 = qword_14036D958;
  v2 = qword_14036D960;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_14036D958; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x74546650u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v32 = -1073741670;
    goto LABEL_61;
  }
  memset(PoolWithTag, 0, v6);
  v8 = qword_14036D960;
  v9 = &qword_14036D930;
  v84 = *(_WORD *)(qword_14036D960 + 36);
  do
  {
    v9 = (__int64 *)v9[1];
    v10 = 0;
    v82 = v9;
    if ( *((_DWORD *)v9 + 4) )
    {
      v11 = ((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
      while ( 1 )
      {
        v12 = v11 + 16LL * v10;
        if ( (*(_BYTE *)v12 & 3u) < 2 )
          break;
        v59 = (*(_DWORD *)v12 >> 2) & 0x3FF;
        v3 += v59;
        v10 = v59 + v10 - 1;
        if ( (*(_DWORD *)v12 & 3) == 2 )
        {
          v12 += 16LL;
LABEL_9:
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v71 = 0LL;
          v72 = 0LL;
          v73 = 0LL;
          v13 = *(_DWORD *)v12;
          if ( (*(_DWORD *)v12 & 3) != 0 )
          {
            LOWORD(v68) = -1;
            if ( (v13 & 0x18) == 0x10 )
              LOWORD(v71) = *(_WORD *)(v12 + 10);
            else
              LOWORD(v71) = -1;
          }
          else
          {
            LOWORD(v71) = *(_WORD *)(v12 + 10);
            LOWORD(v68) = *(_WORD *)(v12 + 8);
          }
          v14 = &v69;
          v15 = 2LL;
          do
          {
            v16 = *((_WORD *)v14 - 4);
            if ( v16 != 0xFFFF )
            {
              v17 = *(_WORD *)(v2 + 36);
              if ( v16 < v17 || v16 >= (unsigned int)v17 + *(_DWORD *)(v2 + 32) )
              {
                v66 = v2;
                while ( 1 )
                {
                  v66 = *(_QWORD *)(v66 + 8);
                  if ( (__int64 *)v66 == &qword_14036D958 )
                    v66 = v8;
                  if ( v66 == v2 )
                    break;
                  v67 = *(_WORD *)(v66 + 36);
                  if ( v16 >= v67 && v16 < *(_DWORD *)(v66 + 32) + (unsigned int)v67 )
                  {
                    v2 = v66;
                    v18 = 5LL * (v16 - *(unsigned __int16 *)(v66 + 36));
                    v19 = v66 + 47;
                    goto LABEL_18;
                  }
                }
                v20 = 0LL;
              }
              else
              {
                v18 = 5LL * (v16 - v17);
                v19 = v2 + 47;
LABEL_18:
                v20 = (v19 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v18 + 8;
              }
              *v14 = v2;
              v14[1] = v20;
            }
            v14 += 3;
            --v15;
          }
          while ( v15 );
          v9 = v82;
          if ( v70 )
          {
            v21 = (unsigned __int16)(v68 - v84);
            if ( P[v21] != 0xFFFF )
            {
              P[v21] = -1;
              ++v4;
              v8 = qword_14036D960;
            }
          }
          if ( v73 )
          {
            v22 = (unsigned __int16)(v71 - v84);
            if ( P[v22] != 0xFFFF )
            {
              P[v22] = -1;
              ++v4;
              v8 = qword_14036D960;
            }
          }
        }
        if ( ++v10 >= *((_DWORD *)v9 + 4) )
          goto LABEL_28;
      }
      ++v3;
      goto LABEL_9;
    }
LABEL_28:
    ;
  }
  while ( v9 != (__int64 *)qword_14036D930 );
  if ( v3 )
  {
    v23 = 16 * v3;
    v24 = 32 * v4;
    v25 = v24 + ((v23 + 63) & 0xFFFFFFF8);
    v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x44546650u);
    v79 = v26;
    v27 = v26;
    if ( v26 )
    {
      v28 = (char *)(v26 + 8);
      *((_QWORD *)v26 + 2) = 0LL;
      *((_QWORD *)v26 + 3) = 0LL;
      v29 = (char *)(v26 + 14);
      *((_QWORD *)v26 + 4) = 0LL;
      v30 = &qword_14036D930;
      *((_QWORD *)v26 + 5) = 0LL;
      v31 = (v23 + 31) & 0xFFFFFFF8;
      *((_QWORD *)v26 + 6) = 0LL;
      v26[6] = v25 - 16;
      v32 = 0;
      v26[4] = 852013;
      v26[5] = 1128485697;
      v26[7] = 0;
      v33 = ((_DWORD)v31 + v24 + 7) & 0xFFFFFFF8;
      v27[10] = v31;
      v34 = 0;
      v35 = (char *)v27 + v31 + 32;
      v27[12] = v33;
      v76 = (char *)(v27 + 8);
      v75 = (unsigned __int64)v27 + v33 + 32;
      v80[8] = v75;
      v27[8] = 24;
      v74 = v35;
      v83 = 0;
      do
      {
        v30 = (__int64 *)v30[1];
        v36 = 0;
        v77 = v30;
        if ( *((_DWORD *)v30 + 4) )
        {
          v37 = ((unsigned __int64)v30 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v78 = v37;
          do
          {
            v38 = (_WORD *)(v37 + 16LL * v36);
            v39 = &v29[16 * v34];
            if ( (*(_BYTE *)v38 & 3u) >= 2 )
            {
              v40 = (*(_DWORD *)v38 >> 2) & 0x3FF;
              v36 = v40 + v36 - 1;
            }
            else
            {
              v40 = 1;
            }
            if ( &v39[16 * v40] > v35 )
              break;
            memmove(v39, v38, (unsigned int)(16 * v40));
            *((_DWORD *)v28 + 1) += v40;
            v34 += v40;
            if ( (*(_DWORD *)v38 & 3) == 2 )
            {
              v38 += 8;
              v39 += 16;
            }
            v41 = *(_QWORD *)v38;
            if ( ((unsigned __int8)*(_QWORD *)v38 & 3u) < 2 )
            {
              v68 = 0LL;
              v69 = 0LL;
              v70 = 0LL;
              v71 = 0LL;
              v72 = 0LL;
              v73 = 0LL;
              if ( (v41 & 3) != 0 )
              {
                LOWORD(v68) = -1;
                if ( (v41 & 0x18) == 0x10 )
                  LOWORD(v71) = v38[5];
                else
                  LOWORD(v71) = -1;
              }
              else
              {
                LOWORD(v71) = v38[5];
                LOWORD(v68) = v38[4];
              }
              v42 = qword_14036D960;
              v43 = &v69;
              v44 = 2LL;
              do
              {
                v45 = *((_WORD *)v43 - 4);
                if ( v45 != 0xFFFF )
                {
                  v46 = *(_WORD *)(v2 + 36);
                  if ( v45 < v46 || v45 >= (unsigned int)v46 + *(_DWORD *)(v2 + 32) )
                  {
                    v64 = v2;
                    while ( 1 )
                    {
                      v64 = *(_QWORD *)(v64 + 8);
                      if ( (__int64 *)v64 == &qword_14036D958 )
                        v64 = v42;
                      if ( v64 == v2 )
                        break;
                      v65 = *(_WORD *)(v64 + 36);
                      if ( v45 >= v65 && v45 < *(_DWORD *)(v64 + 32) + (unsigned int)v65 )
                      {
                        v2 = v64;
                        v47 = 5LL * (v45 - *(unsigned __int16 *)(v64 + 36));
                        v48 = v64 + 47;
                        goto LABEL_49;
                      }
                    }
                    v49 = 0LL;
                  }
                  else
                  {
                    v47 = 5LL * (v45 - v46);
                    v48 = v2 + 47;
LABEL_49:
                    v49 = (v48 & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v47 + 8;
                  }
                  *v43 = v2;
                  v43[1] = v49;
                }
                v43 += 3;
                --v44;
              }
              while ( v44 );
              v50 = v70;
              v28 = v76;
              v51 = v74;
              if ( v70 )
              {
                v57 = (unsigned __int16)(v68 - v84);
                v58 = P[v57];
                if ( v58 == 0xFFFF )
                {
                  v58 = v83;
                  v60 = v83 + 1;
                  P[v57] = v83;
                  v61 = 32LL * v83++;
                  if ( (unsigned __int64)&v51[v61 + 32] > v75 )
                  {
                    v83 = v60 - 1;
                  }
                  else
                  {
                    *(_OWORD *)&v51[v61] = *v50;
                    *(_OWORD *)&v51[v61 + 16] = v50[1];
                    ++*((_WORD *)v28 + 6);
                  }
                }
                *((_WORD *)v39 + 4) = v58;
              }
              v52 = v73;
              if ( v73 )
              {
                v53 = (unsigned __int16)(v71 - v84);
                v54 = P[v53];
                if ( v54 == 0xFFFF )
                {
                  v54 = v83;
                  v62 = v83 + 1;
                  P[v53] = v83;
                  v63 = 32LL * v83++;
                  if ( (unsigned __int64)&v51[v63 + 32] > v75 )
                  {
                    v83 = v62 - 1;
                  }
                  else
                  {
                    *(_OWORD *)&v51[v63] = *v52;
                    *(_OWORD *)&v51[v63 + 16] = v52[1];
                    ++*((_WORD *)v28 + 6);
                  }
                }
                *((_WORD *)v39 + 5) = v54;
              }
            }
            v30 = v77;
            v29 = v28 + 24;
            v35 = v74;
            ++v36;
            v37 = v78;
          }
          while ( v36 < *((_DWORD *)v77 + 4) );
          v32 = 0;
        }
      }
      while ( v30 != (__int64 *)qword_14036D930 );
      v55 = LODWORD(v80[8]) - *((_DWORD *)v28 + 4) - (_DWORD)v28;
      *((_WORD *)v28 + 7) = HIWORD(v80[9]);
      *((_DWORD *)v28 + 5) = v55;
      *a1 = v79;
    }
    else
    {
      v32 = -1073741670;
    }
  }
  else
  {
    v32 = -2147483622;
  }
  ExFreePoolWithTag(P, 0);
LABEL_61:
  PfTFreeBufferList(&unk_14036D918);
  PfTFreeBufferList(&unk_14036D940);
  return v32;
}
