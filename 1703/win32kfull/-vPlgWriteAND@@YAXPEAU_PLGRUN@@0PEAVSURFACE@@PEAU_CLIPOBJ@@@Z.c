/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B57A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rdi
  __int64 v5; // rax
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // eax
  int v11; // ebx
  __int64 i; // r10
  int v13; // r15d
  int v14; // esi
  unsigned __int8 v15; // di
  char *v16; // rdx
  bool v17; // cl
  char v18; // r11
  char v19; // r8
  _BYTE *v20; // rdx
  char v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  _BYTE *v24; // r11
  LONG v25; // esi
  struct _PLGRUN *v26; // r13
  bool v27; // cf
  __int64 v28; // r10
  int v29; // eax
  __int64 v30; // rbx
  int v31; // r9d
  char *v32; // rdi
  char v33; // r15
  int v34; // r12d
  char v35; // r13
  unsigned __int8 v36; // r8
  int v37; // r9d
  int v38; // r9d
  unsigned __int8 v39; // [rsp+30h] [rbp-50h]
  int v40; // [rsp+34h] [rbp-4Ch]
  LONG v41; // [rsp+38h] [rbp-48h]
  int v42; // [rsp+3Ch] [rbp-44h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v44[2]; // [rsp+50h] [rbp-30h] BYREF
  int v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v47; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v5 = *((unsigned int *)a3 + 16);
    v44[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v44[1] = v5 + v44[0] - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        v24 = byte_1C02EA258;
        do
        {
          v25 = *((_DWORD *)v8 + 1);
          v26 = (struct _PLGRUN *)((char *)v8 + 12);
          v27 = *(_DWORD *)v8 != 0;
          v41 = v25;
          v47 = (struct _PLGRUN *)((char *)v8 + 12);
          v45 = v27 - 1;
          v28 = *((_QWORD *)a3 + 10) + v25 * *((_DWORD *)a3 + 22);
          v29 = *((_DWORD *)v8 + 2);
          v46 = v28;
          v42 = v29;
          if ( v29 )
          {
            do
            {
              if ( v25 < si128.top || v25 >= si128.bottom )
              {
                XCLIPOBJ::vFindScan(v4, &si128, v25);
                v28 = v46;
                v24 = byte_1C02EA258;
              }
              if ( v25 >= si128.top && v25 < si128.bottom )
              {
                v30 = *(int *)v26;
                v31 = *((_DWORD *)v26 + 1);
                v40 = v31;
                v32 = (char *)(v28 + (v30 >> 3));
                v39 = v24[*(_DWORD *)v26 & 7];
                if ( (int)v30 >= 0
                  && (int)v30 < *((_DWORD *)a3 + 14)
                  && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, v28 + (v30 >> 3)) )
                {
                  v33 = *v32;
                  v34 = 1;
                }
                else
                {
                  v34 = 0;
                  v33 = 0;
                }
                if ( v31 >= 0 )
                {
                  v35 = v45;
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v32) )
                      break;
                    if ( (int)v30 < si128.left || (int)v30 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v30);
                      v36 = v39;
                      v24 = byte_1C02EA258;
                      v37 = v40;
                    }
                    if ( (int)v30 >= si128.left && (int)v30 < si128.right )
                      v33 &= ~(v36 & v35);
                    v38 = v37 - 1;
                    LODWORD(v30) = v30 + 1;
                    v39 = v36 >> 1;
                    v40 = v38;
                    if ( !(v36 >> 1) )
                    {
                      if ( v34 )
                        *v32 = v33;
                      ++v32;
                      v39 = v24[v30 & 7];
                      if ( (int)v30 >= 0
                        && (int)v30 < *((_DWORD *)a3 + 14)
                        && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v32) )
                      {
                        v33 = *v32;
                        v34 = 1;
                      }
                      else
                      {
                        v34 = 0;
                        v33 = 0;
                      }
                    }
                  }
                  while ( v38 >= 0 );
                  v25 = v41;
                  v26 = v47;
                  v28 = v46;
                }
                if ( v34 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v32) )
                  *v32 = v33;
                v4 = (XCLIPOBJ *)a4;
              }
              ++v25;
              v28 += *((int *)a3 + 22);
              v41 = v25;
              v26 = (struct _PLGRUN *)((char *)v26 + 8);
              v46 = v28;
              --v42;
              v47 = v26;
            }
            while ( v42 );
            v7 = a2;
          }
          v8 = v26;
        }
        while ( v26 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        for ( i = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v10; v11; --v11 )
        {
          v13 = *(_DWORD *)v9;
          v14 = *((_DWORD *)v9 + 1);
          v15 = byte_1C02EA258[*(_DWORD *)v9 & 7];
          v17 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, i + ((__int64)*(int *)v9 >> 3));
          if ( v17 )
            v19 = *v16;
          else
            v19 = 0;
          while ( v14 >= 0 && v17 )
          {
            --v14;
            LOBYTE(v13) = v13 + 1;
            v19 &= ~(v15 & v18);
            v15 >>= 1;
            if ( !v15 )
            {
              *v16 = v19;
              v17 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)(v16 + 1));
              if ( v17 )
                v19 = *v16;
              else
                v19 = 0;
              v15 = byte_1C02EA258[v13 & 7];
            }
          }
          if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v16) )
            *v20 = v21;
          v9 = (struct _PLGRUN *)(v22 + 8);
          i = *((int *)a3 + 22) + v23;
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
