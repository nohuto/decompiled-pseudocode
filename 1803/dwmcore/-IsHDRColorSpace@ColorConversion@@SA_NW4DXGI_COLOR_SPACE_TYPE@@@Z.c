/*
 * XREFs of ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017EB44
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18017E928 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsHDRColorSpace(enum DXGI_COLOR_SPACE_TYPE a1)
{
  char *v1; // rax
  int v2; // edx
  char *v3; // r8
  const char *v4; // rax

  v1 = (char *)&unk_180239E18;
  do
  {
    v2 = *(_DWORD *)v1;
    v3 = v1;
    if ( *(_DWORD *)v1 == a1 )
      break;
    v1 += 4;
  }
  while ( v1 != "NoOp" );
  v4 = v3 + 4;
  if ( v2 == a1 )
    v4 = v3;
  return v4 != "NoOp";
}
