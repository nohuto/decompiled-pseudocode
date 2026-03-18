/*
 * XREFs of ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801B7AA0
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801AD268 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1801B70CC (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D3678 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180021BBC (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::OpenSharedTexture(
        struct D3D11_TEXTURE2D_DESC *a1,
        struct CD3DDeviceLevel1 *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        bool a4,
        unsigned int a5,
        struct CD3DVidMemOnlyTexture **a6)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  signed int v10; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v8 = CD3DDeviceLevel1::OpenSharedTexture(a2, a1, a3, a3, a4, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x97u);
  }
  else
  {
    v10 = CD3DVidMemOnlyTexture::CreateFromTexture(v12, a5, 1, a2, a6);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x9Du);
    else
      *((_QWORD *)*a6 + 30) = a3;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v12);
  return v9;
}
