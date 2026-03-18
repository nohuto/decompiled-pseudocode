/*
 * XREFs of ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180022130
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall ShaderLinkingConfig::GetConstantBufferRequirements(_BYTE *a1, unsigned int *a2)
{
  int v2; // r8d
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int *v7; // r9
  __int64 v8; // rax
  unsigned int *result; // rax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+34h] [rbp+Ch] BYREF

  v2 = 0;
  if ( a1[20] || (v3 = 0, a1[18]) )
    v3 = 1;
  if ( a1[44] || a1[42] )
    v4 = v3 | 2;
  else
    v4 = v3 & 0xFFFFFFFD;
  if ( a1[68] || a1[66] )
    v5 = v4 | 4;
  else
    v5 = v4 & 0xFFFFFFFB;
  if ( a1[92] || a1[90] )
    v6 = v5 | 8;
  else
    v6 = v5 & 0xFFFFFFF7;
  v7 = &v10;
  *a2 = v6;
  v10 = v6;
  do
  {
    v8 = *(unsigned __int8 *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
    v2 += byte_1801F0670[v8];
  }
  while ( (char *)v7 - (char *)&v10 != (&v11 < (char *)&v10 ? 0 : 4) );
  result = a2;
  a2[1] = 16 * v2;
  return result;
}
