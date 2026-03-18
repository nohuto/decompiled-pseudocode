/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18001855C
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx

  v6 = ReallocHeap(*(void **)a1, 16LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = ReallocHeap(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_OWORD *)(*(_QWORD *)a1 + 16 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
  {
    v12 = *a3;
    *v11 = *a3;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
