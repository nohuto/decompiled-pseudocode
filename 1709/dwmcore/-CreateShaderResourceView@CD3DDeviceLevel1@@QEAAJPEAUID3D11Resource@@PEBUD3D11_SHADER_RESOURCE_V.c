/*
 * XREFs of ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180021E04
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18002E158 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004C74C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateShaderResourceView(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        const struct D3D11_SHADER_RESOURCE_VIEW_DESC *a3,
        struct ID3D11ShaderResourceView **a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_SHADER_RESOURCE_VIEW_DESC *, struct ID3D11ShaderResourceView **))(**((_QWORD **)this + 81) + 56LL))(
         *((_QWORD *)this + 81),
         a2,
         a3,
         a4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5C8u);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
