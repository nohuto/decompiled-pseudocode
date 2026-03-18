/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AF130
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012BC70 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // ebp
  char *v3; // r15
  __int64 v4; // r12
  struct _TRIANGLEDATA *v5; // rbx
  unsigned __int8 *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  int v12; // edx
  _BYTE *v13; // rdi
  __int64 v14; // rdi
  int v15; // esi
  int v16; // r10d
  struct _TRIANGLEDATA *v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r11
  unsigned __int8 *v22; // r8
  _BYTE *v23; // r13
  int v24; // r9d
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rbp
  int v28; // ebx
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  int v31; // r10d
  unsigned __int8 v32; // r11
  unsigned __int64 v33; // r9
  __int64 v34; // r11
  unsigned __int64 v35; // r9
  int v36; // [rsp+20h] [rbp-A8h]
  int v37; // [rsp+24h] [rbp-A4h]
  __int64 v38; // [rsp+28h] [rbp-A0h]
  __int64 v39; // [rsp+30h] [rbp-98h]
  __int64 v40; // [rsp+38h] [rbp-90h]
  __int64 v41; // [rsp+40h] [rbp-88h]
  char *v42; // [rsp+48h] [rbp-80h]
  unsigned __int8 *Xlate555; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v44; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  unsigned __int8 *v47; // [rsp+78h] [rbp-50h]
  int v50; // [rsp+E0h] [rbp+18h]
  char v51; // [rsp+E8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v50 = v2;
  v42 = (char *)a2 + 168;
  v6 = (unsigned __int8 *)&gDitherMatrix16x16Halftone;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_QWORD *)a2 + 19);
  v38 = *((_QWORD *)a2 + 2);
  v39 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)a2 + 4);
  v10 = (unsigned __int8 *)&HalftoneSaturationTable;
  v11 = *(_QWORD *)(v8 + 56);
  v40 = v9;
  v41 = v7;
  if ( (*(_DWORD *)(v11 + 24) & 0x100000) == 0 )
    v10 = DefaultSaturationTable;
  v44 = v10;
  if ( (*(_DWORD *)(v11 + 24) & 0x100000) == 0 )
    v6 = gDitherMatrix16x16Default;
  v12 = *(_DWORD *)(v8 + 76);
  v47 = v6;
  if ( (v12 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v11 == ppalDefault )
    {
      v13 = &unk_1C0329E14;
    }
    else
    {
      if ( (v12 & 0x1000) != 0 )
        v14 = *(_QWORD *)(v11 + 80);
      else
        v14 = *(_QWORD *)(v11 + 72);
      v13 = (_BYTE *)(v14 + 4);
    }
  }
  else
  {
    v13 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v15 = *((_DWORD *)v5 + 29);
    if ( *((_DWORD *)v5 + 3) < v15 )
      v15 = *((_DWORD *)v5 + 3);
    v51 = *((_DWORD *)v5 + 33);
    v37 = v15;
    v36 = *((_DWORD *)v5 + 32);
    if ( v2 < v15 )
    {
      v46 = v4;
      do
      {
        v16 = *((_DWORD *)v5 + 2);
        v17 = v5;
        v18 = *((_QWORD *)v3 + 1);
        v19 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 > *(_DWORD *)v5 )
          v17 = (struct _TRIANGLEDATA *)v3;
        v20 = *((_QWORD *)v3 + 3);
        if ( *((_DWORD *)v3 + 1) < v16 )
          v16 = *((_DWORD *)v3 + 1);
        v21 = *(int *)v17;
        v22 = &v6[16 * (((_BYTE)v2 + v51) & 0xF)];
        v23 = (_BYTE *)(v7 + v21);
        v45 = v22;
        if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)(v7 + v21) && (int)v21 < v16 )
        {
          v24 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v25 = v7 + v16;
          if ( v24 > 0 )
          {
            v18 += v38 * v24;
            v19 += v39 * v24;
            v20 += v40 * v24;
          }
          v26 = v25 - (_QWORD)v23;
          if ( (unsigned __int64)v23 > v25 )
            v26 = 0LL;
          if ( v26 )
          {
            v27 = 0LL;
            v28 = v21 + v36;
            do
            {
              v29 = v18;
              v18 += v38;
              v30 = v28++ & 0xF;
              ++v27;
              v31 = v45[v30];
              v32 = v44[v31 + HIBYTE(v29)];
              v33 = v19;
              v19 += v39;
              v34 = v44[v31 + HIBYTE(v33)] & 0xF8 | (32LL * (v32 & 0xF8));
              v35 = v20;
              v20 += v40;
              *v23++ = v13[Xlate555[((unsigned __int64)v44[v31 + HIBYTE(v35)] >> 3) | (4 * v34)]];
            }
            while ( v27 < v26 );
            v5 = a2;
            v15 = v37;
            v2 = v50;
            v7 = v41;
            v3 = v42;
          }
        }
        v7 += v46;
        v3 += 40;
        v6 = v47;
        ++v2;
        v41 = v7;
        v42 = v3;
        v50 = v2;
      }
      while ( v2 < v15 );
    }
  }
}
