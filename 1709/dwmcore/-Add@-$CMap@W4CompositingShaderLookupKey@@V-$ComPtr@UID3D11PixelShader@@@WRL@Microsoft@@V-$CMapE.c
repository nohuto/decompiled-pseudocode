/*
 * XREFs of ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x1801A5EF0
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXG.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800B5AB4 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 *v12; // rcx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
  {
    *v12 = *a3;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v12);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
