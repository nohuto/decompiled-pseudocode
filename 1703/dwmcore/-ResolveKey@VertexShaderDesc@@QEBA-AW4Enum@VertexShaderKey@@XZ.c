/*
 * XREFs of ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800BB82C
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 *     InitializeShaderLinkingInput @ 0x1800B842C (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexShaderDesc::ResolveKey(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1) )
  {
    if ( *(_BYTE *)a1 || *(_DWORD *)(a1 + 4) != 2 )
      return 8LL;
    return (unsigned int)(*(_BYTE *)(a1 + 2) != 0) + 6;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 4);
    if ( ((v2 - 2) & 0xFFFFFFFD) != 0 || v2 != 2 && !*(_BYTE *)(a1 + 2) )
      return 8LL;
    if ( *(_BYTE *)a1 )
    {
      if ( v2 == 2 )
        return (unsigned int)(*(_BYTE *)(a1 + 2) != 0) + 3;
      else
        return 5LL;
    }
    else if ( v2 == 2 )
    {
      LOBYTE(v1) = *(_BYTE *)(a1 + 2) != 0;
      return v1;
    }
    else
    {
      return 2LL;
    }
  }
}
