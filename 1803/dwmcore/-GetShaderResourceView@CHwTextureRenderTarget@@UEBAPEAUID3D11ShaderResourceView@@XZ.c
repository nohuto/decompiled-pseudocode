/*
 * XREFs of ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x180078290
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CHwTextureRenderTarget::GetShaderResourceView(CHwTextureRenderTarget *this)
{
  return (struct ID3D11ShaderResourceView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this - 3)
                                                                                           + 120LL)
                                                                               + 32LL))(*((_QWORD *)this - 3) + 120LL);
}
