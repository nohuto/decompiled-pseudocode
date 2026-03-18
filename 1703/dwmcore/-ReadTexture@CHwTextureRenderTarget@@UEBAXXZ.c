/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEBAXXZ @ 0x18019C060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::ReadTexture(CHwTextureRenderTarget *this)
{
  CD3DDeviceLevel1::ReadTexture(
    *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 128LL),
    *(struct ID3D11Texture2D **)(*((_QWORD *)this + 3) + 128LL));
}
