/*
 * XREFs of ?Add@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x180195FC0
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 *v12; // rcx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
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
