/*
 * XREFs of HasLighting @ 0x1800059A4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall HasLighting(__int64 a1)
{
  char v1; // r8
  _WORD *v2; // rdx
  __int64 v3; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 52) )
    return 1;
  v2 = *(_WORD **)a1;
  v3 = *(_QWORD *)a1 + 2LL * *(_QWORD *)(a1 + 8);
  if ( v2 != (_WORD *)v3 )
  {
    do
    {
      if ( *v2 == 2 )
        break;
      ++v2;
    }
    while ( v2 != (_WORD *)v3 );
    if ( v2 != (_WORD *)v3 )
      return 1;
  }
  return v1;
}
