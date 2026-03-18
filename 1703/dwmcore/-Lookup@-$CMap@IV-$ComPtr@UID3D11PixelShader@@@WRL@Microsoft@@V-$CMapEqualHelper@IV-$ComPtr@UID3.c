/*
 * XREFs of ?Lookup@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@AEBI@Z @ 0x180197204
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Lookup(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  int v3; // eax
  _DWORD *v6; // rdx
  int v7; // ecx
  __int64 v8; // r8

  v3 = 0;
  if ( *(int *)(a1 + 16) <= 0 )
  {
LABEL_5:
    v3 = -1;
  }
  else
  {
    v6 = *(_DWORD **)a1;
    v7 = *a3;
    v8 = 0LL;
    while ( *v6 != v7 )
    {
      ++v3;
      ++v8;
      ++v6;
      if ( v8 >= *(int *)(a1 + 16) )
        goto LABEL_5;
    }
  }
  if ( v3 == -1 )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(a2);
  }
  return a2;
}
