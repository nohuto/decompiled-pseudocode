/*
 * XREFs of ?UpdateSwapChains@CBrushRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D53B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C548 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 */

void __fastcall CBrushRenderingEffect::UpdateSwapChains(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  __int64 *v7; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v3 + 92) )
  {
    v6 = *(unsigned int *)(v3 + 92);
    v7 = (__int64 *)(a1 + 24);
    do
    {
      CDrawListBitmap::UpdateSwapChainRealization(v7, a2, a3);
      v7 += 3;
      --v6;
    }
    while ( v6 );
  }
}
