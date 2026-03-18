/*
 * XREFs of ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180021D30
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001A14C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180080178 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180084EF8 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801A6840 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1801B12BC (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801BE470 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800811E4 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Texture2D **a4)
{
  __int64 v8; // rbx
  unsigned int v9; // ebx
  struct ID3D11Texture2D *v10; // rcx
  unsigned int v11; // ebx
  struct ID3D11Texture2D *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  do
  {
    v8 = *((_QWORD *)this + 81);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
    v9 = (*(__int64 (__fastcall **)(__int64, const struct DWM_TEXTURE2D_DESC *, struct D3D11_SUBRESOURCE_DATA *, struct ID3D11Texture2D **))(*(_QWORD *)v8 + 40LL))(
           v8,
           a2,
           a3,
           &v13);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v9) );
  v10 = v13;
  if ( v13 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v13->lpVtbl->SetPrivateData)(
      v13,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 14),
      *((_QWORD *)a2 + 6));
    v10 = v13;
  }
  v13 = 0LL;
  *a4 = v10;
  v11 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 6);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  return v11;
}
