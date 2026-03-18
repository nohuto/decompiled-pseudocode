/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180026074
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800258E0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  int v6; // edx
  int v7; // r13d
  _DWORD *v8; // rsi
  _DWORD *v9; // r14
  _DWORD *v10; // rdi
  unsigned int v11; // ebx
  _DWORD *v12; // rbp
  char *v13; // r15
  char *v14; // r12
  int v15; // edx
  _DWORD *v16; // r9
  int v17; // ecx
  char *v18; // r10
  int v19; // eax
  _DWORD *v20; // r8
  _DWORD *v21; // rsi
  char *v22; // rdi
  char *v23; // rbp
  _DWORD *v24; // rcx
  _DWORD *v25; // rdx
  char *v26; // r12
  _DWORD *v27; // r13
  _DWORD *v28; // r9
  int v30; // eax
  char *v31; // r8
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int i; // eax
  _DWORD *v36; // r8
  int v37; // edx
  int v38; // r8d
  int v39; // ecx
  int v40; // ecx
  _DWORD *v41; // rcx
  char *v42; // [rsp+48h] [rbp+8h]
  char *v43; // [rsp+48h] [rbp+8h]
  char *v44; // [rsp+50h] [rbp+10h]
  _DWORD *v45; // [rsp+50h] [rbp+10h]
  _DWORD *v46; // [rsp+58h] [rbp+18h]
  _DWORD *v47; // [rsp+60h] [rbp+20h]

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = (int)v3;
  v8 = v3;
  v46 = v3;
  v9 = &v3[2 * v2];
  v10 = v3;
  v47 = v3;
  v11 = 8 * (v4 + v2) + 12;
  v12 = v3;
  v13 = &v5[8 * v4];
  v14 = v5;
  v44 = v5;
  v42 = v5;
  if ( *v3 <= v6 )
  {
    if ( *v3 >= v6 )
    {
      v15 = (_DWORD)v5 + 8;
      v16 = v3 + 2;
      v17 = (_DWORD)v12 + 8;
      v18 = v5 + 8;
      v19 = v12[3] + *((_DWORD *)v14 + 3) - *((_DWORD *)v14 + 1) - v12[1] - (_DWORD)v14 - v7;
LABEL_4:
      v11 += v15 + v17 + v19;
LABEL_5:
      v20 = v16 - 2;
      v21 = v16;
      v22 = v18 - 8;
      v23 = v18;
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = v16;
          v25 = v16;
          v45 = v16;
          v26 = v18;
          v43 = v18;
          v27 = v16;
          if ( *v16 <= *(_DWORD *)v18 )
            break;
          v18 += 8;
          v22 += 8;
          v23 += 8;
          if ( v18 == v13 )
          {
            v11 += v16[1] - *(v16 - 1) + 8;
            goto LABEL_12;
          }
          v40 = (_DWORD)v21 + *((_DWORD *)v26 + 3) + v21[1] - v20[1] - *((_DWORD *)v26 + 1) - (_DWORD)v20 + 8;
LABEL_27:
          v11 += v40;
        }
        if ( *v16 < *(_DWORD *)v18 )
        {
          v16 += 2;
          v20 += 2;
          v21 += 2;
          if ( v16 == v9 )
            return v11;
          v40 = (_DWORD)v23 + v27[3] + *((_DWORD *)v23 + 1) - *((_DWORD *)v22 + 1) - v27[1] - (_DWORD)v22 + 8;
          goto LABEL_27;
        }
        v16 += 2;
        v20 += 2;
        v21 += 2;
        v18 += 8;
        v22 += 8;
        v23 += 8;
        if ( v16 == v9 )
          return v11;
        if ( v18 == v13 )
        {
          v32 = (_DWORD)v25 + 8;
          v33 = v25[3] - v25[1] - (_DWORD)v25;
          goto LABEL_19;
        }
        v11 += (_DWORD)v24 + 8 + v24[3] + *((_DWORD *)v43 + 3) - *((_DWORD *)v43 + 1) - v45[1] - (_DWORD)v45 + 8;
      }
    }
    v34 = (_DWORD)v3 + 8;
    v16 = v3 + 2;
    for ( i = v12[3] - v12[1] - (_DWORD)v12; ; i = v36[3] - v36[1] - (_DWORD)v36 )
    {
      v36 = v16;
      v11 += v34 + i;
      if ( *v16 >= v6 )
        break;
      v16 += 2;
      if ( v16 == v9 )
        return v11;
      v34 = (_DWORD)v36 + 8;
    }
    if ( *v16 <= v6 )
    {
      v16 += 2;
      v18 = v5 + 8;
      if ( v16 == v9 )
        return v11;
      v17 = (_DWORD)v36 + 8;
      v15 = (_DWORD)v44 + 8;
      v19 = v36[3] + *((_DWORD *)v44 + 3) - *((_DWORD *)v44 + 1) - v36[1] - (_DWORD)v44 - (_DWORD)v36;
      goto LABEL_4;
    }
    v37 = (int)v16;
    v18 = v5 + 8;
    v38 = (_DWORD)v42 + 8;
    v39 = v16[1] + *((_DWORD *)v42 + 3) - *((_DWORD *)v42 + 1) - *(v16 - 1) - (_DWORD)v42 - ((_DWORD)v16 - 8);
LABEL_24:
    v11 += v38 + v37 + v39;
    goto LABEL_5;
  }
  v18 = v5 + 8;
  while ( 1 )
  {
    v30 = *(_DWORD *)v18;
    if ( *v3 < *(_DWORD *)v18 )
    {
      v38 = (int)v18;
      v16 = v3 + 2;
      v37 = (_DWORD)v47 + 8;
      v39 = v47[3] + *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) - v47[1] - ((_DWORD)v18 - 8) - (_DWORD)v47;
      goto LABEL_24;
    }
    v31 = v18;
    v18 += 8;
    if ( *v3 <= v30 )
      break;
    if ( v18 == v13 )
    {
      v32 = (_DWORD)v3 + 8;
      v16 = v3 + 2;
      v33 = v10[3] - v10[1] - (_DWORD)v10;
      goto LABEL_19;
    }
  }
  v16 = v3 + 2;
  if ( v18 != v13 )
  {
    v15 = (_DWORD)v31 + 8;
    v17 = (_DWORD)v46 + 8;
    v19 = v46[3] + *((_DWORD *)v31 + 3) - *((_DWORD *)v31 + 1) - v46[1] - (_DWORD)v31 - (_DWORD)v46;
    goto LABEL_4;
  }
  v32 = (_DWORD)v8 + 8;
  v33 = v8[3] - v8[1] - (_DWORD)v8;
LABEL_19:
  v11 += v32 + v33;
LABEL_12:
  v28 = v16 + 2;
  if ( v28 != v9 )
  {
    v41 = v28;
    do
    {
      v28 += 2;
      v11 += v41[1] - *(v41 - 1) + 8;
      v41 += 2;
    }
    while ( v28 != v9 );
  }
  return v11;
}
