/*
 * XREFs of ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015A4CC
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AC40 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180021D30 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180021E04 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C0C38 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18015A2A0 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CCompositionCubeMap::GetOrCreateD3DCubeMap(
        CCompositionCubeMap *this,
        struct ID2DContextOwner *a2,
        struct ID3D11ShaderResourceView **a3)
{
  unsigned int v4; // esi
  __int64 v6; // rcx
  struct _LUID v8; // rbx
  signed int ExistingDevice; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  signed int CurrentRenderingRealization; // eax
  char v13; // dl
  signed int Texture; // eax
  struct ID3D11Resource *v15; // rdx
  signed int v16; // eax
  signed int v17; // eax
  struct IBitmapRealization *v19; // [rsp+30h] [rbp-79h] BYREF
  struct CD3DDeviceLevel1 *v20; // [rsp+38h] [rbp-71h] BYREF
  D3D11_SHADER_RESOURCE_VIEW_DESC v21; // [rsp+40h] [rbp-69h] BYREF
  __int128 v22; // [rsp+58h] [rbp-51h]
  DXGI_FORMAT v23[6]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v24[12]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v25; // [rsp+B0h] [rbp+7h]

  v4 = 0;
  *a3 = 0LL;
  v6 = *((unsigned int *)this + 28);
  v20 = 0LL;
  v8 = *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(32 * v6 + *((_QWORD *)this + 10) + 8) + 88LL) + 176LL);
  if ( *((_QWORD *)this + 15) != v8 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    *((struct _LUID *)this + 15) = v8;
    *((_BYTE *)this + 144) = 1;
  }
  if ( *((_QWORD *)this + 16) || *((int *)this + 28) < 0 )
    goto LABEL_11;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v20);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v8, &v20);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ExistingDevice, 0x124u);
    goto LABEL_12;
  }
  v10 = *((unsigned int *)this + 28);
  v11 = *((_QWORD *)this + 10);
  v19 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(32 * v10 + v11 + 8) + 64LL),
                                  &v19);
  v4 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentRenderingRealization, 0x127u);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(struct IBitmapRealization *, DXGI_FORMAT *))(*(_QWORD *)v19 + 24LL))(v19, v23);
  v13 = *((_BYTE *)this + 160);
  v24[6] = 0;
  v24[7] = 0;
  *(_QWORD *)&v22 = "DWM Composition Cube Map";
  v24[0] = *((_DWORD *)this + 38);
  v24[1] = v24[0];
  v24[2] = *((_DWORD *)this + 39);
  v24[4] = v23[0];
  DWORD2(v22) = 24;
  v24[3] = 6;
  v24[9] = 0;
  v24[5] = 1;
  v24[8] = v13 != 0 ? 40 : 8;
  v24[10] = (v13 != 0) + 4;
  v25 = v22;
  Texture = CD3DDeviceLevel1::CreateTexture(
              v20,
              (const struct DWM_TEXTURE2D_DESC *)v24,
              0LL,
              (struct ID3D11Texture2D **)this + 16);
  v4 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Texture, 0x150u);
    goto LABEL_17;
  }
  v15 = (struct ID3D11Resource *)*((_QWORD *)this + 16);
  v21.Buffer.FirstElement = 0;
  v21.Format = v23[0];
  v21.Buffer.NumElements = *((_DWORD *)this + 39);
  v21.ViewDimension = D3D_SRV_DIMENSION_TEXTURECUBE;
  v16 = CD3DDeviceLevel1::CreateShaderResourceView(v20, v15, &v21, (struct ID3D11ShaderResourceView **)this + 17);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x158u);
    goto LABEL_17;
  }
  v17 = CCompositionCubeMap::FlushToD3DCubeMap(this, a2);
  v4 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x15Au);
LABEL_17:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
LABEL_11:
  *a3 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 17);
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v20);
  return v4;
}
