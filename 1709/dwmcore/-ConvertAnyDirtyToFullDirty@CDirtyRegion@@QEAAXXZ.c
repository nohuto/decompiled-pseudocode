/*
 * XREFs of ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180147CC0
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18011BB84 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 */

void __fastcall CDirtyRegion::ConvertAnyDirtyToFullDirty(CDirtyRegion *this)
{
  CDirtyRegion *v1; // r11

  if ( !*((_BYTE *)this + 2722) )
  {
    if ( CDirtyRegion::IsEmpty(this) )
      *((_BYTE *)v1 + 2723) = 1;
    else
      CDirtyRegion::SetFullDirty(v1);
  }
}
