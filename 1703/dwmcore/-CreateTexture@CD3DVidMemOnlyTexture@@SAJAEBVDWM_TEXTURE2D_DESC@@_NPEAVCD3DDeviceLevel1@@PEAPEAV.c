/*
 * XREFs of ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D084
 * Callers:
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180044A7C (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004955C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801A33A0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        bool a2,
        struct CD3DDeviceLevel1 *a3,
        struct CD3DVidMemOnlyTexture **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct ID3D11Texture2D *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v7 = CD3DDeviceLevel1::CreateTexture(a3, a1, 0LL, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x53u);
  }
  else
  {
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v11, 0, a2, 0, a3, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Au);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11);
  return v8;
}
