/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(void **this, struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rsi
  unsigned int v3; // edi
  int *v5; // r15
  FastRegion::CRegion *v6; // r9
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  _DWORD *v11; // r8
  __int64 v12; // r10
  _DWORD *v13; // rbx
  __int64 v14; // rax
  int *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  int v20; // ebx
  SIZE_T v21; // r8
  LPVOID v22; // rbp

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  if ( *v2 )
  {
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v5 = (int *)(this + 1);
      v6 = (FastRegion::CRegion *)*this;
      v7 = 60;
      v8 = v2[2 * *v2 + 2] + 8 * *v2 - v2[4] + 8 * (*v2 - 1) + 12;
      if ( this + 1 != *this )
        v7 = *v5;
      if ( v7 < v8 )
      {
        v21 = v8;
        if ( !v8 )
          v21 = 1LL;
        v22 = HeapAlloc(WPF::g_processHeap, 0, v21);
        if ( !v22 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory(this);
        *this = v22;
        *v5 = v8;
        v6 = (FastRegion::CRegion *)*this;
      }
      v9 = *v2;
      v10 = 0;
      *(_DWORD *)v6 = *v2;
      *((_DWORD *)v6 + 1) = v2[1];
      *((_DWORD *)v6 + 2) = v2[2];
      v11 = (_DWORD *)((char *)v6 + 8 * v9 + 12);
      v12 = (__int64)v2 + v2[4] + 12;
      if ( v9 > 0 )
      {
        v13 = (_DWORD *)((char *)v6 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v6);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v6 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v11 - v12) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v6
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v6 );
      }
      v15 = &v2[2 * *v2 - 2];
      v16 = (unsigned __int64)((int)v15 + v15[4] - (int)v2 - v2[4]) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v12 - (_QWORD)v11;
        do
        {
          *v11 = *(_DWORD *)((char *)v11 + v18);
          ++v11;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v20 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory(this);
      *this = v2;
      *((_DWORD *)this + 2) = v20;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
  return v3;
}
