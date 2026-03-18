/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180081164
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
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
  int *v5; // rbp
  int v6; // eax
  int v7; // r8d
  char *v8; // rsi
  unsigned int v9; // r11d
  char *v10; // rcx
  int v11; // eax
  int *v12; // r9
  int v13; // edx
  int v14; // edi
  int v15; // r10d
  int v16; // r8d
  int v17; // ebx
  bool v19; // zf

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = &v3[2 * v2];
  v6 = v4 + v2;
  v7 = *((_DWORD *)a2 + 3);
  v8 = (char *)a2 + 8 * v4 + 12;
  v9 = 8 * v6 + 12;
  if ( *v3 >= v7 )
  {
    v10 = (char *)a2 + 20;
    if ( *v3 > v7 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)v10;
        if ( *v3 < *(_DWORD *)v10 )
          break;
        v10 += 8;
        if ( *v3 <= v11 )
        {
          v12 = v3 + 2;
          v19 = v10 == v8;
          goto LABEL_27;
        }
        if ( v10 == v8 )
          return v9;
      }
    }
    v12 = v3 + 2;
LABEL_5:
    v13 = *((_DWORD *)v10 + 1) - *((_DWORD *)v10 - 1);
    v14 = *(_DWORD *)v10;
    do
    {
      v15 = v12[1];
      v16 = *(v12 - 1);
      v17 = *v12;
      while ( 1 )
      {
        v9 += v13 + v15 - v16 + 16;
        if ( v17 < v14 )
          break;
        v10 += 8;
        if ( v17 > v14 )
        {
          if ( v10 == v8 )
            return v9;
        }
        else
        {
          v12 += 2;
          if ( v12 == v5 || v10 == v8 )
            return v9;
          v16 = *(v12 - 1);
          v15 = v12[1];
          v17 = *v12;
        }
        v13 = *((_DWORD *)v10 + 1) - *((_DWORD *)v10 - 1);
        v14 = *(_DWORD *)v10;
      }
      v12 += 2;
    }
    while ( v12 != v5 );
    return v9;
  }
  v12 = v3 + 2;
  while ( *v12 < v7 )
  {
    v12 += 2;
    if ( v12 == v5 )
      return v9;
  }
  v10 = (char *)a2 + 20;
  if ( *v12 > v7 )
    goto LABEL_5;
  v12 += 2;
  v19 = v12 == v5;
LABEL_27:
  if ( !v19 )
    goto LABEL_5;
  return v9;
}
