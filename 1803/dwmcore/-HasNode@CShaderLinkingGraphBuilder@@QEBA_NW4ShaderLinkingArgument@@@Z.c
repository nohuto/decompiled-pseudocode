/*
 * XREFs of ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800D4C50
 * Callers:
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

bool __fastcall CShaderLinkingGraphBuilder::HasNode(__int64 a1, __int16 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 *i; // rdx
  __int64 *v9; // rcx
  __int16 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = std::_Hash_bytes((const unsigned __int8 *)&v11, 2uLL);
  v5 = v4[5];
  v6 = 2 * (v4[8] & v3);
  v7 = (__int64 *)v4[3];
  for ( i = *(__int64 **)(v5 + 8 * v6); ; i = (__int64 *)*i )
  {
    v9 = *(__int64 **)(v5 + 8 * v6) == v7 ? (__int64 *)v4[3] : **(__int64 ***)(v5 + 8 * v6 + 8);
    if ( i == v9 )
      break;
    if ( *((_WORD *)i + 8) == a2 )
    {
      v7 = i;
      return v7 != (__int64 *)v4[3];
    }
  }
  return v7 != (__int64 *)v4[3];
}
