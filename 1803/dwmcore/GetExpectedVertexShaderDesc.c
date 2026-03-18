/*
 * XREFs of GetExpectedVertexShaderDesc @ 0x1800D5B84
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     HasLighting @ 0x1800D393C (HasLighting.c)
 */

__int64 __fastcall GetExpectedVertexShaderDesc(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // rsi
  __int64 i; // rbx
  __int64 v10; // [rsp+40h] [rbp+18h]

  BYTE3(v10) = 0;
  if ( a5 || (HIDWORD(v10) = 2, a4 > 2) )
    HIDWORD(v10) = 4;
  if ( *(_DWORD *)(a3 + 128) != -1 || HasLighting(a1) )
    goto LABEL_9;
  v7 = *a2;
  for ( i = 0LL; i != v7; ++i )
  {
    if ( HasLighting(*(_QWORD *)(a2[1] + 8 * i)) )
      goto LABEL_9;
  }
  LOBYTE(v10) = 0;
  if ( a5 )
LABEL_9:
    LOBYTE(v10) = 1;
  BYTE2(v10) = *(_BYTE *)(a3 + 156);
  BYTE1(v10) = *(_BYTE *)(a3 + 154);
  return v10;
}
