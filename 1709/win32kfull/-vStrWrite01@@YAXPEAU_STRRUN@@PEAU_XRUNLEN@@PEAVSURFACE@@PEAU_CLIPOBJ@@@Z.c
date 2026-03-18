/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0015C30
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rbx
  struct _XRUNLEN *v5; // r12
  int *v6; // rdx
  __int64 i; // r12
  int v10; // r11d
  int v11; // edi
  int *v12; // r8
  int *v13; // r9
  char v14; // r10
  int v15; // ecx
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // r15
  int v23; // r9d
  int v24; // r11d
  int v25; // ecx
  int v26; // r10d
  int v27; // ecx
  int v28; // r10d
  int v29; // edx
  int v30; // edi
  char *v31; // rdx
  size_t v32; // rbp
  char *v33; // rbx
  int v34; // r9d
  int v35; // edx
  int *v36; // rcx
  int j; // r8d
  LONG v38; // edi
  int v39; // esi
  LONG right; // ecx
  LONG left; // edx
  int *v42; // r8
  __int64 v43; // r11
  int v44; // ebx
  int v45; // r9d
  unsigned int v46; // r15d
  int *v47; // r14
  int v48; // edi
  int v49; // ebp
  __int64 v50; // rsi
  _DWORD *v51; // r12
  LONG v52; // [rsp+30h] [rbp-78h]
  int v53; // [rsp+34h] [rbp-74h]
  int v54; // [rsp+38h] [rbp-70h]
  int *v55; // [rsp+40h] [rbp-68h]
  int *v56; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v5 = a2;
    v6 = (int *)((char *)a1 + 8);
    v55 = (int *)((char *)a1 + 8);
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v38 = *(_DWORD *)a1;
      v39 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v52 = v38;
      XCLIPOBJ::vFindScan(v4, &si128, v38);
      if ( v39 )
      {
        right = si128.right;
        left = si128.left;
        do
        {
          v54 = --v39;
          if ( v38 >= si128.top && v38 < si128.bottom )
          {
            v42 = v55;
            v56 = v55;
            v43 = *((_QWORD *)a3 + 10) + v38 * *((_DWORD *)a3 + 22);
            v57 = v43;
            if ( v55 != (int *)v5 )
            {
              do
              {
                v44 = *v42;
                v45 = *v42 + v42[1];
                v53 = v45;
                v46 = *v42 & 0x1F;
                v47 = (int *)(v43 + 4 * ((__int64)*v42 >> 5));
                if ( *v42 < 0 || v44 >= *((_DWORD *)a3 + 14) )
                {
                  v49 = 0;
                  v48 = 0;
                }
                else
                {
                  v48 = *v47;
                  v49 = 1;
                }
                if ( v44 < v45 )
                {
                  v50 = v46;
                  v51 = v42 + 2;
                  do
                  {
                    if ( v44 < left || v44 >= right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v44, v45);
                      right = si128.right;
                      v45 = v53;
                      left = si128.left;
                    }
                    if ( v44 >= left && v44 < right )
                    {
                      if ( *v51 )
                        v48 |= dword_1C02E70D0[v50];
                      else
                        v48 &= ~dword_1C02E70D0[v50];
                    }
                    ++v46;
                    ++v50;
                    ++v44;
                    ++v51;
                    if ( (v46 & 0x20) != 0 )
                    {
                      if ( v49 )
                        *v47 = v48;
                      ++v47;
                      v46 = 0;
                      v50 = 0LL;
                      if ( v44 < 0 || v44 >= *((_DWORD *)a3 + 14) )
                      {
                        v49 = 0;
                        v48 = 0;
                      }
                      else
                      {
                        v48 = *v47;
                        v49 = 1;
                      }
                    }
                  }
                  while ( v44 < v45 );
                  v42 = v56;
                  v43 = v57;
                  v5 = a2;
                }
                if ( v49 )
                  *v47 = v48;
                v42 += v42[1] + 2;
                v56 = v42;
              }
              while ( v42 != (int *)v5 );
              v4 = (XCLIPOBJ *)a4;
              v38 = v52;
              v39 = v54;
            }
          }
          v52 = ++v38;
          if ( v38 < si128.top || v38 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v4, &si128, v38);
            right = si128.right;
            left = si128.left;
          }
        }
        while ( v39 );
      }
    }
    else
    {
      for ( i = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22); v6 != (int *)a2; v55 = v6 )
      {
        v10 = *v6;
        v11 = *v6 + v6[1];
        v12 = (int *)(i + 4 * ((__int64)*v6 >> 5));
        v13 = v12;
        if ( *v6 < v11 )
        {
          v14 = v10 & 0x1F;
          v15 = *v12;
          if ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v16 = v55 + 2;
            v17 = v10 & 0x1F;
            do
            {
              if ( *v16++ )
                v15 |= dword_1C02E70D0[v17];
              else
                v15 &= ~dword_1C02E70D0[v17];
              ++v14;
              ++v17;
              if ( ++v10 >= v11 )
                break;
              if ( (v14 & 0x20) != 0 )
              {
                *v13 = v15;
                v14 = 0;
                v15 = v13[1];
                ++v13;
                v17 = 0LL;
              }
            }
            while ( (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v6 = v55;
          }
          *v13 = v15;
          if ( *((int *)a1 + 1) > 1 )
          {
            v19 = *v6 >> 5;
            v20 = *v6 & 0x1F;
            v21 = (*v6 + v6[1]) >> 5;
            v22 = (*v6 + v6[1]) & 0x1F;
            if ( v19 == v21 )
            {
              v23 = 1;
              v24 = dword_1C02E6C50[v20] & ~dword_1C02E6C50[v22];
              do
              {
                v25 = v24 & *v12;
                ++v23;
                v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                *v12 = *v12 & ~v24 | v25;
              }
              while ( v23 < *((_DWORD *)a1 + 1) );
            }
            else
            {
              if ( (_DWORD)v20 )
              {
                v26 = dword_1C02E6C50[v20];
                v27 = 1;
                v28 = ~v26;
                v29 = *v12 & ~v28;
                do
                {
                  ++v27;
                  v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                  *v12 = v29 | v28 & *v12;
                }
                while ( v27 < *((_DWORD *)a1 + 1) );
                ++v19;
              }
              if ( v19 != v21 )
              {
                v30 = 1;
                v31 = (char *)(i + 4LL * v19);
                if ( *((int *)a1 + 1) > 1 )
                {
                  v32 = 4 * (v21 - v19);
                  do
                  {
                    v33 = &v31[*((int *)a3 + 22)];
                    memmove(v33, v31, v32);
                    ++v30;
                    v31 = v33;
                  }
                  while ( v30 < *((_DWORD *)a1 + 1) );
                }
              }
              if ( (_DWORD)v22 )
              {
                v34 = dword_1C02E6C50[v22];
                v35 = 1;
                v36 = (int *)(i + 4LL * v21);
                for ( j = *v36 & ~v34; v35 < *((_DWORD *)a1 + 1); *v36 = j | v34 & *v36 )
                {
                  ++v35;
                  v36 = (int *)((char *)v36 + *((int *)a3 + 22));
                }
              }
            }
            v6 = v55;
          }
        }
        v6 += v6[1] + 2;
      }
    }
  }
}
