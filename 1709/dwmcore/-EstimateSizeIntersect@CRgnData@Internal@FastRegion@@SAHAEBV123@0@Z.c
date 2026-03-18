/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089D70
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  char *v8; // rsi
  _DWORD *v9; // r9
  char *v10; // r10
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  char *v13; // r8
  int v14; // eax
  _DWORD *i; // r11
  bool v17; // zf
  int v18; // eax
  bool v19; // zf

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = &v3[2 * v2];
  v6 = 8 * (v4 + v2) + 12;
  v7 = *((_DWORD *)a2 + 3);
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 <= v7 )
  {
    if ( *v3 < v7 )
    {
      v9 = v3 + 2;
      while ( *v9 <= v7 )
      {
        if ( *v9 >= v7 )
        {
          v9 += 2;
          v10 = (char *)a2 + 20;
          v19 = v9 == v5;
          goto LABEL_28;
        }
        v9 += 2;
        if ( v9 == v5 )
          return v6;
      }
    }
    else
    {
      v9 = v3 + 2;
    }
    v10 = (char *)a2 + 20;
LABEL_5:
    v11 = v9 - 1;
    v12 = v9 + 1;
    v13 = v10 - 4;
    v14 = v9[1] + *((_DWORD *)v10 + 1) - *((_DWORD *)v10 - 1) - *(v9 - 1);
    for ( i = v10 + 4; ; v14 = *v12 + *i - *(_DWORD *)v13 - *v11 )
    {
      v6 += v14 + 16;
      if ( *v9 < *(_DWORD *)v10 )
      {
        v9 += 2;
        v12 += 2;
        v11 += 2;
        v17 = v9 == v5;
      }
      else
      {
        if ( *v9 > *(_DWORD *)v10 )
        {
          v10 += 8;
          i += 2;
          v13 += 8;
        }
        else
        {
          v9 += 2;
          v12 += 2;
          v11 += 2;
          v10 += 8;
          i += 2;
          v13 += 8;
          if ( v9 == v5 )
            return v6;
        }
        v17 = v10 == v8;
      }
      if ( v17 )
        break;
    }
    return v6;
  }
  v10 = (char *)a2 + 20;
  while ( 1 )
  {
    v18 = *(_DWORD *)v10;
    if ( *v3 < *(_DWORD *)v10 )
    {
      v9 = v3 + 2;
      goto LABEL_5;
    }
    v10 += 8;
    if ( *v3 <= v18 )
      break;
    if ( v10 == v8 )
      return v6;
  }
  v9 = v3 + 2;
  v19 = v10 == v8;
LABEL_28:
  if ( !v19 )
    goto LABEL_5;
  return v6;
}
