/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0099A70
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  int *v4; // rbx
  XCLIPOBJ *v5; // r15
  __int64 v8; // r9
  LONG v9; // ecx
  int v10; // r15d
  int *v11; // r8
  int *v12; // r10
  char v13; // dl
  int v14; // r9d
  __int64 v15; // r11
  _DWORD *v16; // rsi
  int v18; // r9d
  int v19; // ecx
  int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // r12
  int v23; // r15d
  int v24; // r10d
  int v25; // r11d
  int v26; // ecx
  int v27; // r10d
  int v28; // r11d
  int v29; // edx
  int v30; // esi
  char *v31; // rdx
  size_t v32; // r12
  char *v33; // rbx
  int v34; // r8d
  int *v35; // rcx
  int v36; // r9d
  int j; // edx
  LONG v38; // esi
  int v39; // r14d
  LONG *v40; // r15
  struct _XRUNLEN *v41; // rdx
  __int64 v42; // rcx
  LONG v43; // ebx
  __int64 v44; // rax
  int v45; // r9d
  char v46; // r12
  unsigned int v47; // r12d
  _DWORD *v48; // rcx
  int v49; // r14d
  int v50; // eax
  __int64 v51; // rdx
  LONG *v52; // r8
  int v53; // [rsp+30h] [rbp-39h]
  __int64 i; // [rsp+38h] [rbp-31h]
  int v55; // [rsp+38h] [rbp-31h]
  int v56; // [rsp+40h] [rbp-29h]
  LONG v57; // [rsp+40h] [rbp-29h]
  struct _RECTL si128; // [rsp+48h] [rbp-21h] BYREF
  int v59; // [rsp+58h] [rbp-11h]
  __int64 v60; // [rsp+60h] [rbp-9h]
  char *v61; // [rsp+68h] [rbp-1h]
  LONG *v62; // [rsp+70h] [rbp+7h]
  _DWORD *v63; // [rsp+78h] [rbp+Fh]
  __int64 v64; // [rsp+80h] [rbp+17h]

  if ( a2 )
  {
    v4 = (int *)((char *)a1 + 8);
    v5 = (XCLIPOBJ *)a4;
    v61 = (char *)a1 + 8;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v38 = *(_DWORD *)a1;
      v39 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v57 = v38;
      XCLIPOBJ::vFindScan(v5, &si128, v38);
      while ( v39 )
      {
        v55 = --v39;
        if ( v38 >= si128.top && v38 < si128.bottom )
        {
          v40 = v4;
          v41 = a2;
          v42 = *((_QWORD *)a3 + 10) + v38 * *((_DWORD *)a3 + 22);
          v64 = v42;
          if ( v4 != (int *)a2 )
          {
            do
            {
              v43 = *v40;
              v44 = (__int64)*v40 >> 5;
              v45 = *v40 + v40[1];
              v46 = *v40;
              v59 = v45;
              v47 = v46 & 0x1F;
              v48 = (_DWORD *)(v42 + 4 * v44);
              v63 = v48;
              if ( v43 < 0 || v43 >= *((_DWORD *)a3 + 14) )
              {
                v50 = 0;
                v49 = 0;
              }
              else
              {
                v49 = *v48;
                v50 = 1;
              }
              v53 = v50;
              if ( v43 < v45 )
              {
                v51 = v47;
                v52 = v40 + 2;
                v60 = v47;
                v62 = v40 + 2;
                do
                {
                  if ( v43 < si128.left || v43 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v43);
                    v48 = v63;
                    v52 = v62;
                    v45 = v59;
                    v51 = v60;
                  }
                  if ( v43 >= si128.left && v43 < si128.right )
                  {
                    if ( *v52 )
                      v49 |= dword_1C02EA5B0[v51];
                    else
                      v49 &= ~dword_1C02EA5B0[v51];
                  }
                  ++v51;
                  ++v52;
                  ++v47;
                  v60 = v51;
                  ++v43;
                  v62 = v52;
                  if ( (v47 & 0x20) != 0 )
                  {
                    if ( v53 )
                      *v48 = v49;
                    ++v48;
                    v51 = 0LL;
                    v47 = 0;
                    v63 = v48;
                    v60 = 0LL;
                    if ( v43 < 0 || v43 >= *((_DWORD *)a3 + 14) )
                    {
                      v50 = 0;
                      v53 = 0;
                      v49 = 0;
                    }
                    else
                    {
                      v49 = *v48;
                      v50 = 1;
                      v53 = 1;
                    }
                  }
                  else
                  {
                    v50 = v53;
                  }
                }
                while ( v43 < v45 );
                v41 = a2;
              }
              if ( v50 )
                *v48 = v49;
              v42 = v64;
              v40 += v40[1] + 2;
            }
            while ( v40 != (LONG *)v41 );
            v38 = v57;
            v4 = (int *)v61;
            v39 = v55;
          }
          v5 = (XCLIPOBJ *)a4;
        }
        v57 = ++v38;
        if ( v38 < si128.top || v38 >= si128.bottom )
          XCLIPOBJ::vFindScan(v5, &si128, v38);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v4 != (int *)a2; v61 = (char *)v4 )
      {
        v9 = *v4;
        v10 = *v4 + v4[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v4 >> 5));
        v12 = v11;
        if ( *v4 < v10 )
        {
          v13 = v9 & 0x1F;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v15 = v9 & 0x1F;
            v16 = v4 + 2;
            do
            {
              if ( *v16++ )
                v14 |= dword_1C02EA5B0[v15];
              else
                v14 &= ~dword_1C02EA5B0[v15];
              ++v13;
              ++v15;
              if ( ++v9 >= v10 )
                break;
              if ( (v13 & 0x20) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
          }
          *v12 = v14;
          v18 = *((_DWORD *)a1 + 1);
          if ( v18 > 1 )
          {
            v19 = *v4 >> 5;
            v20 = *v4 + v4[1];
            v21 = *v4 & 0x1F;
            v22 = v20 & 0x1F;
            v23 = v20 >> 5;
            v56 = v22;
            if ( v19 == v23 )
            {
              v24 = dword_1C02EA150[v21] & ~dword_1C02EA150[v22];
              v25 = 1;
              do
              {
                v26 = v24 & *v11;
                ++v25;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                *v11 = *v11 & ~v24 | v26;
              }
              while ( v25 < *((_DWORD *)a1 + 1) );
              v8 = i;
              goto LABEL_19;
            }
            if ( (_DWORD)v21 )
            {
              v27 = 1;
              v28 = ~dword_1C02EA150[v21];
              v29 = *v11 & dword_1C02EA150[v21];
              do
              {
                ++v27;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                *v11 = v29 | v28 & *v11;
              }
              while ( v27 < *((_DWORD *)a1 + 1) );
              ++v19;
            }
            v8 = i;
            if ( v19 != v23 )
            {
              v30 = 1;
              v31 = (char *)(i + 4LL * v19);
              if ( *((int *)a1 + 1) > 1 )
              {
                v32 = 4 * (v23 - v19);
                do
                {
                  v33 = &v31[*((int *)a3 + 22)];
                  memmove(v33, v31, v32);
                  ++v30;
                  v31 = v33;
                }
                while ( v30 < *((_DWORD *)a1 + 1) );
                v4 = (int *)v61;
                LODWORD(v22) = v56;
                v8 = i;
              }
            }
            if ( !(_DWORD)v22 )
              goto LABEL_19;
            v34 = 1;
            v35 = (int *)(v8 + 4LL * v23);
            v36 = dword_1C02EA150[(unsigned int)v22];
            for ( j = *v35 & ~v36; v34 < *((_DWORD *)a1 + 1); *v35 = j | v36 & *v35 )
            {
              ++v34;
              v35 = (int *)((char *)v35 + *((int *)a3 + 22));
            }
          }
          v8 = i;
        }
LABEL_19:
        v4 += v4[1] + 2;
      }
    }
  }
}
