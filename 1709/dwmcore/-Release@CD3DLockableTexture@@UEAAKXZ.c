/*
 * XREFs of ?Release@CD3DLockableTexture@@UEAAKXZ @ 0x18007E910
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CHwBitmapCache@@WHI@EAAKXZ @ 0x1800C6D80 (-Release@CHwBitmapCache@@WHI@EAAKXZ.c)
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800C6D90 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DLockableTexture::Release(CD3DLockableTexture *this)
{
  return CMILPoolResource::Release(this);
}
