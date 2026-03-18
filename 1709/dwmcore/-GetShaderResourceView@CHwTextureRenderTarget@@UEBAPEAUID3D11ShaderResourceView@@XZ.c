/*
 * XREFs of ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18008FA50
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CHwTextureRenderTarget::GetShaderResourceView(CHwTextureRenderTarget *this)
{
  CD3DSurface *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CD3DSurface *)(*((_QWORD *)this - 2) + 120LL);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
  if ( (char *)v2 == (char *)CD3DSurface::GetShaderResourceView )
    return CD3DSurface::GetShaderResourceView(v1);
  else
    return (struct ID3D11ShaderResourceView *)v2();
}
