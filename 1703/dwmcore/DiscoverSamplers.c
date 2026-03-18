/*
 * XREFs of DiscoverSamplers @ 0x1800BB8B8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DiscoverSamplers(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r11d
  unsigned int i; // r9d
  __int16 v6; // cx
  unsigned int v7; // eax
  bool v8; // al

  v3 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    v6 = *(_WORD *)(*(_QWORD *)a1 + 2LL * (int)i);
    if ( (v6 & 0xFF00) == 0x200 )
    {
      v7 = (unsigned __int8)v6 + 1;
      if ( v3 > v7 )
        v7 = v3;
      v3 = v7;
      *(_BYTE *)(*a3 + 8LL * (unsigned __int8)v6) = 1;
      v8 = *(_BYTE *)(a2 + 12LL * (unsigned __int8)v6 + 8) || *(_BYTE *)(a2 + 12LL * (unsigned __int8)v6 + 6);
      *(_BYTE *)(*a3 + 8LL * (unsigned __int8)v6 + 1) = v8;
    }
  }
  return v3;
}
