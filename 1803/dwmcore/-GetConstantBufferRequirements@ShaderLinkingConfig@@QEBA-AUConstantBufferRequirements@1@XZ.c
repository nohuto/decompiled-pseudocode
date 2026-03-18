/*
 * XREFs of ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180076EBC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
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
  if ( a1[26] || (v3 = 0, a1[24]) )
    v3 = 1;
  if ( a1[58] || a1[56] )
    v4 = v3 | 2;
  else
    v4 = v3 & 0xFFFFFFFD;
  if ( a1[90] || a1[88] )
    v5 = v4 | 4;
  else
    v5 = v4 & 0xFFFFFFFB;
  if ( a1[122] || a1[120] )
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
    v2 += byte_180239E40[v8];
  }
  while ( (char *)v7 - (char *)&v10 != (&v11 < (char *)&v10 ? 0 : 4) );
  result = a2;
  a2[1] = 16 * v2;
  return result;
}
