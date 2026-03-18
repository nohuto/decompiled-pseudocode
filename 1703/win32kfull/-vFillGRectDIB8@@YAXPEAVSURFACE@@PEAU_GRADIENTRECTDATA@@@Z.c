/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AD870
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012BC70 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbx
  char *v3; // r12
  unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // rsi
  char *v6; // rbp
  int v7; // r15d
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  int v17; // r11d
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  char *v23; // r11
  int v24; // r10d
  _BYTE *v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rsi
  char v28; // r8
  int v29; // r10d
  unsigned __int64 v30; // r8
  int v31; // r9d
  unsigned __int64 v32; // r8
  char *v33; // [rsp+20h] [rbp-C8h]
  int v34; // [rsp+28h] [rbp-C0h]
  char v35; // [rsp+2Ch] [rbp-BCh]
  __int64 v36; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+40h] [rbp-A8h]
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+50h] [rbp-98h]
  __int64 v41; // [rsp+58h] [rbp-90h]
  __int64 v42; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+68h] [rbp-80h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  __int64 v45; // [rsp+78h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+90h] [rbp-58h]
  int v47; // [rsp+F0h] [rbp+8h]
  int v49; // [rsp+100h] [rbp+18h]
  int v50; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = (char *)&gDitherMatrix16x16Default;
  v4 = DefaultSaturationTable;
  v5 = (unsigned __int8 *)&HalftoneSaturationTable;
  v34 = *((_DWORD *)a1 + 22);
  v6 = (char *)&gDitherMatrix16x16Halftone;
  v33 = (char *)&gDitherMatrix16x16Default;
  v7 = *((_DWORD *)a2 + 9);
  v8 = *((_QWORD *)a2 + 20);
  v49 = v7 + *((_DWORD *)a2 + 11);
  v47 = v7;
  v36 = *((_QWORD *)a1 + 10) + v34 * v7;
  v40 = *((_QWORD *)a2 + 14);
  v41 = *((_QWORD *)a2 + 15);
  v42 = *((_QWORD *)a2 + 16);
  v43 = *((_QWORD *)a2 + 10);
  v44 = *((_QWORD *)a2 + 11);
  v45 = *((_QWORD *)a2 + 12);
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 56) + 24LL) & 0x100000) == 0 )
  {
    v5 = DefaultSaturationTable;
    v6 = (char *)&gDitherMatrix16x16Default;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v9 = *(_DWORD *)(v8 + 76);
    if ( (v9 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(v8 + 56);
      if ( (struct PALETTE *)v10 == ppalDefault )
      {
        v11 = &unk_1C0329E14;
      }
      else
      {
        v33 = v6;
        v3 = v6;
        v4 = v5;
        if ( (v9 & 0x1000) != 0 )
          v12 = *(_QWORD *)(v10 + 80);
        else
          v12 = *(_QWORD *)(v10 + 72);
        v11 = (_BYTE *)(v12 + 4);
      }
    }
    else
    {
      v11 = vTranslateIdentity;
      v33 = v6;
      v3 = v6;
      v4 = v5;
    }
    v13 = *((int *)v2 + 45);
    v14 = *((_QWORD *)v2 + 6);
    v15 = *((_QWORD *)v2 + 7);
    v16 = *((_QWORD *)v2 + 8);
    v37 = v14;
    v38 = v15;
    v39 = v16;
    if ( (_DWORD)v13 )
    {
      v14 += v43 * v13;
      v15 += v44 * v13;
      v37 = v14;
      v38 = v15;
      v16 += v45 * v13;
      v39 = v16;
    }
    v17 = *((_DWORD *)v2 + 37);
    v50 = *((_DWORD *)v2 + 36);
    v35 = v17;
    while ( v7 < v49 )
    {
      v18 = *((int *)v2 + 44);
      v19 = v14;
      v20 = v15;
      v21 = v16;
      if ( (_DWORD)v18 )
      {
        v19 = v14 + v40 * v18;
        v20 = v15 + v41 * v18;
        v21 = v16 + v42 * v18;
      }
      v22 = *((_DWORD *)v2 + 8);
      v23 = &v3[16 * (((_BYTE)v7 + (_BYTE)v17) & 0xF)];
      v24 = v22 + *((_DWORD *)v2 + 10);
      if ( v22 < v24 )
      {
        v25 = (_BYTE *)(v36 + *((int *)v2 + 8));
        v26 = (unsigned int)(v24 - v22);
        v27 = v22 + v50;
        do
        {
          v28 = v27++;
          v29 = (unsigned __int8)v23[v28 & 0xF];
          v30 = HIWORD(v19);
          v19 += v40;
          v31 = (unsigned __int8)v30;
          v32 = HIWORD(v20);
          v20 += v41;
          BYTE6(v32) = BYTE6(v21);
          v21 += v42;
          *v25++ = v11[Xlate555[((unsigned __int64)v4[v29 + BYTE6(v32)] >> 3) | (4
                                                                               * (v4[v29 + (unsigned __int8)v32] & 0xF8 | (32LL * (v4[v29 + v31] & 0xF8))))]];
          --v26;
        }
        while ( v26 );
        v2 = a2;
        v14 = v37;
        v15 = v38;
        v16 = v39;
        v7 = v47;
        v3 = v33;
      }
      v14 += v43;
      v15 += v44;
      v16 += v45;
      v36 += v34;
      LOBYTE(v17) = v35;
      v47 = ++v7;
      v37 = v14;
      v38 = v15;
      v39 = v16;
    }
  }
}
