/*
 * XREFs of ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B5180
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite4(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct SURFACE *v6; // r13
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // eax
  int v11; // r14d
  int v12; // ebx
  __int64 k; // r10
  int v14; // r15d
  unsigned __int64 m; // r9
  _BYTE *v16; // r9
  char v17; // r11
  _BYTE *v18; // rax
  LONG v19; // r10d
  struct _PLGRUN *v20; // r8
  int v21; // r15d
  int v22; // ebx
  __int64 i; // r14
  int v24; // r12d
  unsigned __int64 j; // rdx
  _BYTE *v26; // rdx
  char v27; // r9
  LONG v28; // r11d
  _BYTE *v29; // rax
  LONG v30; // esi
  LONG *v31; // r8
  __int64 v32; // r9
  int v33; // eax
  LONG v34; // ebx
  _BYTE *v35; // r12
  char v36; // r15
  int v37; // r10d
  int v38; // r10d
  _BYTE *v39; // rax
  int v40; // [rsp+30h] [rbp-40h]
  int v41; // [rsp+34h] [rbp-3Ch]
  int v42; // [rsp+38h] [rbp-38h]
  __int64 v43; // [rsp+40h] [rbp-30h]
  LONG *v44; // [rsp+48h] [rbp-28h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v46[2]; // [rsp+60h] [rbp-10h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v6 = a3;
    v46[0] = *((_QWORD *)a3 + 9);
    v8 = a1;
    v46[1] = v5 + v46[0] - 1;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        rclBounds = a4->rclBounds;
        if ( a1 != a2 )
        {
          do
          {
            v19 = *((_DWORD *)v8 + 1);
            v20 = (struct _PLGRUN *)((char *)v8 + 12);
            v21 = *(_DWORD *)v8 | (16 * *(_DWORD *)v8);
            v22 = *((_DWORD *)v8 + 2);
            for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v19; v22; --v22 )
            {
              if ( v19 >= rclBounds.top && v19 < rclBounds.bottom )
              {
                v24 = *((_DWORD *)v20 + 1);
                for ( j = i + ((__int64)*(int *)v20 >> 1); v24; --v24 )
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, j) )
                    break;
                  if ( v28 >= rclBounds.left && v28 < rclBounds.right )
                    *v26 = v27 & v21 | *v26 & ~v27;
                  v29 = v26 + 1;
                  if ( ~v27 != 0xF0 )
                    v29 = v26;
                  j = (unsigned __int64)v29;
                }
              }
              ++v19;
              i += *((int *)v6 + 22);
              v20 = (struct _PLGRUN *)((char *)v20 + 8);
            }
            v8 = v20;
          }
          while ( v20 != a2 );
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        if ( v8 != a2 )
        {
          do
          {
            v30 = *((_DWORD *)v8 + 1);
            v31 = (LONG *)((char *)v8 + 12);
            v42 = *(_DWORD *)v8 | (16 * *(_DWORD *)v8);
            v32 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v30;
            v33 = *((_DWORD *)v8 + 2);
            while ( 1 )
            {
              v41 = v33;
              v44 = v31;
              v43 = v32;
              if ( !v33 )
                break;
              if ( v30 < rclBounds.top || v30 >= rclBounds.bottom )
              {
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v30);
                v32 = v43;
                v31 = v44;
              }
              if ( v30 >= rclBounds.top && v30 < rclBounds.bottom )
              {
                v34 = *v31;
                v35 = (_BYTE *)(v32 + ((__int64)*v31 >> 1));
                v40 = v31[1];
                v36 = (*v31 & 1) != 0 ? 15 : -16;
                if ( v40 )
                {
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, (unsigned __int64)v35) )
                      break;
                    if ( v34 < rclBounds.left || v34 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v34);
                      v37 = v40;
                    }
                    if ( v34 >= rclBounds.left && v34 < rclBounds.right )
                      *v35 = v36 & v42 | *v35 & ~v36;
                    v38 = v37 - 1;
                    v39 = v35 + 1;
                    ++v34;
                    v40 = v38;
                    v36 = ~v36;
                    if ( v36 != -16 )
                      v39 = v35;
                    v35 = v39;
                  }
                  while ( v38 );
                  v6 = a3;
                  v31 = v44;
                  v32 = v43;
                }
              }
              ++v30;
              v32 += *((int *)v6 + 22);
              v33 = v41 - 1;
              v31 += 2;
            }
            v8 = (struct _PLGRUN *)v31;
          }
          while ( v31 != (LONG *)a2 );
        }
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v6 + 22) * *((_DWORD *)v8 + 1);
        v11 = *(_DWORD *)v8 | (16 * *(_DWORD *)v8);
        v12 = *((_DWORD *)v8 + 2);
        for ( k = *((_QWORD *)v6 + 10) + v10; v12; --v12 )
        {
          v14 = *((_DWORD *)v9 + 1);
          for ( m = k + ((__int64)*(int *)v9 >> 1); v14; --v14 )
          {
            if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v46, m) )
              break;
            *v16 = v17 & v11 | ~v17 & *v16;
            v18 = v16 + 1;
            if ( ~v17 != 0xF0 )
              v18 = v16;
            m = (unsigned __int64)v18;
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          k += *((int *)v6 + 22);
        }
        v8 = v9;
      }
      while ( v9 != a2 );
    }
  }
}
