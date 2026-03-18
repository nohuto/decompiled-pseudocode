/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18013E76C
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015CE70 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180170110 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
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
  if ( *((_BYTE *)this + 2883) )
  {
LABEL_8:
    LOBYTE(v3) = v1;
    return v3;
  }
  if ( !*((_BYTE *)this + 2886) )
  {
    v4 = 0;
    while ( IsEmpty((const struct D2D_RECT_F *)((char *)v2 + 16 * v4 + 24)) )
    {
      v4 = v3 + v5;
      if ( v4 >= 8 )
        return v3;
    }
    goto LABEL_8;
  }
  LOBYTE(v3) = *((_DWORD *)this + 319) == 0;
  return v3;
}
