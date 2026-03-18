/*
 * XREFs of ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18017298C (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1801F31D0 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::Copy(int **this, int **a2)
{
  int *v3; // rbx
  int v4; // r8d
  int *v5; // r9
  int *v6; // r14
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int *v11; // r8
  __int64 v12; // r10
  _DWORD *v13; // rdi
  __int64 v14; // rax
  int *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  SIZE_T v20; // r8
  int *v21; // rbp

  if ( this == a2 )
    return 0LL;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
  {
    **this = 0;
    return 0LL;
  }
  v5 = *this;
  v6 = (int *)(this + 1);
  v7 = 60;
  v8 = v3[2 * v4 + 2] + 8 * v4 - v3[4] + 8 * (v4 - 1) + 12;
  if ( this + 1 != (int **)*this )
    v7 = *v6;
  if ( v7 >= v8 )
    goto LABEL_6;
  v20 = v8;
  if ( !v8 )
    v20 = 1LL;
  v21 = (int *)HeapAlloc(WPF::g_processHeap, 0, v20);
  if ( v21 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v21;
    *v6 = v8;
    v5 = *this;
LABEL_6:
    v9 = *v3;
    v10 = 0;
    *v5 = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v11 = &v5[2 * v9 + 3];
    v12 = (__int64)v3 + v3[4] + 12;
    if ( v9 > 0 )
    {
      v13 = v5 + 3;
      do
      {
        *v13 = *(_DWORD *)((char *)v13 + (char *)v3 - (char *)v5);
        v13 += 2;
        v14 = v10++;
        v5[2 * v14 + 4] = (_DWORD)v3
                        + 8 * v14
                        + 4 * (((__int64)v11 - v12) >> 2)
                        + v3[2 * v14 + 4]
                        - ((_DWORD)v5
                         + 8 * v14);
      }
      while ( v10 < *v5 );
    }
    v15 = &v3[2 * *v3 - 2];
    v16 = (unsigned __int64)((int)v15 + v15[4] - (int)v3 - v3[4]) >> 2;
    v17 = (int)v16;
    if ( (int)v16 > 0 )
    {
      v18 = v12 - (_QWORD)v11;
      do
      {
        *v11 = *(int *)((char *)v11 + v18);
        ++v11;
        --v17;
      }
      while ( v17 );
    }
    return 0LL;
  }
  return 2147942414LL;
}
