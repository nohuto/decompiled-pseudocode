/*
 * XREFs of ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800CA7D8
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800CA76C (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendMode::ToD3D11TextureAddressMode(char a1)
{
  switch ( a1 )
  {
    case 0:
      return 4LL;
    case 1:
      return 3LL;
    case 2:
      return 1LL;
  }
  if ( a1 != 3 )
    return 3LL;
  return 2LL;
}
