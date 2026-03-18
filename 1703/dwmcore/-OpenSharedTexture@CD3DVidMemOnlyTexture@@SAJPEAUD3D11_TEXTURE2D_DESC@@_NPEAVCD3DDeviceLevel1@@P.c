/*
 * XREFs of ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800C4FBC
 * Callers:
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800C4B9C (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18019BD0C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180079490 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::OpenSharedTexture(
        struct D3D11_TEXTURE2D_DESC *a1,
        __int64 a2,
        __int64 **a3,
        void *a4,
        bool a5,
        unsigned int a6,
        struct CD3DVidMemOnlyTexture **a7)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  struct ID3D11Texture2D *v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0LL;
  v9 = CD3DDeviceLevel1::OpenSharedTexture(a3, a1, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, a5, &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA2u);
  }
  else
  {
    v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v13, a6, 0, 1, (struct CD3DDeviceLevel1 *)a3, a7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA9u);
    else
      *((_QWORD *)*a7 + 32) = a4;
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v13);
  return v10;
}
