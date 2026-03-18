/*
 * XREFs of ?Find@?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@QEBAHAEBW4ShaderLinkingArgument@@@Z @ 0x1800BB88C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrayRef<enum ShaderLinkingArgument const>::Find(__int64 a1, __int16 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int16 v4; // r9
  __int64 v5; // rdx
  _WORD *i; // rcx

  v2 = *(int *)(a1 + 8);
  result = 0LL;
  if ( (int)v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a2;
  v5 = 0LL;
  for ( i = *(_WORD **)a1; *i != v4; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( ++v5 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
