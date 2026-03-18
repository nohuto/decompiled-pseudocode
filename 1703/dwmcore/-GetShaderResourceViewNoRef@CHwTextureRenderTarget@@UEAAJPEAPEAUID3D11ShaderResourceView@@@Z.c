/*
 * XREFs of ?GetShaderResourceViewNoRef@CHwTextureRenderTarget@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18019BD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetShaderResourceViewNoRef(
        CD3DTexture **this,
        struct ID3D11ShaderResourceView **a2)
{
  return CD3DTexture::GetShaderResourceViewNoRef(this[3], a2);
}
