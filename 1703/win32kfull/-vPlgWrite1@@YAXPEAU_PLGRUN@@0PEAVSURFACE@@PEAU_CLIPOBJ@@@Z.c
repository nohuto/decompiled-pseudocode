/*
 * XREFs of ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02B49F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0075EB8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0075F20 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C013FF94 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite1(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rdi
  __int64 v5; // rax
  struct _PLGRUN *v7; // r13
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // r12d
  __int64 v11; // r10
  int v12; // r15d
  int v13; // edi
  unsigned __int8 v14; // bl
  char *v15; // rdx
  bool v16; // si
  char v17; // r8
  _BYTE *v18; // rdx
  char v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r11d
  _BYTE *v23; // r11
  struct _PLGRUN *v24; // r13
  LONG v25; // esi
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rbx
  int v29; // r9d
  char *v30; // rdi
  char v31; // r15
  int v32; // r12d
  char v33; // r13
  unsigned __int8 v34; // r8
  int v35; // r9d
  int v36; // r9d
  unsigned __int8 v37; // [rsp+30h] [rbp-50h]
  int v38; // [rsp+34h] [rbp-4Ch]
  int v39; // [rsp+3Ch] [rbp-44h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v41[2]; // [rsp+50h] [rbp-30h] BYREF
  int v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v44; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = (XCLIPOBJ *)a4;
    v5 = *((unsigned int *)a3 + 16);
    v41[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v41[1] = v5 + v41[0] - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        v23 = byte_1C02EA258;
        do
        {
          v24 = (struct _PLGRUN *)((char *)v8 + 12);
          v25 = *((_DWORD *)v8 + 1);
          v42 = -(*(_DWORD *)v8 != 0);
          v26 = *((_QWORD *)a3 + 10) + v25 * *((_DWORD *)a3 + 22);
          v27 = *((_DWORD *)v8 + 2);
          while ( 1 )
          {
            v39 = v27;
            v44 = v24;
            v43 = v26;
            if ( !v27 )
              break;
            if ( v25 < si128.top || v25 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v4, &si128, v25);
              v26 = v43;
              v23 = byte_1C02EA258;
            }
            if ( v25 >= si128.top && v25 < si128.bottom )
            {
              v28 = *(int *)v24;
              v29 = *((_DWORD *)v24 + 1);
              v38 = v29;
              v30 = (char *)(v26 + (v28 >> 3));
              v37 = v23[*(_DWORD *)v24 & 7];
              if ( (int)v28 >= 0
                && (int)v28 < *((_DWORD *)a3 + 14)
                && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, v26 + (v28 >> 3)) )
              {
                v31 = *v30;
                v32 = 1;
              }
              else
              {
                v32 = 0;
                v31 = 0;
              }
              if ( v29 )
              {
                v33 = v42;
                do
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, (unsigned __int64)v30) )
                    break;
                  if ( (int)v28 < si128.left || (int)v28 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v28);
                    v34 = v37;
                    v23 = byte_1C02EA258;
                    v35 = v38;
                  }
                  if ( (int)v28 >= si128.left && (int)v28 < si128.right )
                    v31 = v34 & v33 | ~v34 & v31;
                  v36 = v35 - 1;
                  LODWORD(v28) = v28 + 1;
                  v37 = v34 >> 1;
                  v38 = v36;
                  if ( !(v34 >> 1) )
                  {
                    if ( v32 )
                      *v30 = v31;
                    ++v30;
                    v37 = v23[v28 & 7];
                    if ( (int)v28 >= 0
                      && (int)v28 < *((_DWORD *)a3 + 14)
                      && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, (unsigned __int64)v30) )
                    {
                      v31 = *v30;
                      v32 = 1;
                    }
                    else
                    {
                      v32 = 0;
                      v31 = 0;
                    }
                  }
                }
                while ( v36 );
                v24 = v44;
                v26 = v43;
              }
              if ( v32 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, (unsigned __int64)v30) )
                *v30 = v31;
              v4 = (XCLIPOBJ *)a4;
            }
            ++v25;
            v26 += *((int *)a3 + 22);
            v27 = v39 - 1;
            v24 = (struct _PLGRUN *)((char *)v24 + 8);
          }
          v8 = v24;
        }
        while ( v24 != a2 );
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
            v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, v11 + ((__int64)*(int *)v9 >> 3));
            if ( v16 )
              v17 = *v15;
            else
              v17 = 0;
            while ( v13 && v16 )
            {
              --v13;
              v17 = v14 & v10 | ~v14 & v17;
              LOBYTE(v12) = v12 + 1;
              v14 >>= 1;
              if ( !v14 )
              {
                *v15 = v17;
                v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, (unsigned __int64)(v15 + 1));
                if ( v16 )
                  v17 = *v15;
                else
                  v17 = 0;
                v14 = byte_1C02EA258[v12 & 7];
              }
            }
            if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v41, (unsigned __int64)v15) )
              *v18 = v19;
            v9 = (struct _PLGRUN *)(v20 + 8);
            v11 = *((int *)a3 + 22) + v21;
          }
          while ( v22 != 1 );
          v7 = a2;
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
