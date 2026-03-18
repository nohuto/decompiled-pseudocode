/*
 * XREFs of ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B5B20
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rdi
  __int64 v5; // rax
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // r14d
  __int64 v11; // r10
  int v12; // esi
  int v13; // edi
  unsigned __int8 v14; // bl
  char *v15; // rdx
  bool v16; // cl
  char v17; // r8
  _BYTE *v18; // rdx
  char v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r11d
  _BYTE *v23; // r11
  LONG v24; // esi
  struct _PLGRUN *v25; // r13
  bool v26; // cf
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // rbx
  int v30; // r9d
  char *v31; // rdi
  char v32; // r14
  int v33; // r12d
  char v34; // r13
  unsigned __int8 v35; // r8
  int v36; // r9d
  int v37; // r9d
  unsigned __int8 v38; // [rsp+30h] [rbp-50h]
  int v39; // [rsp+34h] [rbp-4Ch]
  LONG v40; // [rsp+38h] [rbp-48h]
  int v41; // [rsp+3Ch] [rbp-44h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v43[2]; // [rsp+50h] [rbp-30h] BYREF
  int v44; // [rsp+60h] [rbp-20h]
  __int64 v45; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v46; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v5 = *((unsigned int *)a3 + 16);
    v43[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v43[1] = v5 + v43[0] - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        v23 = byte_1C02EA258;
        do
        {
          v24 = *((_DWORD *)v8 + 1);
          v25 = (struct _PLGRUN *)((char *)v8 + 12);
          v26 = *(_DWORD *)v8 != 0;
          v40 = v24;
          v46 = (struct _PLGRUN *)((char *)v8 + 12);
          v44 = -v26;
          v27 = *((_QWORD *)a3 + 10) + v24 * *((_DWORD *)a3 + 22);
          v28 = *((_DWORD *)v8 + 2);
          v45 = v27;
          v41 = v28;
          if ( v28 )
          {
            do
            {
              if ( v24 < si128.top || v24 >= si128.bottom )
              {
                XCLIPOBJ::vFindScan(v4, &si128, v24);
                v27 = v45;
                v23 = byte_1C02EA258;
              }
              if ( v24 >= si128.top && v24 < si128.bottom )
              {
                v29 = *(int *)v25;
                v30 = *((_DWORD *)v25 + 1);
                v39 = v30;
                v31 = (char *)(v27 + (v29 >> 3));
                v38 = v23[*(_DWORD *)v25 & 7];
                if ( (int)v29 >= 0
                  && (int)v29 < *((_DWORD *)a3 + 14)
                  && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, v27 + (v29 >> 3)) )
                {
                  v32 = *v31;
                  v33 = 1;
                }
                else
                {
                  v33 = 0;
                  v32 = 0;
                }
                if ( v30 >= 0 )
                {
                  v34 = v44;
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, (unsigned __int64)v31) )
                      break;
                    if ( (int)v29 < si128.left || (int)v29 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v29);
                      v35 = v38;
                      v23 = byte_1C02EA258;
                      v36 = v39;
                    }
                    if ( (int)v29 >= si128.left && (int)v29 < si128.right )
                      v32 |= v35 & v34;
                    v37 = v36 - 1;
                    LODWORD(v29) = v29 + 1;
                    v38 = v35 >> 1;
                    v39 = v37;
                    if ( !(v35 >> 1) )
                    {
                      if ( v33 )
                        *v31 = v32;
                      ++v31;
                      v38 = v23[v29 & 7];
                      if ( (int)v29 >= 0
                        && (int)v29 < *((_DWORD *)a3 + 14)
                        && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, (unsigned __int64)v31) )
                      {
                        v32 = *v31;
                        v33 = 1;
                      }
                      else
                      {
                        v33 = 0;
                        v32 = 0;
                      }
                    }
                  }
                  while ( v37 >= 0 );
                  v24 = v40;
                  v25 = v46;
                  v27 = v45;
                }
                if ( v33 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, (unsigned __int64)v31) )
                  *v31 = v32;
                v4 = (XCLIPOBJ *)a4;
              }
              ++v24;
              v27 += *((int *)a3 + 22);
              v40 = v24;
              v25 = (struct _PLGRUN *)((char *)v25 + 8);
              v45 = v27;
              --v41;
              v46 = v25;
            }
            while ( v41 );
            v7 = a2;
          }
          v8 = v25;
        }
        while ( v25 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = -(*(_DWORD *)v8 != 0);
        v11 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1);
        if ( *((_DWORD *)v8 + 2) )
        {
          do
          {
            v12 = *(_DWORD *)v9;
            v13 = *((_DWORD *)v9 + 1);
            v14 = byte_1C02EA258[*(_DWORD *)v9 & 7];
            v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, v11 + ((__int64)*(int *)v9 >> 3));
            if ( v16 )
              v17 = *v15;
            else
              v17 = 0;
            while ( v13 >= 0 && v16 )
            {
              --v13;
              LOBYTE(v12) = v12 + 1;
              v17 |= v14 & v10;
              v14 >>= 1;
              if ( !v14 )
              {
                *v15 = v17;
                v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, (unsigned __int64)(v15 + 1));
                if ( v16 )
                  v17 = *v15;
                else
                  v17 = 0;
                v14 = byte_1C02EA258[v12 & 7];
              }
            }
            if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v43, (unsigned __int64)v15) )
              *v18 = v19;
            v9 = (struct _PLGRUN *)(v20 + 8);
            v11 = *((int *)a3 + 22) + v21;
          }
          while ( v22 != 1 );
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
