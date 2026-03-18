/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180076AE0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18013F4D8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  char v4; // r14
  unsigned int v5; // r9d
  char v6; // r11
  unsigned int v7; // r8d
  char v8; // di
  unsigned int v9; // r9d
  char v10; // bl
  unsigned int v11; // r10d
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // r10d
  unsigned int v15; // eax
  int v16; // r10d
  int v17; // eax
  int v18; // r10d
  int v19; // r8d
  int v20; // r9d
  int v21; // r8d
  _OWORD *result; // rax
  __int128 v23; // [rsp+0h] [rbp-18h]

  v4 = *(_BYTE *)(a1 + 24);
  v5 = *(_BYTE *)(a1 + 25) & 1 | (2
                                * (*(_BYTE *)(a1 + 57) & 1 | (2
                                                            * (*(_BYTE *)(a1 + 89) & 1 | (2
                                                                                        * (*(_BYTE *)(a1 + 121) & 1 | (2 * (v4 & 1 | ((*(_BYTE *)(a1 + 28) & 1 | (2 * (*(_BYTE *)(a1 + 60) & 1 | (2 * (*(_BYTE *)(a1 + 92) & 1 | (2 * (*(_BYTE *)(a1 + 124) & 1))))))) << 20)))))))));
  if ( v4 )
    v5 = *(_BYTE *)(a1 + 25) & 1 | (2
                                  * (*(_BYTE *)(a1 + 57) & 1 | (2
                                                              * (*(_BYTE *)(a1 + 89) & 1 | (2
                                                                                          * (*(_BYTE *)(a1 + 121) & 1 | (2 * (v4 & 1 | ((*(_BYTE *)(a1 + 28) & 1 | (2 * (*(_BYTE *)(a1 + 60) & 1 | (2 * (*(_BYTE *)(a1 + 92) & 1 | (2 * (*(_BYTE *)(a1 + 124) & 1))))))) << 20))))))))) & 0xFFFCFCFF | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 8);
  v6 = *(_BYTE *)(a1 + 56);
  v7 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * v6)) & 0x20;
  if ( v6 )
    v7 = v7 & 0xFFF3F3FF | ((*(_BYTE *)(a1 + 48) & 3 | ((*(_BYTE *)(a1 + 49) & 3) << 8)) << 10);
  v8 = *(_BYTE *)(a1 + 88);
  v9 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v8 << 6)) & 0x40;
  if ( v8 )
    v9 = v9 & 0xFFCFCFFF | ((*(_BYTE *)(a1 + 80) & 3 | ((*(_BYTE *)(a1 + 81) & 3) << 8)) << 12);
  v10 = *(_BYTE *)(a1 + 120);
  v11 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v10 << 7)) & 0x80;
  if ( v10 )
    v11 = v11 & 0xFF3F3FFF | ((*(_BYTE *)(a1 + 112) & 3 | ((*(_BYTE *)(a1 + 113) & 3) << 8)) << 14);
  v12 = 0;
  v13 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    v13 = 0x40000000;
  v14 = v13 | v11 & 0xBFFFFFFF;
  v15 = 0;
  if ( *(_BYTE *)(a1 + 153) )
    v15 = 0x80000000;
  v16 = v15 | v14 & 0x7FFFFFFF;
  v17 = 0;
  if ( *(_BYTE *)(a1 + 154) )
    v17 = 0x10000000;
  DWORD1(v23) = (*(_BYTE *)(a1 + 155) != 0 ? 0x20000000 : 0) | v17 & 0xDFFFFFFF | v16 & 0xCFFFFFFF;
  if ( *(_BYTE *)(a1 + 158) )
    v12 = 0x40000;
  v18 = v12 | ((unsigned __int128)0LL >> 96);
  v19 = *(_DWORD *)(a1 + 144) & 0x3F | ((*(unsigned __int16 *)(a1 + 128) | ((*(_BYTE *)(a1 + 29) & 1) << 16)) << 6);
  if ( v4 )
  {
    v19 ^= (v19 ^ (*(unsigned __int8 *)(a1 + 18) << 26)) & 0xC000000;
    v18 = v18 & 0xFFFFF3F3 | (4 * (*(_BYTE *)(a1 + 19) & 3 | ((*(_DWORD *)(a1 + 20) & 3) << 8)));
  }
  v20 = v19 ^ (v19 ^ (*(unsigned __int8 *)(a1 + 61) << 23)) & 0x800000;
  if ( v6 )
  {
    v20 ^= (v20 ^ (*(unsigned __int8 *)(a1 + 50) << 28)) & 0x30000000;
    v18 = v18 & 0xFFFFCFCF | (16 * (*(_BYTE *)(a1 + 51) & 3 | ((*(_DWORD *)(a1 + 52) & 3) << 8)));
  }
  v21 = v20 ^ (v20 ^ (*(unsigned __int8 *)(a1 + 93) << 24)) & 0x1000000;
  if ( v8 )
  {
    v21 = v21 & 0x3FFFFFFF | (*(unsigned __int8 *)(a1 + 82) << 30);
    v18 = v18 & 0xFFFF3F3F | ((*(_BYTE *)(a1 + 83) & 3 | ((*(_DWORD *)(a1 + 84) & 3) << 8)) << 6);
  }
  if ( v10 )
    v18 = v18 & 0xFFFCFCFC | *(_BYTE *)(a1 + 114) & 3 | ((*(_BYTE *)(a1 + 115) & 3 | ((*(_DWORD *)(a1 + 116) & 3) << 8)) << 8);
  result = a2;
  HIDWORD(v23) = (a3 << 19) | v18 & 0x7FFFF;
  LODWORD(v23) = *(_DWORD *)(a1 + 8) & 0x3F | ((*(_DWORD *)(a1 + 40) & 0x3F | ((*(_DWORD *)(a1 + 72) & 0x3F | ((*(_DWORD *)(a1 + 104) & 0x3F | ((*(_BYTE *)(a1 + 26) & 1 | (2 * (*(_BYTE *)(a1 + 58) & 1 | (2 * (*(_BYTE *)(a1 + 90) & 1 | (2 * (*(_BYTE *)(a1 + 122) & 1 | (2 * (*(_BYTE *)(a1 + 27) & 1 | (2 * (*(_BYTE *)(a1 + 59) & 1 | (2 * (*(_BYTE *)(a1 + 91) & 1 | (2 * *(unsigned __int8 *)(a1 + 123))))))))))))))) << 6)) << 6)) << 6)) << 6);
  DWORD2(v23) = (v21 ^ (*(unsigned __int8 *)(a1 + 125) << 25)) & 0x2000000 ^ v21;
  *a2 = v23;
  return result;
}
