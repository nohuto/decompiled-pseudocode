/*
 * XREFs of ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B8178
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::HasVirtualModeScale(CDisplay *this)
{
  char v1; // r8
  bool v2; // zf

  v1 = 0;
  if ( ((*((_DWORD *)this + 72) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( *((_DWORD *)this + 22) - *((_DWORD *)this + 20) != *((_DWORD *)this + 27) - *((_DWORD *)this + 25) )
      return 1;
    v2 = *((_DWORD *)this + 23) - *((_DWORD *)this + 21) == *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
  }
  else
  {
    if ( *((_DWORD *)this + 22) - *((_DWORD *)this + 20) != *((_DWORD *)this + 26) - *((_DWORD *)this + 24) )
      return 1;
    v2 = *((_DWORD *)this + 23) - *((_DWORD *)this + 21) == *((_DWORD *)this + 27) - *((_DWORD *)this + 25);
  }
  if ( !v2 )
    return 1;
  return v1;
}
