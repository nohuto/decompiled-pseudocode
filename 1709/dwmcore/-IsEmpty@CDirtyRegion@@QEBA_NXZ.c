/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18011BB84
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180147CC0 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  char v1; // r10
  CDirtyRegion *v2; // r8
  int v3; // edx
  unsigned int v4; // r9d
  int v5; // r9d

  v1 = 0;
  v2 = this;
  if ( *((_BYTE *)this + 2722) )
  {
LABEL_8:
    LOBYTE(v3) = v1;
    return v3;
  }
  if ( !*((_BYTE *)this + 2725) )
  {
    v4 = 0;
    while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v2 + 4 * v4 + 6) )
    {
      v4 = v3 + v5;
      if ( v4 >= 8 )
        return v3;
    }
    goto LABEL_8;
  }
  LOBYTE(v3) = *((_DWORD *)this + 279) == 0;
  return v3;
}
