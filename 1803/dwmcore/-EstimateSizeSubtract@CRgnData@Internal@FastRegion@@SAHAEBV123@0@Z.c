/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007FB30
 * Callers:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800138B0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  int v5; // r10d
  int *v6; // r11
  unsigned int v7; // r8d
  char *v8; // rdi
  char *v9; // rcx
  int *v10; // r9
  int v11; // edx
  int v12; // r10d
  int v13; // eax
  int v14; // esi
  int v15; // ebx
  int v17; // eax
  int *v18; // rbx
  int v19; // eax
  int *v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = 8 * (v4 + v2) + 12;
  v8 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 >= v5 )
  {
    v9 = (char *)a2 + 20;
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)v9;
        if ( *v3 < *(_DWORD *)v9 )
          break;
        v9 += 8;
        if ( *v3 <= v17 )
        {
          v10 = v3 + 2;
          v18 = v10 - 2;
          if ( v9 != v8 )
          {
            v11 = *((_DWORD *)v9 + 1) - *((_DWORD *)v9 - 1);
            v12 = v10[1];
            v13 = v12 + v11 - *(v10 - 1) + 8;
            v7 += 8;
            goto LABEL_5;
          }
LABEL_14:
          v19 = v10[1] - v18[1] - (_DWORD)v18;
LABEL_17:
          v21 = (_DWORD)v10 + v19;
          while ( 1 )
          {
            v7 += v21;
            v10 += 2;
            if ( v10 == v6 )
              break;
LABEL_31:
            v21 = v10[1] - *(v10 - 1);
            v7 += 8;
          }
          return v7;
        }
        if ( v9 == v8 )
        {
          v10 = v3 + 2;
          goto LABEL_31;
        }
      }
    }
    v10 = v3 + 2;
LABEL_4:
    v11 = *((_DWORD *)v9 + 1) - *((_DWORD *)v9 - 1);
    v12 = v10[1];
    v13 = v12 + v11 - *(v10 - 1);
    v7 += 16;
LABEL_5:
    v14 = *(_DWORD *)v9;
    while ( 1 )
    {
      v15 = *v10;
      while ( 1 )
      {
        v7 += v13;
        if ( v15 < v14 )
          break;
        v9 += 8;
        if ( v15 > v14 )
        {
          v20 = v10 - 2;
          if ( v9 == v8 )
          {
            v19 = v10[1] - v20[1] - (_DWORD)v20;
            goto LABEL_17;
          }
          v11 = *((_DWORD *)v9 + 1) - *((_DWORD *)v9 - 1);
          v24 = v11 - v20[1] - (_DWORD)v20;
        }
        else
        {
          v10 += 2;
          if ( v10 == v6 )
            return v7;
          v18 = v10 - 2;
          if ( v9 == v8 )
            goto LABEL_14;
          v11 = *((_DWORD *)v9 + 1) - *((_DWORD *)v9 - 1);
          v12 = v10[1];
          v24 = v11 - v18[1] - (_DWORD)v18;
          v15 = *v10;
        }
        v14 = *(_DWORD *)v9;
        v13 = (_DWORD)v10 + v12 + v24 + 8;
      }
      v10 += 2;
      if ( v10 == v6 )
        return v7;
      v12 = v10[1];
      v13 = v12 + v11 - *(v10 - 1);
      v7 += 16;
    }
  }
  v22 = v3[3];
  v10 = v3 + 2;
  v23 = v22 - *(v10 - 1);
  v7 += 8;
  while ( 1 )
  {
    v7 += v23;
    if ( *v10 >= v5 )
      break;
    v10 += 2;
    if ( v10 == v6 )
      return v7;
    v23 = v10[1] - *(v10 - 1) + 8;
  }
  v9 = (char *)a2 + 20;
  if ( *v10 > v5 )
    goto LABEL_4;
  v10 += 2;
  if ( v10 != v6 )
    goto LABEL_4;
  return v7;
}
