/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E1CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  LONG *v4; // rdi
  struct SURFACE *v6; // r14
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r10d
  _DWORD *v12; // r9
  _DWORD *v13; // r8
  int *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // r15d
  char *v18; // rbx
  LONG top; // ecx
  unsigned __int64 v20; // xmm0_8
  LONG v21; // esi
  int v22; // esi
  __int64 v23; // r11
  LONG v24; // edx
  int v25; // eax
  LONG v26; // r9d
  LONG left; // r8d
  LONG v28; // ecx
  int v29; // r10d
  _DWORD *v30; // r11
  _DWORD *v31; // r9
  int v32; // r8d
  __int64 v33; // rdx
  int *v34; // rcx
  int v35; // eax
  __int64 v36; // r15
  size_t v37; // r12
  char *v38; // rbx
  LONG v39; // ebx
  int v40; // r13d
  __int64 v41; // rcx
  struct _XRUNLEN *v42; // r14
  __int64 v43; // rsi
  int v44; // r8d
  int *v45; // rdx
  int *v46; // rcx
  int *v47; // [rsp+30h] [rbp-30h]
  __int64 v48; // [rsp+38h] [rbp-28h]
  int *v49; // [rsp+38h] [rbp-28h]
  __int64 v50; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v53; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (LONG *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v20 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        if ( top < SHIDWORD(v20) )
        {
          v21 = top + *((_DWORD *)a1 + 1);
          if ( v21 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v21 >= SHIDWORD(v20) )
              v21 = HIDWORD(v20);
            v22 = v21 - top;
            v23 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v48 = v23;
            while ( v4 != (LONG *)v7 )
            {
              v24 = *v4;
              v25 = v4[1];
              v26 = v25 + *v4;
              if ( v26 >= rclBounds.left )
              {
                if ( v24 >= (int)v20 )
                  return;
                left = rclBounds.left;
                v28 = v20;
                if ( v24 >= rclBounds.left )
                  left = *v4;
                if ( v26 < (int)v20 )
                  v28 = v25 + *v4;
                v29 = v28 - left;
                v30 = (_DWORD *)(v23 + 4LL * left);
                v31 = v30;
                if ( left < v28 )
                {
                  v32 = left - v24;
                  v33 = v29;
                  v34 = &v4[v32 + 2];
                  do
                  {
                    v35 = *v34++;
                    *v31++ = v35;
                    --v33;
                  }
                  while ( v33 );
                }
                if ( v22 > 1 )
                {
                  v36 = (unsigned int)(v22 - 1);
                  v37 = 4 * v29;
                  do
                  {
                    v38 = (char *)v30 + *((int *)v6 + 22);
                    memmove(v38, v30, v37);
                    v30 = v38;
                    --v36;
                  }
                  while ( v36 );
                  v7 = a2;
                }
                v25 = v4[1];
                v23 = v48;
              }
              v4 += v25 + 2;
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v39 = *(_DWORD *)a1;
        v40 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v39);
        while ( v40 )
        {
          --v40;
          if ( v39 >= rclBounds.top && v39 < rclBounds.bottom )
          {
            v41 = *((_QWORD *)v6 + 10) + v39 * *((_DWORD *)v6 + 22);
            v42 = (struct _XRUNLEN *)v4;
            v50 = v41;
            if ( v4 != (LONG *)v7 )
            {
              do
              {
                v43 = *(int *)v42;
                v44 = v43 + *((_DWORD *)v42 + 1);
                v53 = v44;
                v45 = (int *)(v41 + 4 * v43);
                v47 = v45;
                if ( (int)v43 < v44 )
                {
                  v46 = (int *)((char *)v42 + 8);
                  v49 = (int *)((char *)v42 + 8);
                  do
                  {
                    if ( (int)v43 < rclBounds.left || (int)v43 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v43);
                      v46 = v49;
                      v44 = v53;
                      v45 = v47;
                    }
                    if ( (int)v43 >= rclBounds.left && (int)v43 < rclBounds.right )
                      *v45 = *v46;
                    ++v45;
                    ++v46;
                    LODWORD(v43) = v43 + 1;
                    v47 = v45;
                    v49 = v46;
                  }
                  while ( (int)v43 < v44 );
                  v41 = v50;
                }
                v42 = (struct _XRUNLEN *)((char *)v42 + 4 * *((int *)v42 + 1) + 8);
              }
              while ( v42 != v7 );
            }
            v6 = a3;
          }
          if ( ++v39 < rclBounds.top || v39 >= rclBounds.bottom )
            goto LABEL_56;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != (LONG *)v7 )
      {
        v10 = *v4;
        v11 = v4[1];
        v12 = (_DWORD *)(v9 + 4 * v10);
        v13 = v12;
        if ( (int)v10 < (int)(v11 + v10) )
        {
          v14 = v4 + 2;
          v15 = v11;
          do
          {
            v16 = *v14++;
            *v13++ = v16;
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
            memmove(v18, v12, 4 * v4[1]);
            ++v17;
            v12 = v18;
          }
          while ( v17 < *((_DWORD *)a1 + 1) );
          v7 = a2;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
