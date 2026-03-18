/*
 * XREFs of ?IsColorConversionRequired@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@0@Z @ 0x18007ADD4
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsColorConversionRequired(signed int a1, unsigned int a2)
{
  bool result; // al
  bool v3; // zf

  result = 0;
  if ( a2 > 1 )
  {
    if ( a2 != 3 || (unsigned int)a1 > 1 )
      return result;
    return 1;
  }
  if ( a1 > 12 )
  {
    if ( a1 == 13 )
      goto LABEL_16;
    if ( a1 == 14 )
      return 1;
    if ( a1 <= 16 )
    {
LABEL_16:
      v3 = a2 == 1;
      return !v3;
    }
    if ( a1 != 17 )
      return result;
    return 1;
  }
  if ( a1 == 12 )
    return 1;
  if ( a1 < 0 )
    return result;
  if ( a1 <= 1 )
  {
    v3 = a2 == a1;
    return !v3;
  }
  if ( a1 == 3 )
    return 1;
  if ( a1 > 4 )
  {
    if ( a1 <= 9 )
    {
      v3 = a2 == 0;
      return !v3;
    }
    goto LABEL_16;
  }
  return result;
}
