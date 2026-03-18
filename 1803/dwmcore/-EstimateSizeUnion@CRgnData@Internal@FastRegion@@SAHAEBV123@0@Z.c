/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r10
  __int64 v4; // rcx
  char *v5; // r9
  int *v6; // rdi
  int v7; // eax
  char *v8; // r11
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  int *v12; // r10
  int v13; // eax
  char *v14; // r9
  char *v15; // rbx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ebp
  int v20; // r8d
  int v21; // esi
  int v22; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = &v3[2 * v2];
  v7 = v4 + v2;
  v8 = (char *)a2 + 8 * v4 + 12;
  v9 = *((_DWORD *)a2 + 3);
  v10 = 8 * v7 + 12;
  if ( *v3 >= v9 )
  {
    v14 = v5 + 8;
    if ( *v3 <= v9 )
    {
LABEL_23:
      v17 = *((_DWORD *)v14 + 1);
      v12 = v3 + 2;
      v18 = v17 - *((_DWORD *)v14 - 1) - *(v12 - 1);
      v10 += 16;
      goto LABEL_11;
    }
    v25 = *((_DWORD *)v14 + 1) - *((_DWORD *)v14 - 1);
    v10 += 8;
    while ( 1 )
    {
      v10 += v25;
      v26 = *(_DWORD *)v14;
      if ( *v3 < *(_DWORD *)v14 )
        goto LABEL_23;
      v14 += 8;
      if ( *v3 <= v26 )
        break;
      if ( v14 == v8 )
      {
        v27 = v3[3];
        v12 = v3 + 2;
        v22 = v27 - *(v12 - 1) + 8;
LABEL_17:
        while ( 1 )
        {
          v10 += v22;
          v12 += 2;
          if ( v12 == v6 )
            break;
          v22 = v12[1] - *(v12 - 1);
          v10 += 8;
        }
        return v10;
      }
      v25 = *((_DWORD *)v14 + 1) - *((_DWORD *)v14 - 1) + 8;
    }
    v12 = v3 + 2;
    v15 = (char *)(v12 - 2);
    if ( v14 == v8 )
    {
LABEL_16:
      v22 = (_DWORD)v12 + v12[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15;
      goto LABEL_17;
    }
    v24 = (_DWORD)v12 - *((_DWORD *)v15 + 1) - *((_DWORD *)v14 - 1);
  }
  else
  {
    v11 = v3[3];
    v12 = v3 + 2;
    v13 = v11 - *(v12 - 1);
    v10 += 8;
    while ( 1 )
    {
      v10 += v13;
      if ( *v12 >= v9 )
        break;
      v12 += 2;
      if ( v12 == v6 )
      {
        v28 = *((_DWORD *)v5 + 3);
        v14 = v5 + 8;
        v16 = v28 - *((_DWORD *)v14 - 1) + 8;
        goto LABEL_7;
      }
      v13 = v12[1] - *(v12 - 1) + 8;
    }
    v14 = v5 + 8;
    if ( *v12 > v9 )
    {
      v17 = *((_DWORD *)v14 + 1);
      v18 = v17 - *((_DWORD *)v14 - 1) - *(v12 - 1) + 16;
      goto LABEL_11;
    }
    v12 += 2;
    v15 = v14 - 8;
    if ( v12 == v6 )
    {
LABEL_6:
      v16 = (_DWORD)v14 + *((_DWORD *)v14 + 1) - *((_DWORD *)v15 + 1) - (_DWORD)v15;
      goto LABEL_7;
    }
    v24 = (_DWORD)v14 - *((_DWORD *)v15 + 1) - *(v12 - 1);
  }
  v17 = *((_DWORD *)v14 + 1);
  v18 = v17 + v24 - (_DWORD)v15 + 8;
LABEL_11:
  v19 = *(_DWORD *)v14;
LABEL_12:
  v20 = v12[1];
  v21 = *v12;
  while ( 1 )
  {
    v10 += v20 + v18;
    if ( v21 < v19 )
    {
      v12 += 2;
      v15 = v14 - 8;
      if ( v12 == v6 )
        goto LABEL_6;
      v18 = v17 + -*((_DWORD *)v14 - 1) - *(v12 - 1) + 8;
      v10 += 8;
      goto LABEL_12;
    }
    v14 += 8;
    if ( v21 > v19 )
    {
      v15 = (char *)(v12 - 2);
      if ( v14 == v8 )
        goto LABEL_16;
      goto LABEL_21;
    }
    v12 += 2;
    if ( v12 == v6 )
      break;
    v15 = (char *)(v12 - 2);
    if ( v14 == v8 )
      goto LABEL_16;
    v20 = v12[1];
    v21 = *v12;
LABEL_21:
    v17 = *((_DWORD *)v14 + 1);
    v19 = *(_DWORD *)v14;
    v18 = v17 + (_DWORD)v12 - *((_DWORD *)v15 + 1) - *((_DWORD *)v14 - 1) - (_DWORD)v15;
    v10 += 8;
  }
  if ( v14 == v8 )
    return v10;
  v16 = *((_DWORD *)v14 + 1) - *((_DWORD *)v14 - 1);
  v10 += 8;
LABEL_7:
  for ( v10 += v16; ; v10 += *((_DWORD *)v14 + 1) - *((_DWORD *)v14 - 1) + 8 )
  {
    v14 += 8;
    if ( v14 == v8 )
      break;
  }
  return v10;
}
