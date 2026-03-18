/*
 * XREFs of ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B4D60
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite24(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct SURFACE *v6; // rsi
  struct _PLGRUN *v7; // r15
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r10d
  int v11; // edi
  __int64 i; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r11d
  struct _PLGRUN *v16; // r12
  LONG v17; // edi
  __int64 v18; // r8
  __int16 v19; // r15
  __int64 v20; // rbx
  unsigned __int64 v21; // r14
  int v22; // r9d
  int v23; // [rsp+30h] [rbp-40h]
  int v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+34h] [rbp-3Ch]
  int v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h]
  struct _RECTL si128; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v29[3]; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v6 = a3;
    v29[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v29[1] = v5 + v29[0] - 3;
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
          v24 = *(_DWORD *)v8;
          v18 = *((_QWORD *)v6 + 10) + v17 * *((_DWORD *)v6 + 22);
          v27 = v18;
          v26 = *((_DWORD *)v8 + 2);
          if ( v26 )
          {
            v19 = *(_DWORD *)v8;
            do
            {
              if ( v17 < si128.top || v17 >= si128.bottom )
              {
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v17);
                v18 = v27;
              }
              if ( v17 >= si128.top && v17 < si128.bottom )
              {
                v20 = *(int *)v16;
                v25 = *((_DWORD *)v16 + 1);
                v21 = v20 + v18 + 2 * v20;
                if ( v25 )
                {
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v29, v21) )
                      break;
                    if ( (int)v20 < si128.left || (int)v20 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v20);
                      v22 = v25;
                    }
                    if ( (int)v20 >= si128.left && (int)v20 < si128.right )
                    {
                      *(_WORD *)v21 = v19;
                      *(_BYTE *)(v21 + 2) = BYTE2(v24);
                    }
                    LODWORD(v20) = v20 + 1;
                    v21 += 3LL;
                    v25 = v22 - 1;
                  }
                  while ( v22 != 1 );
                  v6 = a3;
                  v18 = v27;
                }
              }
              ++v17;
              v18 += *((int *)v6 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
              v27 = v18;
              --v26;
            }
            while ( v26 );
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
        v23 = *(_DWORD *)v8;
        for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v13 = i + 2LL * *(int *)v9 + *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v29, v13) )
                break;
              *(_WORD *)v14 = v11;
              *(_BYTE *)(v14 + 2) = BYTE2(v23);
              v13 = v14 + 3;
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
