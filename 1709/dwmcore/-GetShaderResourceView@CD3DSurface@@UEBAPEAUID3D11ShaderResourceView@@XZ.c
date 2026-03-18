/*
 * XREFs of ?GetShaderResourceView@CD3DSurface@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18002DA00
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18008FA50 (-GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CD3DSurface::GetShaderResourceView(CD3DSurface *this)
{
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 10);
}
