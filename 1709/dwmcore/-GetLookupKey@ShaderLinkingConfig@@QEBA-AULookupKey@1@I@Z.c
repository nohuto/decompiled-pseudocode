/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180021EE0
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18011C6B0 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // eax
  _OWORD *result; // rax
  __int128 v14; // [rsp+0h] [rbp-18h]

  v14 = 0uLL;
  v4 = *(_BYTE *)(a1 + 19) & 1 | (2
                                * (*(_BYTE *)(a1 + 43) & 1 | (2
                                                            * (*(_BYTE *)(a1 + 67) & 1 | (2
                                                                                        * (*(_BYTE *)(a1 + 91) & 1 | (2 * (*(_BYTE *)(a1 + 18) & 1))))))));
  if ( *(_BYTE *)(a1 + 18) )
    v4 = *(_BYTE *)(a1 + 19) & 1 | (unsigned __int8)(2
                                                   * (*(_BYTE *)(a1 + 43) & 1 | (2
                                                                               * (*(_BYTE *)(a1 + 67) & 1 | (2 * (*(_BYTE *)(a1 + 91) & 1 | (2 * (*(_BYTE *)(a1 + 18) & 1)))))))) | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 8);
  v5 = ((unsigned __int8)v4 ^ (unsigned __int8)(32 * *(_BYTE *)(a1 + 42))) & 0x20 ^ v4;
  if ( *(_BYTE *)(a1 + 42) )
    v5 = v5 & 0xFFF3F3FF | ((*(_BYTE *)(a1 + 40) & 3 | ((*(_BYTE *)(a1 + 41) & 3) << 8)) << 10);
  v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(*(_BYTE *)(a1 + 66) << 6)) & 0x40 ^ v5;
  if ( *(_BYTE *)(a1 + 66) )
    v6 = v6 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 64) & 3 | ((*(_BYTE *)(a1 + 65) & 3) << 8)) << 12);
  v7 = ((unsigned __int8)v6 ^ (unsigned __int8)(*(_BYTE *)(a1 + 90) << 7)) & 0x80 ^ v6;
  if ( *(_BYTE *)(a1 + 90) )
    v7 = v7 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 88) & 3 | ((*(_BYTE *)(a1 + 89) & 3) << 8)) << 14);
  v8 = 0;
  v9 = (v7 ^ (*(_DWORD *)(a1 + 112) << 24)) & 0x3F000000 ^ v7;
  if ( *(_BYTE *)(a1 + 120) )
    v10 = 0x40000000;
  else
    v10 = 0;
  v11 = v10 | v9 & 0xBFFFFFFF;
  if ( *(_BYTE *)(a1 + 121) )
    v12 = 0x80000000;
  else
    v12 = 0;
  DWORD1(v14) = v12 | v11 & 0x7FFFFFFF;
  if ( *(_BYTE *)(a1 + 126) )
    v8 = 4;
  DWORD2(v14) = v8 | (*(_BYTE *)(a1 + 123) != 0 ? 2 : 0) | (*(_BYTE *)(a1 + 122) != 0) | (8
                                                                                        * ((a3 << 16) | *(unsigned __int16 *)(a1 + 96)));
  result = a2;
  LODWORD(v14) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 32) & 0x3F | ((*(_DWORD *)(a1 + 56) & 0x3F | ((*(_DWORD *)(a1 + 80) & 0x3F | ((*(_BYTE *)(a1 + 20) & 1 | (2 * (*(_BYTE *)(a1 + 44) & 1 | (2 * (*(_BYTE *)(a1 + 68) & 1 | (2 * (*(_BYTE *)(a1 + 92) & 1 | (2 * (*(_BYTE *)(a1 + 21) & 1 | (2 * (*(_BYTE *)(a1 + 45) & 1 | (2 * (*(_BYTE *)(a1 + 69) & 1 | (2 * *(unsigned __int8 *)(a1 + 93))))))))))))))) << 6)) << 6)) << 6)) << 6);
  *a2 = v14;
  return result;
}
