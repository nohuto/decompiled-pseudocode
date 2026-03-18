/*
 * XREFs of ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vStrWrite04(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rbx
  int *v5; // r12
  LONG *v7; // r14
  __int64 v8; // r13
  int v9; // r11d
  int v10; // ecx
  int *v11; // r8
  int *v12; // r9
  char v13; // r10
  int v14; // ebx
  __int64 v15; // rsi
  int *v16; // r12
  int v17; // r13d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // r10d
  int v22; // r9d
  int v23; // esi
  int v24; // edx
  int v25; // esi
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // r11d
  int v29; // r9d
  int v30; // ecx
  int v31; // r11d
  int v32; // edx
  int v33; // ecx
  char *v34; // rdx
  size_t v35; // r12
  int v36; // r13d
  char *v37; // rbx
  int v38; // r8d
  int *v39; // rcx
  int v40; // r9d
  int j; // edx
  LONG v42; // esi
  LONG v43; // r14d
  int *v44; // r14
  int *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  int v48; // ebx
  __int64 v49; // rax
  int v50; // r11d
  char v51; // r13
  unsigned int v52; // r13d
  int *v53; // r8
  int v54; // eax
  int v55; // ecx
  __int64 v56; // r9
  int *v57; // r10
  int v58; // ecx
  int v59; // [rsp+30h] [rbp-50h]
  LONG v60; // [rsp+34h] [rbp-4Ch]
  int v61; // [rsp+38h] [rbp-48h]
  int v62; // [rsp+3Ch] [rbp-44h]
  LONG v63; // [rsp+3Ch] [rbp-44h]
  __int64 i; // [rsp+40h] [rbp-40h]
  __int64 v65; // [rsp+40h] [rbp-40h]
  struct _RECTL si128; // [rsp+48h] [rbp-38h] BYREF
  int *v67; // [rsp+58h] [rbp-28h]
  __int64 v68; // [rsp+60h] [rbp-20h]
  int v69; // [rsp+68h] [rbp-18h]
  int *v70; // [rsp+70h] [rbp-10h]
  int *v71; // [rsp+78h] [rbp-8h]
  struct _XRUNLEN *v73; // [rsp+C8h] [rbp+48h]

  if ( a2 )
  {
    v73 = a2;
    v4 = (XCLIPOBJ *)a4;
    v5 = (int *)((char *)a1 + 8);
    v67 = (int *)((char *)a1 + 8);
    v7 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v42 = *v7;
      v43 = v7[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v60 = v42;
      XCLIPOBJ::vFindScan(v4, &si128, v42);
      while ( v43 )
      {
        v63 = --v43;
        if ( v42 >= si128.top && v42 < si128.bottom )
        {
          v44 = v5;
          v45 = (int *)v73;
          v46 = *((_QWORD *)a3 + 10) + v42 * *((_DWORD *)a3 + 22);
          v68 = v46;
          if ( v5 != (int *)v73 )
          {
            v47 = v46;
            do
            {
              v48 = *v44;
              v49 = (__int64)*v44 >> 3;
              v50 = *v44 + v44[1];
              v51 = *v44;
              v69 = v50;
              v52 = v51 & 7;
              v53 = (int *)(v47 + 4 * v49);
              v71 = v53;
              if ( v48 < 0 || v48 >= *((_DWORD *)a3 + 14) )
              {
                v55 = 0;
                v54 = 0;
              }
              else
              {
                v54 = *v53;
                v55 = 1;
              }
              v59 = v54;
              v61 = v55;
              if ( v48 < v50 )
              {
                v56 = v52;
                v57 = v44 + 2;
                v65 = v52;
                v70 = v44 + 2;
                do
                {
                  if ( v48 < si128.left || v48 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v48);
                    v53 = v71;
                    v56 = v65;
                    v57 = v70;
                    v50 = v69;
                  }
                  if ( v48 < si128.left || v48 >= si128.right )
                  {
                    v58 = v59;
                  }
                  else
                  {
                    v58 = v59 & ~dword_1C02E6C08[v56] | dword_1C02E6C08[v56] & (*v57 << dword_1C02E6C28[v56]);
                    v59 = v58;
                  }
                  ++v56;
                  ++v57;
                  ++v52;
                  v65 = v56;
                  ++v48;
                  v70 = v57;
                  if ( (v52 & 8) != 0 )
                  {
                    if ( v61 )
                      *v53 = v58;
                    ++v53;
                    v56 = 0LL;
                    v52 = 0;
                    v71 = v53;
                    v65 = 0LL;
                    if ( v48 < 0 || v48 >= *((_DWORD *)a3 + 14) )
                    {
                      v55 = 0;
                      v54 = 0;
                    }
                    else
                    {
                      v54 = *v53;
                      v55 = 1;
                    }
                    v61 = v55;
                    v59 = v54;
                  }
                  else
                  {
                    v54 = v59;
                    v55 = v61;
                  }
                }
                while ( v48 < v50 );
                v47 = v68;
                v45 = (int *)v73;
              }
              if ( v55 )
                *v53 = v54;
              v44 += v44[1] + 2;
            }
            while ( v44 != v45 );
            v42 = v60;
            v5 = v67;
            v4 = (XCLIPOBJ *)a4;
          }
          v43 = v63;
        }
        v60 = ++v42;
        if ( v42 < si128.top || v42 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v42);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != (int *)a2; v67 = v5 )
      {
        v9 = *v5;
        v10 = *v5 + v5[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v5 >> 3));
        v12 = v11;
        if ( *v5 < v10 )
        {
          v13 = v9 & 7;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v15 = v9 & 7;
            v16 = v5 + 2;
            v17 = v10;
            do
            {
              v18 = dword_1C02E6C08[v15];
              ++v13;
              v19 = *v16;
              ++v9;
              v20 = dword_1C02E6C28[v15];
              ++v16;
              ++v15;
              v14 = v14 & ~v18 | v18 & (v19 << v20);
              if ( v9 >= v17 )
                break;
              if ( (v13 & 8) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v7 = (LONG *)a1;
            v5 = v67;
            v8 = i;
            a2 = v73;
          }
          *v12 = v14;
          v21 = v7[1];
          if ( v21 > 1 )
          {
            v22 = *v5 >> 3;
            v23 = *v5 + v5[1];
            v24 = v23 & 7;
            v25 = v23 >> 3;
            v26 = 4 * (*v5 & 7u);
            v27 = 4 * v24;
            v62 = 4 * v24;
            if ( v22 == v25 )
            {
              v28 = 1;
              v29 = dword_1C02E6C50[v26] & ~dword_1C02E6C50[v27];
              do
              {
                v30 = v29 & *v11;
                ++v28;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                *v11 = *v11 & ~v29 | v30;
              }
              while ( v28 < v7[1] );
            }
            else
            {
              if ( (_DWORD)v26 )
              {
                v31 = 1;
                v32 = ~dword_1C02E6C50[(unsigned int)v26];
                v33 = *v11 & dword_1C02E6C50[(unsigned int)v26];
                do
                {
                  ++v31;
                  v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                  *v11 = v33 | v32 & *v11;
                }
                while ( v31 < v7[1] );
                ++v22;
              }
              if ( v22 != v25 )
              {
                v34 = (char *)(v8 + 4LL * v22);
                if ( v7[1] > 1 )
                {
                  v35 = 4 * (v25 - v22);
                  v36 = 1;
                  do
                  {
                    v37 = &v34[*((int *)a3 + 22)];
                    memmove(v37, v34, v35);
                    ++v36;
                    v34 = v37;
                  }
                  while ( v36 < v7[1] );
                  v5 = v67;
                  v8 = i;
                  v27 = v62;
                }
              }
              if ( v27 )
              {
                v38 = 1;
                v39 = (int *)(v8 + 4LL * v25);
                v40 = dword_1C02E6C50[v27];
                for ( j = *v39 & ~v40; v38 < v7[1]; *v39 = j | v40 & *v39 )
                {
                  ++v38;
                  v39 = (int *)((char *)v39 + *((int *)a3 + 22));
                }
              }
            }
            a2 = v73;
          }
        }
        v5 += v5[1] + 2;
      }
    }
  }
}
