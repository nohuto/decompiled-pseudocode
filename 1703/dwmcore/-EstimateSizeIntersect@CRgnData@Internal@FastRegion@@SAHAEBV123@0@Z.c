/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800C4268
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075A88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  int v6; // r11d
  _DWORD *v7; // r12
  _DWORD *v8; // r15
  _DWORD *v9; // rbp
  char *v10; // r13
  char *v11; // rdi
  unsigned int v12; // esi
  int v13; // eax
  char *v14; // r14
  int v15; // ecx
  _DWORD *v16; // r9
  int v17; // eax
  char *v18; // r10
  int v19; // r8d
  int v20; // r8d
  char *v21; // r11
  _DWORD *v22; // r8
  _DWORD *v23; // rbx
  char *v24; // rdi
  char *v25; // r12
  _DWORD *v26; // r13
  char *v27; // r15
  _DWORD *v28; // rdx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  _DWORD *v37; // rdx
  char *v38; // rdx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = (int)v3;
  v7 = v3;
  v8 = v3;
  v9 = &v3[2 * v2];
  v10 = (char *)a2 + 12;
  v11 = (char *)a2 + 12;
  v12 = 8 * (v4 + v2) + 12;
  v13 = *((_DWORD *)a2 + 3);
  v14 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 <= v13 )
  {
    if ( *v3 >= v13 )
    {
      v15 = (_DWORD)a2 + 20;
      v16 = v3 + 2;
      v17 = (_DWORD)v8 + 8;
      v18 = (char *)a2 + 20;
      v19 = v8[3] + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) - v8[1] - ((_DWORD)a2 + 12) - v6;
      goto LABEL_4;
    }
    v16 = v3 + 2;
    while ( *v16 < v13 )
    {
      v16 += 2;
      if ( v16 == v9 )
        return v12;
    }
    v37 = v16;
    if ( *v16 <= v13 )
    {
      v16 += 2;
      v18 = v5 + 8;
      if ( v16 != v9 )
      {
        v15 = (_DWORD)v10 + 8;
        v17 = (_DWORD)v37 + 8;
        v19 = v37[3] + *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) - v37[1] - (_DWORD)v10 - (_DWORD)v37;
        goto LABEL_4;
      }
      return v12;
    }
    v18 = v5 + 8;
    v34 = (_DWORD)v11 + 8;
    v35 = (int)v16;
    v36 = v16[1] + *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) - *(v16 - 1) - (_DWORD)v11 - ((_DWORD)v16 - 8);
LABEL_17:
    v20 = v34 + v35 + v36;
    goto LABEL_5;
  }
  v18 = (char *)a2 + 20;
  while ( 1 )
  {
    v33 = *(_DWORD *)v18;
    if ( *v3 < *(_DWORD *)v18 )
    {
      v16 = v3 + 2;
      v34 = (int)v18;
      v35 = (_DWORD)v8 + 8;
      v36 = v8[3] + *((_DWORD *)v18 + 1) - *((_DWORD *)v18 - 1) - v8[1] - ((_DWORD)v18 - 8) - (_DWORD)v8;
      goto LABEL_17;
    }
    v38 = v18;
    v18 += 8;
    if ( *v3 <= v33 )
      break;
    if ( v18 == v14 )
      return v12;
  }
  v16 = v3 + 2;
  if ( v18 != v14 )
  {
    v15 = (_DWORD)v38 + 8;
    v17 = (_DWORD)v7 + 8;
    v19 = v7[3] + *((_DWORD *)v38 + 3) - *((_DWORD *)v38 + 1) - v7[1] - (_DWORD)v38 - (_DWORD)v7;
LABEL_4:
    v20 = v15 + v17 + v19;
LABEL_5:
    v12 += v20;
    v21 = v18 - 8;
    v22 = v16 - 2;
    v23 = v16;
    v24 = v18;
    while ( 2 )
    {
      v25 = v18;
      v26 = v16;
      v27 = v18;
      v28 = v16;
      if ( *v16 < *(_DWORD *)v18 )
      {
        v16 += 2;
        v22 += 2;
        v23 += 2;
        if ( v16 == v9 )
          return v12;
        v30 = (_DWORD)v28 + 8;
        v31 = (_DWORD)v24 + *((_DWORD *)v24 + 1) + v28[3] - v28[1] - *((_DWORD *)v21 + 1) - (_DWORD)v21 - (_DWORD)v28;
      }
      else
      {
        if ( *v16 <= *(_DWORD *)v18 )
        {
          v16 += 2;
          v22 += 2;
          v23 += 2;
          v18 += 8;
          v21 += 8;
          v24 += 8;
          if ( v16 == v9 || v18 == v14 )
            return v12;
          v32 = v26[3] + *((_DWORD *)v25 + 3) - *((_DWORD *)v25 + 1) - v26[1] + 16;
          goto LABEL_13;
        }
        v18 += 8;
        v21 += 8;
        v24 += 8;
        if ( v18 == v14 )
          return v12;
        v30 = (_DWORD)v27 + 8;
        v31 = (_DWORD)v23 + v23[1] + *((_DWORD *)v27 + 3) - *((_DWORD *)v27 + 1) - v22[1] - (_DWORD)v22 - (_DWORD)v27;
      }
      v32 = v30 + v31;
LABEL_13:
      v12 += v32;
      continue;
    }
  }
  return v12;
}
