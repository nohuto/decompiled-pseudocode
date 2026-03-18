/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rbx
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  char *v11; // rdi
  _BYTE *v12; // r9
  char *v13; // r8
  __int64 v14; // rcx
  char v15; // al
  int v16; // r15d
  __int64 v17; // rax
  LONG top; // ecx
  int v19; // edi
  LONG v20; // edi
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r9d
  LONG left; // r15d
  int v24; // edi
  __int64 v25; // r10
  LONG v26; // ecx
  __int64 v27; // rax
  LONG v28; // r8d
  LONG v29; // eax
  LONG v30; // edx
  _BYTE *v31; // rsi
  _BYTE *v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rcx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // r14
  size_t v40; // r12
  LONG v41; // edi
  int v42; // esi
  struct _XRUNLEN *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rsi
  int v46; // edx
  _BYTE *v47; // r12
  int *v48; // rcx
  int v49; // [rsp+30h] [rbp-30h]
  int v50; // [rsp+38h] [rbp-28h]
  __int64 v51; // [rsp+40h] [rbp-20h]
  int *v52; // [rsp+40h] [rbp-20h]
  __int64 v53; // [rsp+48h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-10h] BYREF

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
            v51 = v25;
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
                  v29 = v28;
                v31 = (_BYTE *)(v25 + v30);
                v32 = v31;
                v33 = v29 - v30;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v33;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_BYTE *)v36++;
                    *v32++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = *((int *)v6 + 22);
                  v39 = (unsigned int)(v24 - 1);
                  v40 = v33;
                  do
                  {
                    memmove(&v31[v38], v31, v40);
                    v38 = *((int *)v6 + 22);
                    v31 += v38;
                    --v39;
                  }
                  while ( v39 );
                  v7 = a2;
                  v25 = v51;
                }
                v27 = *((int *)v4 + 1);
                v22 = v21;
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
          v50 = --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = v4;
            v44 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
            v53 = v44;
            if ( v4 != v7 )
            {
              do
              {
                v45 = *(int *)v43;
                v46 = v45 + *((_DWORD *)v43 + 1);
                v49 = v46;
                v47 = (_BYTE *)(v44 + v45);
                if ( (int)v45 < v46 )
                {
                  v48 = (int *)((char *)v43 + 8);
                  v52 = (int *)((char *)v43 + 8);
                  do
                  {
                    if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                      v48 = v52;
                      v46 = v49;
                    }
                    if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                      *v47 = *(_BYTE *)v48;
                    ++v48;
                    ++v47;
                    LODWORD(v45) = v45 + 1;
                    v52 = v48;
                  }
                  while ( (int)v45 < v46 );
                  v44 = v53;
                }
                v43 = (struct _XRUNLEN *)((char *)v43 + 4 * *((int *)v43 + 1) + 8);
              }
              while ( v43 != a2 );
              v6 = a3;
              v7 = a2;
              v42 = v50;
            }
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
        v11 = (char *)(v9 + v10);
        v12 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v10 + *((_DWORD *)v4 + 1) )
        {
          v13 = (char *)v4 + 8;
          v14 = *((unsigned int *)v4 + 1);
          do
          {
            v15 = *v13;
            v13 += 4;
            *v12++ = v15;
            --v14;
          }
          while ( v14 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)v6 + 22);
          do
          {
            memmove(&v11[v17], v11, *((int *)v4 + 1));
            v17 = *((int *)v6 + 22);
            ++v16;
            v11 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
