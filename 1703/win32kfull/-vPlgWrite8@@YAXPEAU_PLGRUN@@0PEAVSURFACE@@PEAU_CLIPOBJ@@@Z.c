/*
 * XREFs of ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B5500
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite8(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r13
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r10d
  int v11; // edi
  __int64 k; // r9
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rdx
  int v15; // r11d
  struct _PLGRUN *v16; // r8
  LONG v17; // r10d
  int v18; // edi
  int v19; // r14d
  __int64 i; // r11
  int v21; // ebx
  unsigned __int64 j; // rdx
  _BYTE *v23; // rdx
  LONG v24; // r9d
  struct _PLGRUN *v25; // r15
  LONG v26; // edi
  __int64 v27; // r8
  char v28; // r13
  __int64 v29; // rbx
  _BYTE *v30; // r12
  int v31; // r9d
  int v32; // [rsp+30h] [rbp-30h]
  int v33; // [rsp+34h] [rbp-2Ch]
  __int64 v34; // [rsp+38h] [rbp-28h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v36[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v36[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v36[1] = v5 + v36[0] - 1;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        rclBounds = a4->rclBounds;
        if ( a1 != a2 )
        {
          do
          {
            v16 = (struct _PLGRUN *)((char *)v8 + 12);
            v17 = *((_DWORD *)v8 + 1);
            v18 = *((_DWORD *)v8 + 2);
            v19 = *(_DWORD *)v8;
            for ( i = *((_QWORD *)a3 + 10) + v17 * *((_DWORD *)a3 + 22); v18; --v18 )
            {
              if ( v17 >= rclBounds.top && v17 < rclBounds.bottom )
              {
                v21 = *((_DWORD *)v16 + 1);
                for ( j = i + *(int *)v16; v21; --v21 )
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v36, j) )
                    break;
                  if ( v24 >= rclBounds.left && v24 < rclBounds.right )
                    *v23 = v19;
                  j = (unsigned __int64)(v23 + 1);
                }
              }
              ++v17;
              i += *((int *)a3 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
            }
            v8 = v16;
          }
          while ( v16 != v7 );
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        if ( v8 != v7 )
        {
          do
          {
            v25 = (struct _PLGRUN *)((char *)v8 + 12);
            v26 = *((_DWORD *)v8 + 1);
            v27 = *((_QWORD *)a3 + 10) + v26 * *((_DWORD *)a3 + 22);
            v34 = v27;
            v33 = *((_DWORD *)v8 + 2);
            if ( v33 )
            {
              v28 = *(_DWORD *)v8;
              do
              {
                if ( v26 < rclBounds.top || v26 >= rclBounds.bottom )
                {
                  XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v26);
                  v27 = v34;
                }
                if ( v26 >= rclBounds.top && v26 < rclBounds.bottom )
                {
                  v29 = *(int *)v25;
                  v32 = *((_DWORD *)v25 + 1);
                  v30 = (_BYTE *)(v27 + v29);
                  if ( v32 )
                  {
                    do
                    {
                      if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v36, (unsigned __int64)v30) )
                        break;
                      if ( (int)v29 < rclBounds.left || (int)v29 >= rclBounds.right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v29);
                        v31 = v32;
                      }
                      if ( (int)v29 >= rclBounds.left && (int)v29 < rclBounds.right )
                        *v30 = v28;
                      LODWORD(v29) = v29 + 1;
                      ++v30;
                      v32 = v31 - 1;
                    }
                    while ( v31 != 1 );
                    v27 = v34;
                  }
                }
                ++v26;
                v27 += *((int *)a3 + 22);
                v25 = (struct _PLGRUN *)((char *)v25 + 8);
                v34 = v27;
                --v33;
              }
              while ( v33 );
              v7 = a2;
            }
            v8 = v25;
          }
          while ( v25 != v7 );
        }
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 2);
        v11 = *(_DWORD *)v8;
        for ( k = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v13 = k + *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v36, v13) )
                break;
              *v14 = v11;
              v13 = (unsigned __int64)(v14 + 1);
            }
            while ( v15 != 1 );
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          k += *((int *)a3 + 22);
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
