/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18003099C
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800345F0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  int v6; // r11d
  _DWORD *v7; // rsi
  char *v8; // rbp
  unsigned int v9; // edx
  _DWORD *v10; // r9
  char *v11; // r10
  _DWORD *v12; // r8
  _DWORD *v13; // r11
  char *v14; // rbx
  _DWORD *v15; // rdi
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // r9
  _DWORD *v20; // r8
  bool v21; // cc
  _DWORD *v22; // r8

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = &v3[2 * v2];
  v8 = (char *)a2 + 8 * v4 + 12;
  v9 = 8 * (v4 + v2) + 12;
  if ( *v3 > v6 )
  {
    v11 = v5 + 8;
    while ( 1 )
    {
      v17 = *(_DWORD *)v11;
      if ( *v3 < *(_DWORD *)v11 )
      {
        v10 = v3 + 2;
        goto LABEL_5;
      }
      v11 += 8;
      if ( *v3 <= v17 )
        break;
      if ( v11 == v8 )
      {
        v10 = v3 + 2;
        goto LABEL_17;
      }
    }
    v10 = v3 + 2;
    if ( v11 == v8 )
    {
LABEL_17:
      v18 = v10[1] - *(v10 - 1);
      v19 = v10 + 2;
      v9 += v18 + 8;
      if ( v19 != v7 )
      {
        v20 = v19 - 1;
        do
        {
          v19 += 2;
          v9 += v20[2] - *v20 + 8;
          v20 += 2;
        }
        while ( v19 != v7 );
      }
      return v9;
    }
LABEL_5:
    v12 = v10 - 1;
    v13 = v10 + 1;
    v14 = v11 - 4;
    v15 = v11 + 4;
    v9 += v10[1] + *((_DWORD *)v11 + 1) - *((_DWORD *)v11 - 1) - *(v10 - 1) + 16;
    while ( *v10 <= *(_DWORD *)v11 )
    {
      if ( *v10 >= *(_DWORD *)v11 )
      {
        v10 += 2;
        v13 += 2;
        v12 += 2;
        v11 += 8;
        v15 += 2;
        v14 += 8;
        if ( v10 == v7 )
          return v9;
LABEL_16:
        if ( v11 == v8 )
          goto LABEL_17;
        goto LABEL_29;
      }
      v10 += 2;
      v13 += 2;
      v12 += 2;
      if ( v10 == v7 )
        return v9;
LABEL_29:
      v9 += *v13 + *v15 - *(_DWORD *)v14 - *v12 + 16;
    }
    v11 += 8;
    v15 += 2;
    v14 += 8;
    goto LABEL_16;
  }
  if ( *v3 >= v6 )
  {
    v10 = v3 + 2;
LABEL_4:
    v11 = v5 + 8;
    goto LABEL_5;
  }
  v10 = v3 + 2;
  v9 = v10[1] - *(v10 - 1) + 8 * (v4 + v2) + 20;
  v21 = *v10 <= v6;
  if ( *v10 >= v6 )
  {
LABEL_25:
    if ( !v21 )
      goto LABEL_4;
    v10 += 2;
    v11 = v5 + 8;
    if ( v10 != v7 )
      goto LABEL_5;
  }
  else
  {
    v22 = v10 - 1;
    while ( 1 )
    {
      v10 += 2;
      v22 += 2;
      if ( v10 == v7 )
        break;
      v9 += v22[2] - *v22 + 8;
      v21 = *v10 <= v6;
      if ( *v10 >= v6 )
        goto LABEL_25;
    }
  }
  return v9;
}
