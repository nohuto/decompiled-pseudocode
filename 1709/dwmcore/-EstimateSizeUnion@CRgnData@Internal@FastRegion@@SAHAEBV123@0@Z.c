/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089B2C
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
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
  int v5; // r11d
  _DWORD *v6; // rbp
  char *v7; // rsi
  int v8; // ecx
  _DWORD *v9; // r9
  bool v10; // cc
  char *v11; // r10
  int v12; // eax
  _DWORD *v13; // r11
  char *v14; // rbx
  int v15; // eax
  _DWORD *v16; // rdi
  _DWORD *v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  _DWORD *v20; // r9
  _DWORD *v22; // r8
  unsigned int v23; // eax
  char *v24; // r10
  char *v25; // rax
  int v26; // eax
  _DWORD *v27; // r8
  _DWORD *v28; // rcx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = *((_DWORD *)a2 + 3);
  v6 = &v3[2 * v2];
  v7 = (char *)a2 + 8 * v4 + 12;
  v8 = 8 * (v4 + v2) + 12;
  if ( *v3 >= v5 )
  {
    if ( *v3 <= v5 )
    {
      v9 = v3 + 2;
      goto LABEL_4;
    }
    v11 = (char *)a2 + 20;
    v8 += *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) + 8;
    v26 = *((_DWORD *)a2 + 5);
    if ( *v3 < v26 )
    {
LABEL_45:
      v9 = v3 + 2;
    }
    else
    {
      v27 = (_DWORD *)((char *)a2 + 16);
      while ( 1 )
      {
        v11 += 8;
        if ( *v3 <= v26 )
          break;
        v27 += 2;
        if ( v11 == v7 )
        {
          v9 = v3 + 2;
          goto LABEL_38;
        }
        v8 += v27[2] - *v27 + 8;
        v26 = *(_DWORD *)v11;
        if ( *v3 < *(_DWORD *)v11 )
          goto LABEL_45;
      }
      v9 = v3 + 2;
      if ( v11 == v7 )
      {
LABEL_38:
        v19 = v8 + v9[1] - *(v9 - 1);
LABEL_12:
        v20 = v9 + 2;
        v18 = v19 + 8;
        if ( v20 != v6 )
        {
          v28 = v20 - 1;
          do
          {
            v20 += 2;
            v18 += v28[2] - *v28 + 8;
            v28 += 2;
          }
          while ( v20 != v6 );
        }
        return v18;
      }
    }
LABEL_5:
    v12 = *((_DWORD *)v11 + 1) - *((_DWORD *)v11 - 1);
  }
  else
  {
    v9 = v3 + 2;
    v8 += v9[1] - *(v9 - 1) + 8;
    v10 = *v9 <= v5;
    if ( *v9 >= v5 )
      goto LABEL_3;
    v22 = v9 - 1;
    do
    {
      v9 += 2;
      v22 += 2;
      if ( v9 == v6 )
      {
        v11 = (char *)a2 + 20;
        v12 = *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4);
        goto LABEL_25;
      }
      v8 += v22[2] - *v22 + 8;
    }
    while ( *v9 < v5 );
    v10 = *v9 <= v5;
LABEL_3:
    if ( !v10 )
    {
LABEL_4:
      v11 = (char *)a2 + 20;
      goto LABEL_5;
    }
    v11 = (char *)a2 + 20;
    v9 += 2;
    v12 = *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4);
    if ( v9 == v6 )
    {
LABEL_25:
      v23 = v8 + v12;
      goto LABEL_26;
    }
  }
  v13 = v9 + 1;
  v14 = v11 - 4;
  v15 = v8 + v9[1] + v12 - *(v9 - 1);
  v16 = v11 + 4;
  v17 = v9 - 1;
  v18 = v15 + 16;
  while ( *v9 < *(_DWORD *)v11 )
  {
    v9 += 2;
    v13 += 2;
    v17 += 2;
    if ( v9 == v6 )
      goto LABEL_31;
LABEL_19:
    v18 += *v13 + *v16 - *(_DWORD *)v14 - *v17 + 16;
  }
  if ( *v9 > *(_DWORD *)v11 )
  {
    v11 += 8;
    v16 += 2;
    v14 += 8;
    goto LABEL_10;
  }
  v9 += 2;
  v13 += 2;
  v17 += 2;
  v11 += 8;
  v16 += 2;
  v14 += 8;
  if ( v9 != v6 )
  {
LABEL_10:
    if ( v11 == v7 )
    {
      v19 = v18 + v9[1] - *(v9 - 1);
      goto LABEL_12;
    }
    goto LABEL_19;
  }
  if ( v11 == v7 )
    return v18;
LABEL_31:
  v23 = v18 + *((_DWORD *)v11 + 1) - *((_DWORD *)v11 - 1);
LABEL_26:
  v24 = v11 + 8;
  v18 = v23 + 8;
  if ( v24 != v7 )
  {
    v25 = v24 - 4;
    do
    {
      v24 += 8;
      v18 += *((_DWORD *)v25 + 2) - *(_DWORD *)v25 + 8;
      v25 += 8;
    }
    while ( v24 != v7 );
  }
  return v18;
}
