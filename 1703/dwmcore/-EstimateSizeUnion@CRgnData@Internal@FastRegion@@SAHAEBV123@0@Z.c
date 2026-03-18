/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075210
 * Callers:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180073E60 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  int v6; // edx
  _DWORD *v7; // r13
  _DWORD *v8; // rbp
  _DWORD *v9; // r15
  unsigned int v10; // r11d
  _DWORD *v11; // r12
  char *v12; // r14
  char *v13; // rsi
  char *v14; // rdi
  int v15; // ecx
  _DWORD *v16; // r9
  int i; // eax
  char *v18; // r10
  _DWORD *v19; // r8
  int v20; // ecx
  int v21; // eax
  char *v22; // r10
  char *v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  _DWORD *v28; // r8
  _DWORD *v29; // rsi
  char *v30; // rdi
  char *v31; // rbp
  char *v32; // rax
  char *v33; // rdx
  _DWORD *v34; // r12
  _DWORD *v35; // r9
  _DWORD *v37; // r8
  char *v38; // rdi
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  char *v43; // rdx
  int v44; // eax
  char *v45; // r8
  int v46; // ecx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // [rsp+0h] [rbp-58h]
  char *v51; // [rsp+60h] [rbp+8h]
  char *v52; // [rsp+60h] [rbp+8h]
  char *v53; // [rsp+68h] [rbp+10h]
  _DWORD *v54; // [rsp+68h] [rbp+10h]
  char *v55; // [rsp+70h] [rbp+18h]
  _DWORD *v56; // [rsp+78h] [rbp+20h]

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = v3;
  v8 = v3;
  v9 = &v3[2 * v2];
  v56 = v3;
  v50 = v3;
  v10 = 8 * (v4 + v2) + 12;
  v11 = v3;
  v12 = &v5[8 * v4];
  v13 = v5;
  v14 = v5;
  v53 = v5;
  v51 = v5;
  if ( *v3 < v6 )
  {
    v15 = (_DWORD)v3 + 8;
    v16 = v3 + 2;
    for ( i = v11[3] - v11[1] - (_DWORD)v11; ; i = v37[3] - v37[1] - (_DWORD)v37 )
    {
      v10 += v15 + i;
      if ( *v16 >= v6 )
        break;
      v37 = v16;
      v16 += 2;
      if ( v16 == v9 )
      {
        v20 = (_DWORD)v5 + 8;
        v18 = v5 + 8;
        v21 = *((_DWORD *)v14 + 3) - *((_DWORD *)v14 + 1) - (_DWORD)v14;
        goto LABEL_7;
      }
      v15 = (_DWORD)v37 + 8;
    }
    v18 = v5 + 8;
    v19 = v16;
    if ( *v16 <= v6 )
    {
      v16 += 2;
      if ( v16 == v9 )
      {
        v20 = (_DWORD)v13 + 8;
        v21 = *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1) - (_DWORD)v13;
LABEL_7:
        v10 += v20 + v21;
LABEL_8:
        v22 = v18 + 8;
        if ( v22 != v12 )
        {
          v23 = v22;
          do
          {
            v24 = *((_DWORD *)v23 + 1) - *((_DWORD *)v23 - 1);
            v23 += 8;
            v10 += v24 + 8;
            v22 += 8;
          }
          while ( v22 != v12 );
        }
        return v10;
      }
      v38 = v53;
      goto LABEL_25;
    }
    v25 = (int)v16;
    v26 = (_DWORD)v51 + 8;
    v27 = v16[1] + *((_DWORD *)v51 + 3) - *((_DWORD *)v51 + 1) - *(v16 - 1) - (_DWORD)v51 - ((_DWORD)v16 - 8);
LABEL_13:
    v10 += v26 + v25 + v27;
LABEL_14:
    v28 = v16 - 2;
    v29 = v16;
    v30 = v18 - 8;
    v31 = v18;
    while ( 1 )
    {
      while ( 1 )
      {
        v32 = v18;
        v7 = v16;
        v52 = v18;
        v33 = v18;
        v55 = v18;
        v34 = v16;
        v54 = v16;
        if ( *v16 >= *(_DWORD *)v18 )
          break;
        v16 += 2;
        v28 += 2;
        v29 += 2;
        if ( v16 == v9 )
        {
          v10 += *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) + 8;
          goto LABEL_8;
        }
        v42 = (_DWORD)v31 + v34[3] + *((_DWORD *)v31 + 1) - *((_DWORD *)v30 + 1) - v34[1] - (_DWORD)v30 + 8;
LABEL_31:
        v10 += v42;
      }
      if ( *v16 > *(_DWORD *)v18 )
      {
        v18 += 8;
        v30 += 8;
        v31 += 8;
        if ( v18 == v12 )
        {
          v10 += v16[1] - *(v16 - 1) + 8;
          goto LABEL_19;
        }
        v42 = (_DWORD)v29
            + (_DWORD)v32
            + 8
            + *((_DWORD *)v32 + 3)
            + v29[1]
            - v28[1]
            - *((_DWORD *)v52 + 1)
            - (_DWORD)v28
            - (_DWORD)v52;
        goto LABEL_31;
      }
      v16 += 2;
      v28 += 2;
      v29 += 2;
      v18 += 8;
      v30 += 8;
      v31 += 8;
      if ( v16 == v9 )
      {
        if ( v18 == v12 )
          return v10;
        v20 = (_DWORD)v33 + 8;
        v21 = *((_DWORD *)v33 + 3) - *((_DWORD *)v33 + 1) - (_DWORD)v33;
        goto LABEL_7;
      }
      if ( v18 == v12 )
        goto LABEL_48;
      v10 += v54[3] + *((_DWORD *)v55 + 3) - *((_DWORD *)v55 + 1) - v54[1] + 16;
    }
  }
  if ( *v3 <= v6 )
  {
    v19 = v3;
    v16 = v3 + 2;
    v38 = v5;
    v18 = v5 + 8;
LABEL_25:
    v39 = (_DWORD)v38 + 8;
    v40 = (_DWORD)v19 + 8;
    v41 = v19[3] + *((_DWORD *)v38 + 3) - *((_DWORD *)v38 + 1) - v19[1] - (_DWORD)v38 - (_DWORD)v19;
LABEL_26:
    v10 += v39 + v40 + v41;
    goto LABEL_14;
  }
  v43 = v5;
  v18 = v5 + 8;
  do
  {
    v10 += *((_DWORD *)v43 + 3) - *((_DWORD *)v43 + 1) + 8;
    v44 = *(_DWORD *)v18;
    if ( *v3 < *(_DWORD *)v18 )
    {
      v26 = (int)v18;
      v16 = v3 + 2;
      v25 = (_DWORD)v50 + 8;
      v27 = v50[3] + *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) - v50[1] - ((_DWORD)v18 - 8) - (_DWORD)v50;
      goto LABEL_13;
    }
    v45 = v18;
    v43 = v18;
    v18 += 8;
    if ( *v3 <= v44 )
    {
      v16 = v3 + 2;
      if ( v18 == v12 )
      {
LABEL_48:
        v46 = (_DWORD)v7 + 8;
        v47 = v7[3] - v7[1] - (_DWORD)v7;
        goto LABEL_40;
      }
      v39 = (_DWORD)v45 + 8;
      v40 = (_DWORD)v56 + 8;
      v41 = v56[3] + *((_DWORD *)v45 + 3) - *((_DWORD *)v45 + 1) - v56[1] - (_DWORD)v45 - (_DWORD)v56;
      goto LABEL_26;
    }
  }
  while ( v18 != v12 );
  v46 = (_DWORD)v3 + 8;
  v16 = v3 + 2;
  v47 = v8[3] - v8[1] - (_DWORD)v8;
LABEL_40:
  v10 += v46 + v47;
LABEL_19:
  v35 = v16 + 2;
  if ( v35 != v9 )
  {
    v48 = v35;
    do
    {
      v49 = v48[1] - *(v48 - 1);
      v48 += 2;
      v10 += v49 + 8;
      v35 += 2;
    }
    while ( v35 != v9 );
  }
  return v10;
}
