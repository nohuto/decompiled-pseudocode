/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C009A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rdi
  struct SURFACE *v6; // r14
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  _DWORD *v11; // r10
  _DWORD *v12; // r9
  int *v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r15d
  char *v17; // rbx
  LONG top; // ecx
  int v19; // esi
  LONG v20; // esi
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r10d
  LONG left; // r15d
  int v24; // esi
  __int64 v25; // r11
  LONG v26; // edx
  __int64 v27; // rax
  LONG v28; // r9d
  LONG v29; // ecx
  LONG v30; // r8d
  int v31; // r10d
  _DWORD *v32; // r11
  _DWORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  int v37; // eax
  __int64 v38; // r13
  size_t v39; // r12
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r13d
  __int64 v43; // rcx
  struct _XRUNLEN *v44; // r14
  __int64 v45; // rsi
  int v46; // r8d
  int *v47; // rdx
  int *v48; // rcx
  __int64 v49; // [rsp+30h] [rbp-30h]
  int *v50; // [rsp+30h] [rbp-30h]
  int *v51; // [rsp+38h] [rbp-28h]
  __int64 i; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v55; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        v19 = *((_DWORD *)a1 + 1);
        rclBounds = a4->rclBounds;
        v20 = top + v19;
        v21 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v22 = v21;
        if ( top < SHIDWORD(v21) )
        {
          left = rclBounds.left;
          if ( v20 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v20 >= SHIDWORD(v21) )
              v20 = HIDWORD(v21);
            v24 = v20 - top;
            v25 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v49 = v25;
            while ( v4 != v7 )
            {
              v26 = *(_DWORD *)v4;
              v27 = *((int *)v4 + 1);
              v28 = v27 + *(_DWORD *)v4;
              if ( v28 >= left )
              {
                if ( v26 >= v22 )
                  return;
                v29 = v22;
                v30 = left;
                if ( v26 >= left )
                  v30 = *(_DWORD *)v4;
                if ( v28 < v22 )
                  v29 = v27 + *(_DWORD *)v4;
                v31 = v29 - v30;
                v32 = (_DWORD *)(v25 + 4LL * v30);
                v33 = v32;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *v36++;
                    *v33++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = (unsigned int)(v24 - 1);
                  v39 = 4 * v31;
                  do
                  {
                    v40 = (char *)v32 + *((int *)v6 + 22);
                    memmove(v40, v32, v39);
                    v32 = v40;
                    --v38;
                  }
                  while ( v38 );
                  v7 = a2;
                }
                v27 = *((int *)v4 + 1);
                v22 = v21;
                v25 = v49;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v27 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
            v44 = v4;
            for ( i = v43; v44 != v7; v44 = (struct _XRUNLEN *)((char *)v44 + 4 * *((int *)v44 + 1) + 8) )
            {
              v45 = *(int *)v44;
              v46 = v45 + *((_DWORD *)v44 + 1);
              v55 = v46;
              v47 = (int *)(v43 + 4 * v45);
              v50 = v47;
              if ( (int)v45 < v46 )
              {
                v48 = (int *)((char *)v44 + 8);
                v51 = (int *)((char *)v44 + 8);
                do
                {
                  if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                    v48 = v51;
                    v46 = v55;
                    v47 = v50;
                  }
                  if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                    *v47 = *v48;
                  ++v47;
                  ++v48;
                  LODWORD(v45) = v45 + 1;
                  v50 = v47;
                  v51 = v48;
                }
                while ( (int)v45 < v46 );
                v43 = i;
              }
            }
            v6 = a3;
          }
          if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            goto LABEL_56;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != v7 )
      {
        v10 = *(int *)v4;
        v11 = (_DWORD *)(v9 + 4 * v10);
        v12 = v11;
        if ( (int)v10 < (int)v10 + *((_DWORD *)v4 + 1) )
        {
          v13 = (int *)((char *)v4 + 8);
          v14 = *((unsigned int *)v4 + 1);
          do
          {
            v15 = *v13++;
            *v12++ = v15;
            --v14;
          }
          while ( v14 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v17 = (char *)v11 + *((int *)a3 + 22);
            memmove(v17, v11, 4 * *((_DWORD *)v4 + 1));
            ++v16;
            v11 = v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
          v7 = a2;
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
