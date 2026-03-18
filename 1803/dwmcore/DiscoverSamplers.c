/*
 * XREFs of DiscoverSamplers @ 0x1800D5A30
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DiscoverSamplers(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r10d
  __int64 i; // r9
  __int16 v8; // cx
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  bool v12; // cl

  v3 = *a1;
  v4 = 0;
  for ( i = 0LL; i != v3; ++i )
  {
    v8 = *(_WORD *)(a1[1] + 2 * i);
    if ( (v8 & 0xFF00) == 0x200 )
    {
      v9 = (unsigned __int8)v8;
      v10 = (unsigned __int8)v8 + 1;
      if ( v4 > v10 )
        v10 = v4;
      v11 = 32LL * (unsigned __int8)v8;
      v4 = v10;
      *(_BYTE *)(*(_QWORD *)(a3 + 8) + 8LL * (unsigned __int8)v8) = 1;
      v12 = *(_BYTE *)(v11 + a2 + 26) || *(_BYTE *)(v11 + a2 + 24);
      *(_BYTE *)(*(_QWORD *)(a3 + 8) + 8 * v9 + 1) = v12;
    }
  }
  return v4;
}
