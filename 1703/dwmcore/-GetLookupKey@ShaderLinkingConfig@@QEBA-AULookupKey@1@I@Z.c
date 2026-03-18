/*
 * XREFs of ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180079970
 * Callers:
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180018328 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall ShaderLinkingConfig::GetLookupKey(__int64 a1, _OWORD *a2, int a3)
{
  int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  int v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // r8d
  _OWORD *result; // rax
  __int128 v15; // [rsp+0h] [rbp-18h]

  v15 = 0uLL;
  v5 = *(_BYTE *)(a1 + 6) & 1;
  if ( *(_BYTE *)(a1 + 6) )
    v5 = *(_BYTE *)(a1 + 6) & 1 | (16 * (*(_BYTE *)(a1 + 4) & 3 | ((*(_BYTE *)(a1 + 5) & 3) << 8)));
  v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(2 * *(_BYTE *)(a1 + 18))) & 2 ^ v5;
  if ( *(_BYTE *)(a1 + 18) )
    v6 = v6 & 0xFFFF3F3F | ((*(_BYTE *)(a1 + 16) & 3 | ((*(_BYTE *)(a1 + 17) & 3) << 8)) << 6);
  v7 = ((unsigned __int8)v6 ^ (unsigned __int8)(4 * *(_BYTE *)(a1 + 30))) & 4 ^ v6;
  if ( *(_BYTE *)(a1 + 30) )
    v7 = v7 & 0xFFFCFCFF | ((*(_BYTE *)(a1 + 28) & 3 | ((*(_BYTE *)(a1 + 29) & 3) << 8)) << 8);
  v8 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 42))) & 8 ^ v7;
  if ( *(_BYTE *)(a1 + 42) )
    v8 = v8 & 0xFFF3F3FF | ((*(_BYTE *)(a1 + 40) & 3 | ((*(_BYTE *)(a1 + 41) & 3) << 8)) << 10);
  v9 = 0;
  if ( *(_BYTE *)(a1 + 56) )
    v10 = 0x100000;
  else
    v10 = 0;
  v11 = v10 | v8 & 0xFFEFFFFF;
  if ( *(_BYTE *)(a1 + 57) )
    v12 = 0x200000;
  else
    v12 = 0;
  v13 = v12 | v11 & 0xFFDFFFFF;
  if ( *(_BYTE *)(a1 + 58) )
    v9 = 0x400000;
  DWORD1(v15) = v9 | (a3 << 23) | v13 & 0x3FFFFF;
  result = a2;
  DWORD2(v15) = *(unsigned __int16 *)(a1 + 48) | ((*(_DWORD *)(a1 + 52) & 0x1F) << 16);
  LODWORD(v15) = *(_DWORD *)a1 & 0x1F | (32
                                       * (*(_DWORD *)(a1 + 12) & 0x1F | (32
                                                                       * (*(_DWORD *)(a1 + 24) & 0x1F | (32 * (*(_DWORD *)(a1 + 36) & 0x1F | (32 * (*(_BYTE *)(a1 + 8) & 1 | (2 * (*(_BYTE *)(a1 + 20) & 1 | (2 * (*(_BYTE *)(a1 + 32) & 1 | (2 * (*(_BYTE *)(a1 + 44) & 1 | (2 * (*(_BYTE *)(a1 + 9) & 1 | (2 * (*(_BYTE *)(a1 + 21) & 1 | (2 * (*(_BYTE *)(a1 + 33) & 1 | (2 * (*(_BYTE *)(a1 + 45) & 1 | (2 * (*(_BYTE *)(a1 + 7) & 1 | (2 * (*(_BYTE *)(a1 + 19) & 1 | (2 * (*(_BYTE *)(a1 + 31) & 1 | (2 * *(unsigned __int8 *)(a1 + 43))))))))))))))))))))))))))))));
  *a2 = v15;
  return result;
}
