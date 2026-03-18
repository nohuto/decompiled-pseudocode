/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002D078 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rbx
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  _BYTE *v13; // rdx
  char *v14; // rcx
  char v15; // al
  int v16; // r15d
  __int64 v17; // rax
  LONG top; // ecx
  unsigned __int64 v19; // xmm0_8
  LONG v20; // edi
  int v21; // edi
  __int64 v22; // r10
  LONG v23; // ecx
  int v24; // eax
  LONG v25; // r8d
  LONG left; // edx
  LONG v27; // eax
  _BYTE *v28; // rsi
  _BYTE *v29; // r8
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rdx
  int *v33; // rcx
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // r14
  size_t v37; // r12
  LONG v38; // edi
  int v39; // esi
  struct _XRUNLEN *v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // edx
  _BYTE *v44; // r12
  int *v45; // rcx
  int v46; // [rsp+30h] [rbp-30h]
  int v47; // [rsp+34h] [rbp-2Ch]
  __int64 v48; // [rsp+38h] [rbp-28h]
  int *v49; // [rsp+38h] [rbp-28h]
  __int64 v50; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF

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
        rclBounds = a4->rclBounds;
        v19 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        if ( top < SHIDWORD(v19) )
        {
          v20 = top + *((_DWORD *)a1 + 1);
          if ( v20 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v20 >= SHIDWORD(v19) )
              v20 = HIDWORD(v19);
            v21 = v20 - top;
            v22 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v48 = v22;
            while ( v4 != v7 )
            {
              v23 = *(_DWORD *)v4;
              v24 = *((_DWORD *)v4 + 1);
              v25 = v24 + *(_DWORD *)v4;
              if ( v25 >= rclBounds.left )
              {
                if ( v23 >= (int)v19 )
                  return;
                left = rclBounds.left;
                v27 = v19;
                if ( v23 >= rclBounds.left )
                  left = *(_DWORD *)v4;
                if ( v25 < (int)v19 )
                  v27 = v25;
                v28 = (_BYTE *)(v22 + left);
                v29 = v28;
                v30 = v27 - left;
                if ( left < v27 )
                {
                  v31 = left - v23;
                  v32 = v30;
                  v33 = (int *)((char *)v4 + 4 * v31 + 8);
                  do
                  {
                    v34 = *(_BYTE *)v33++;
                    *v29++ = v34;
                    --v32;
                  }
                  while ( v32 );
                }
                if ( v21 > 1 )
                {
                  v35 = *((int *)v6 + 22);
                  v36 = (unsigned int)(v21 - 1);
                  v37 = v30;
                  do
                  {
                    memmove(&v28[v35], v28, v37);
                    v35 = *((int *)v6 + 22);
                    v28 += v35;
                    --v36;
                  }
                  while ( v36 );
                  v7 = a2;
                  v22 = v48;
                }
                v24 = *((_DWORD *)v4 + 1);
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v24 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v38 = *(_DWORD *)a1;
        v39 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v38);
        while ( v39 )
        {
          v47 = --v39;
          if ( v38 >= rclBounds.top && v38 < rclBounds.bottom )
          {
            v40 = v4;
            v41 = *((_QWORD *)v6 + 10) + v38 * *((_DWORD *)v6 + 22);
            v50 = v41;
            if ( v4 != v7 )
            {
              do
              {
                v42 = *(int *)v40;
                v43 = v42 + *((_DWORD *)v40 + 1);
                v46 = v43;
                v44 = (_BYTE *)(v41 + v42);
                if ( (int)v42 < v43 )
                {
                  v45 = (int *)((char *)v40 + 8);
                  v49 = (int *)((char *)v40 + 8);
                  do
                  {
                    if ( (int)v42 < rclBounds.left || (int)v42 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v42);
                      v45 = v49;
                      v43 = v46;
                    }
                    if ( (int)v42 >= rclBounds.left && (int)v42 < rclBounds.right )
                      *v44 = *(_BYTE *)v45;
                    ++v45;
                    ++v44;
                    LODWORD(v42) = v42 + 1;
                    v49 = v45;
                  }
                  while ( (int)v42 < v43 );
                  v41 = v50;
                }
                v40 = (struct _XRUNLEN *)((char *)v40 + 4 * *((int *)v40 + 1) + 8);
              }
              while ( v40 != a2 );
              v6 = a3;
              v7 = a2;
              v39 = v47;
            }
          }
          if ( ++v38 < rclBounds.top || v38 >= rclBounds.bottom )
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
        v11 = *((unsigned int *)v4 + 1);
        v12 = (char *)(v9 + v10);
        v13 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (char *)v4 + 8;
          do
          {
            v15 = *v14;
            v14 += 4;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)v6 + 22);
          do
          {
            memmove(&v12[v17], v12, *((int *)v4 + 1));
            v17 = *((int *)v6 + 22);
            ++v16;
            v12 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
