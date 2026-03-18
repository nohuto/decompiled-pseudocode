/*
 * XREFs of ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x180001F7C
 * Callers:
 *     InitializeShaderLinkingInput @ 0x180001FD0 (InitializeShaderLinkingInput.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     <none>
 */

char __fastcall VertexShaderDesc::ResolveKey(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) )
  {
    if ( *(_BYTE *)a1 || *(_DWORD *)(a1 + 4) != 2 )
      return 8;
    return (*(_BYTE *)(a1 + 2) != 0) + 6;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 4);
    if ( v1 != 2 && (v1 != 4 || !*(_BYTE *)(a1 + 2)) )
      return 8;
    if ( *(_BYTE *)a1 )
    {
      if ( v1 == 2 )
        return (*(_BYTE *)(a1 + 2) != 0) + 3;
      else
        return 5;
    }
    else if ( v1 == 2 )
    {
      return *(_BYTE *)(a1 + 2) != 0;
    }
    else
    {
      return 2;
    }
  }
}
