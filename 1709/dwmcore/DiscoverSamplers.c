/*
 * XREFs of DiscoverSamplers @ 0x1800058FC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DiscoverSamplers(__int64 a1, __int64 a2, _QWORD *a3)
{
  _WORD *v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // al

  v3 = *(_WORD **)a1;
  v4 = 0;
  v5 = 0LL;
  v6 = 2LL * *(_QWORD *)(a1 + 8);
  v7 = v6 + *(_QWORD *)a1;
  v8 = v6 >> 1;
  if ( *(_QWORD *)a1 > v7 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      if ( (*v3 & 0xFF00) == 0x200 )
      {
        v9 = (unsigned __int8)*v3;
        v10 = v9 + 1;
        if ( v4 > (int)v9 + 1 )
          v10 = v4;
        v4 = v10;
        *(_BYTE *)(*a3 + 8 * v9) = 1;
        if ( *(_BYTE *)(a2 + 24 * v9 + 20) || (v11 = 0, *(_BYTE *)(a2 + 24 * v9 + 18)) )
          v11 = 1;
        *(_BYTE *)(*a3 + 8 * v9 + 1) = v11;
      }
      ++v3;
      ++v5;
    }
    while ( v5 != v8 );
  }
  return v4;
}
