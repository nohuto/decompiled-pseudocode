/*
 * XREFs of ?GetConversionShader@ColorConversion@@SA?AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_MODE@@0@Z @ 0x18015FCD0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorConversion::GetConversionShader(int a1, int a2, int a3)
{
  int v3; // r8d
  unsigned int *v4; // r8
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3 - 1;
    if ( !v3 )
    {
      v4 = (unsigned int *)&unk_1801FCE04;
      goto LABEL_7;
    }
    if ( v3 == 11 )
    {
      v4 = (unsigned int *)&unk_1801FCE08;
      goto LABEL_7;
    }
  }
  v4 = (unsigned int *)&unk_1801FCE00;
LABEL_7:
  result = v4[3 * a1];
  if ( a2 == 3 )
    return (unsigned int)(result + 1);
  return result;
}
