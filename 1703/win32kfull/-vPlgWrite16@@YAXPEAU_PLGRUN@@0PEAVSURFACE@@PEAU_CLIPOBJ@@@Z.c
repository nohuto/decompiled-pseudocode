/*
 * XREFs of ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B47F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite16(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // r12
  __int64 v5; // rax
  struct SURFACE *v6; // rsi
  struct _PLGRUN *v7; // r15
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r11d
  int v11; // edi
  __int64 i; // r9
  unsigned __int64 v13; // rdx
  _WORD *v14; // rdx
  int v15; // r10d
  struct _PLGRUN *v16; // r14
  LONG v17; // edi
  __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // r13d
  _WORD *v21; // r12
  int v22; // [rsp+30h] [rbp-30h]
  int v23; // [rsp+34h] [rbp-2Ch]
  __int64 v24; // [rsp+38h] [rbp-28h]
  struct _RECTL si128; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v26[2]; // [rsp+50h] [rbp-10h] BYREF

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v5 = *((unsigned int *)a3 + 16);
    v6 = a3;
    v26[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v26[1] = v5 + v26[0] - 2;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v16 = (struct _PLGRUN *)((char *)v8 + 12);
          v17 = *((_DWORD *)v8 + 1);
          v23 = *(_DWORD *)v8;
          v18 = *((_QWORD *)v6 + 10) + v17 * *((_DWORD *)v6 + 22);
          v24 = v18;
          v22 = *((_DWORD *)v8 + 2);
          if ( v22 )
          {
            do
            {
              if ( v17 < si128.top || v17 >= si128.bottom )
              {
                XCLIPOBJ::vFindScan(v4, &si128, v17);
                v18 = v24;
              }
              if ( v17 >= si128.top && v17 < si128.bottom )
              {
                v19 = *(int *)v16;
                v20 = *((_DWORD *)v16 + 1);
                v21 = (_WORD *)(v18 + 2 * v19);
                if ( v20 )
                {
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, (unsigned __int64)v21) )
                      break;
                    if ( (int)v19 < si128.left || (int)v19 >= si128.right )
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v19);
                    if ( (int)v19 >= si128.left && (int)v19 < si128.right )
                      *v21 = v23;
                    LODWORD(v19) = v19 + 1;
                    ++v21;
                    --v20;
                  }
                  while ( v20 );
                  v6 = a3;
                  v18 = v24;
                }
                v4 = (XCLIPOBJ *)a4;
              }
              ++v17;
              v18 += *((int *)v6 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
              v24 = v18;
              --v22;
            }
            while ( v22 );
            v7 = a2;
          }
          v8 = v16;
        }
        while ( v16 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 2);
        v11 = *(_DWORD *)v8;
        for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v13 = i + 2LL * *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, v13) )
                break;
              *v14 = v11;
              v13 = (unsigned __int64)(v14 + 1);
            }
            while ( v15 != 1 );
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          i += *((int *)v6 + 22);
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
