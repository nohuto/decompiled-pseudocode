/*
 * XREFs of ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x1801DECF4
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E006C (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D5F20 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 *v13; // rcx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = (char *)ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v12 = (_QWORD *)(*(_QWORD *)a1 + 8 * v11);
  if ( v12 )
  {
    *v12 = *a2;
    v10 = *(char **)(a1 + 8);
  }
  v13 = (__int64 *)&v10[8 * v11];
  if ( v13 )
  {
    *v13 = *a3;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v13);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
