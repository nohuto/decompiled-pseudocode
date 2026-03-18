/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C012AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct SURFACE *v5; // rbx
  struct _XRUNLEN *v6; // r15
  struct _XRUNLEN *v7; // rdi
  __int64 v9; // r14
  __int64 v11; // r10
  _WORD *v12; // r9
  _WORD *v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // r8
  __int16 v16; // ax
  int v17; // edi
  char *v18; // rbx
  LONG top; // ecx
  int v20; // ebp
  LONG v21; // ebp
  unsigned __int64 v22; // xmm1_8
  LONG left; // r14d
  int v24; // ebp
  __int64 v25; // r13
  int v26; // r8d
  __int64 v27; // rax
  int v28; // edx
  LONG v29; // r10d
  LONG v30; // ecx
  int v31; // r11d
  _WORD *v32; // r9
  _WORD *v33; // rdx
  int v34; // r10d
  __int64 v35; // r8
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // rsi
  __int64 v39; // rdi
  char *v40; // rbx
  LONG v41; // r13d
  int v42; // r8d
  int v43; // esi
  LONG right; // ecx
  LONG v45; // edx
  struct _XRUNLEN *v46; // r14
  __int64 v47; // r8
  __int64 v48; // rbx
  int v49; // ebp
  __int64 v50; // rdi
  int *v51; // rsi
  __int64 i; // [rsp+30h] [rbp-68h]
  int v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  struct _XRUNLEN *v55; // [rsp+40h] [rbp-58h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-50h] BYREF

  if ( a2 )
  {
    v5 = a3;
    v6 = (struct _STRRUN *)((char *)a1 + 8);
    v55 = (struct _STRRUN *)((char *)a1 + 8);
    v7 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        v20 = *((_DWORD *)a1 + 1);
        rclBounds = a4->rclBounds;
        v21 = top + v20;
        v22 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        if ( top < SHIDWORD(v22) )
        {
          left = rclBounds.left;
          if ( v21 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v21 >= SHIDWORD(v22) )
              v21 = HIDWORD(v22);
            v24 = v21 - top;
            v25 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            if ( v6 != a2 )
            {
              do
              {
                v26 = *(_DWORD *)v6;
                v27 = *((int *)v6 + 1);
                v28 = v27 + *(_DWORD *)v6;
                if ( v28 >= left )
                {
                  if ( v26 >= (int)v22 )
                    return;
                  v29 = left;
                  v30 = v22;
                  if ( v26 >= left )
                    v29 = *(_DWORD *)v6;
                  if ( v28 < (int)v22 )
                    v30 = v27 + *(_DWORD *)v6;
                  v31 = v30 - v29;
                  v32 = (_WORD *)(v25 + 2LL * v29 + v29);
                  v33 = v32;
                  if ( v29 < v30 )
                  {
                    v34 = v29 - v26;
                    v35 = v31;
                    v36 = (int *)((char *)v6 + 4 * v34 + 8);
                    do
                    {
                      v37 = *(_WORD *)v36++;
                      *v33 = v37;
                      v33 = (_WORD *)((char *)v33 + 3);
                      *((_BYTE *)v33 - 1) = *((_BYTE *)v36 - 2);
                      --v35;
                    }
                    while ( v35 );
                  }
                  if ( v24 > 1 )
                  {
                    v38 = 3 * v31;
                    v39 = (unsigned int)(v24 - 1);
                    do
                    {
                      v40 = (char *)v32 + *((int *)a3 + 22);
                      memmove(v40, v32, v38);
                      v32 = v40;
                      --v39;
                    }
                    while ( v39 );
                    left = rclBounds.left;
                    v7 = a2;
                  }
                  v27 = *((int *)v6 + 1);
                }
                v6 = (struct _XRUNLEN *)((char *)v6 + 4 * v27 + 8);
              }
              while ( v6 != v7 );
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *(_DWORD *)a1;
        v43 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        if ( v43 )
        {
          right = rclBounds.right;
          v45 = rclBounds.left;
          do
          {
            v53 = --v43;
            if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
            {
              v46 = v6;
              v47 = *((_QWORD *)v5 + 10) + v41 * *((_DWORD *)v5 + 22);
              v54 = v47;
              if ( v6 != v7 )
              {
                do
                {
                  v48 = *(int *)v46;
                  v49 = v48 + *((_DWORD *)v46 + 1);
                  v50 = v48 + v47 + 2 * v48;
                  if ( (int)v48 < v49 )
                  {
                    v51 = (int *)((char *)v46 + 8);
                    do
                    {
                      if ( (int)v48 < v45 || (int)v48 >= right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v48);
                        right = rclBounds.right;
                        v45 = rclBounds.left;
                      }
                      if ( (int)v48 >= v45 && (int)v48 < right )
                      {
                        *(_WORD *)v50 = *(_WORD *)v51;
                        *(_BYTE *)(v50 + 2) = *((_BYTE *)v51 + 2);
                      }
                      v50 += 3LL;
                      ++v51;
                      LODWORD(v48) = v48 + 1;
                    }
                    while ( (int)v48 < v49 );
                    v47 = v54;
                  }
                  v46 = (struct _XRUNLEN *)((char *)v46 + 4 * *((int *)v46 + 1) + 8);
                }
                while ( v46 != a2 );
                v6 = v55;
                v5 = a3;
                v7 = a2;
                v43 = v53;
              }
            }
            if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
              right = rclBounds.right;
              v45 = rclBounds.left;
            }
          }
          while ( v43 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v9; v6 != a2; v6 = (struct _XRUNLEN *)((char *)v6 + 4 * *((int *)v6 + 1) + 8) )
      {
        v11 = *(int *)v6;
        v12 = (_WORD *)(v11 + v9 + 2 * v11);
        v13 = v12;
        if ( (int)v11 < (int)v11 + *((_DWORD *)v6 + 1) )
        {
          v14 = (_WORD *)((char *)v6 + 8);
          v15 = *((unsigned int *)v6 + 1);
          do
          {
            v16 = *v14;
            v14 += 2;
            *v13 = v16;
            v13 = (_WORD *)((char *)v13 + 3);
            *((_BYTE *)v13 - 1) = *((_BYTE *)v14 - 2);
            --v15;
          }
          while ( v15 );
        }
        v17 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v18 = (char *)v12 + *((int *)a3 + 22);
            memmove(v18, v12, 3 * *((_DWORD *)v6 + 1));
            ++v17;
            v12 = v18;
          }
          while ( v17 < *((_DWORD *)a1 + 1) );
          v9 = i;
        }
      }
    }
  }
}
