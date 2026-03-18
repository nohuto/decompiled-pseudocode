/*
 * XREFs of ?Release@CD3DLockableTexture@@UEAAKXZ @ 0x1800219C0
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x180024ED4 (--$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z.c)
 *     ?Release@CHwBitmapCache@@WHI@EAAKXZ @ 0x1800DE470 (-Release@CHwBitmapCache@@WHI@EAAKXZ.c)
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800DE4C0 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DLockableTexture::Release(CD3DLockableTexture *this)
{
  return CMILPoolResource::Release(this);
}
