/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180043430
 * Callers:
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x1800151D4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180015208 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800D5F20 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 *     ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x1800D5FA0 (-Release@CHwBitmapCache@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
